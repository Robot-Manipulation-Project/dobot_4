# Dobot 4 (ROS 2)

ROS 2 workspace for controlling a **Dobot Magician** robotic arm over USB.  
This repository contains:

- `dobot_interface`: custom ROS 2 action definitions
- `dobot`: Python ROS 2 nodes and a low-level Dobot serial driver

## Repository layout

- `/home/runner/work/dobot_4/dobot_4/src/dobot_interface`
  - `action/JointPTP.action` (joint point-to-point action interface)
- `/home/runner/work/dobot_4/dobot_4/src/dobot`
  - ROS 2 nodes:
    - `homing_node` (`std_srvs/Trigger`)
    - `suction_cup_node` (`std_srvs/Trigger`)
    - `joint_state_node` (`sensor_msgs/JointState` publisher)
    - `joint_ptp_node` (`dobot_interface/action/JointPTP` action server)
  - `dobot_client.py` low-level Dobot protocol/serial implementation
  - `launch/dobot_launch.xml` launch file

## Prerequisites

- Ubuntu with ROS 2 installed
- Python 3
- Access to a Dobot Magician device over `/dev/ttyACM*`
- ROS 2 dependencies used by this project:
  - `rclpy`
  - `std_srvs`
  - `sensor_msgs`
  - `rosidl_default_generators` / `rosidl_default_runtime`
  - `python3-serial`

## Build

From workspace root:

```bash
cd /home/runner/work/dobot_4/dobot_4
colcon build
source install/setup.bash
```

## Run

Start all nodes with the provided launch file:

```bash
ros2 launch dobot dobot_launch.xml
```

## ROS interfaces

### Services

- `homing` (`std_srvs/srv/Trigger`)  
  Runs homing procedure.
- `suction_cup` (`std_srvs/srv/Trigger`)  
  Toggles suction cup ON/OFF on each call.

Example:

```bash
ros2 service call /homing std_srvs/srv/Trigger
ros2 service call /suction_cup std_srvs/srv/Trigger
```

### Topic

- `joint_state` (`sensor_msgs/msg/JointState`)  
  Published at ~5 Hz with 4 joint positions.

### Action

- `set_joint_ptp` (`dobot_interface/action/JointPTP`)
  - Goal: `float64[4] joint_goal`
  - Result: `bool success`
  - Feedback: `float64[4] joint_present`

Example:

```bash
ros2 action send_goal /set_joint_ptp dobot_interface/action/JointPTP "{joint_goal: [0.0, 20.0, 10.0, 0.0]}"
```

## Notes

- Joint limits are enforced in software in `dobot_client.py`.
- If no Dobot is detected on `/dev/ttyACM0-7`, the driver exits with an error.
- The launch file also starts `resource/dobot_server.py`, which runs an internal local socket server for command forwarding.

// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dobot_interface:action/JointPTP.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dobot_interface/action/detail/joint_ptp__functions.h"
#include "dobot_interface/action/detail/joint_ptp__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_Goal_type_support_ids_t;

static const _JointPTP_Goal_type_support_ids_t _JointPTP_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_Goal_type_support_symbol_names_t _JointPTP_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_Goal)),
  }
};

typedef struct _JointPTP_Goal_type_support_data_t
{
  void * data[2];
} _JointPTP_Goal_type_support_data_t;

static _JointPTP_Goal_type_support_data_t _JointPTP_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_Goal_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_Goal__get_type_hash,
  &dobot_interface__action__JointPTP_Goal__get_type_description,
  &dobot_interface__action__JointPTP_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_Goal>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_Goal)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_Result_type_support_ids_t;

static const _JointPTP_Result_type_support_ids_t _JointPTP_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_Result_type_support_symbol_names_t _JointPTP_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_Result)),
  }
};

typedef struct _JointPTP_Result_type_support_data_t
{
  void * data[2];
} _JointPTP_Result_type_support_data_t;

static _JointPTP_Result_type_support_data_t _JointPTP_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_Result_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_Result_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_Result_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_Result__get_type_hash,
  &dobot_interface__action__JointPTP_Result__get_type_description,
  &dobot_interface__action__JointPTP_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_Result>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_Result)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_Feedback_type_support_ids_t;

static const _JointPTP_Feedback_type_support_ids_t _JointPTP_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_Feedback_type_support_symbol_names_t _JointPTP_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_Feedback)),
  }
};

typedef struct _JointPTP_Feedback_type_support_data_t
{
  void * data[2];
} _JointPTP_Feedback_type_support_data_t;

static _JointPTP_Feedback_type_support_data_t _JointPTP_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_Feedback_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_Feedback__get_type_hash,
  &dobot_interface__action__JointPTP_Feedback__get_type_description,
  &dobot_interface__action__JointPTP_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_Feedback>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_Feedback)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_SendGoal_Request_type_support_ids_t;

static const _JointPTP_SendGoal_Request_type_support_ids_t _JointPTP_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_SendGoal_Request_type_support_symbol_names_t _JointPTP_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_SendGoal_Request)),
  }
};

typedef struct _JointPTP_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _JointPTP_SendGoal_Request_type_support_data_t;

static _JointPTP_SendGoal_Request_type_support_data_t _JointPTP_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_SendGoal_Request_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_SendGoal_Request__get_type_hash,
  &dobot_interface__action__JointPTP_SendGoal_Request__get_type_description,
  &dobot_interface__action__JointPTP_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Request>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_SendGoal_Request)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_SendGoal_Response_type_support_ids_t;

static const _JointPTP_SendGoal_Response_type_support_ids_t _JointPTP_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_SendGoal_Response_type_support_symbol_names_t _JointPTP_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_SendGoal_Response)),
  }
};

typedef struct _JointPTP_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _JointPTP_SendGoal_Response_type_support_data_t;

static _JointPTP_SendGoal_Response_type_support_data_t _JointPTP_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_SendGoal_Response_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_SendGoal_Response__get_type_hash,
  &dobot_interface__action__JointPTP_SendGoal_Response__get_type_description,
  &dobot_interface__action__JointPTP_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Response>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_SendGoal_Response)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_SendGoal_Event_type_support_ids_t;

static const _JointPTP_SendGoal_Event_type_support_ids_t _JointPTP_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_SendGoal_Event_type_support_symbol_names_t _JointPTP_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_SendGoal_Event)),
  }
};

typedef struct _JointPTP_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _JointPTP_SendGoal_Event_type_support_data_t;

static _JointPTP_SendGoal_Event_type_support_data_t _JointPTP_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_SendGoal_Event_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_SendGoal_Event__get_type_hash,
  &dobot_interface__action__JointPTP_SendGoal_Event__get_type_description,
  &dobot_interface__action__JointPTP_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Event>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_SendGoal_Event)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_SendGoal_type_support_ids_t;

static const _JointPTP_SendGoal_type_support_ids_t _JointPTP_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_SendGoal_type_support_symbol_names_t _JointPTP_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_SendGoal)),
  }
};

typedef struct _JointPTP_SendGoal_type_support_data_t
{
  void * data[2];
} _JointPTP_SendGoal_type_support_data_t;

static _JointPTP_SendGoal_type_support_data_t _JointPTP_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_SendGoal_service_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t JointPTP_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::action::JointPTP_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dobot_interface::action::JointPTP_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dobot_interface::action::JointPTP_SendGoal>,
  &dobot_interface__action__JointPTP_SendGoal__get_type_hash,
  &dobot_interface__action__JointPTP_SendGoal__get_type_description,
  &dobot_interface__action__JointPTP_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_interface::action::JointPTP_SendGoal>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dobot_interface::action::JointPTP_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_GetResult_Request_type_support_ids_t;

static const _JointPTP_GetResult_Request_type_support_ids_t _JointPTP_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_GetResult_Request_type_support_symbol_names_t _JointPTP_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_GetResult_Request)),
  }
};

typedef struct _JointPTP_GetResult_Request_type_support_data_t
{
  void * data[2];
} _JointPTP_GetResult_Request_type_support_data_t;

static _JointPTP_GetResult_Request_type_support_data_t _JointPTP_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_GetResult_Request_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_GetResult_Request__get_type_hash,
  &dobot_interface__action__JointPTP_GetResult_Request__get_type_description,
  &dobot_interface__action__JointPTP_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Request>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_GetResult_Request)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_GetResult_Response_type_support_ids_t;

static const _JointPTP_GetResult_Response_type_support_ids_t _JointPTP_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_GetResult_Response_type_support_symbol_names_t _JointPTP_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_GetResult_Response)),
  }
};

typedef struct _JointPTP_GetResult_Response_type_support_data_t
{
  void * data[2];
} _JointPTP_GetResult_Response_type_support_data_t;

static _JointPTP_GetResult_Response_type_support_data_t _JointPTP_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_GetResult_Response_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_GetResult_Response__get_type_hash,
  &dobot_interface__action__JointPTP_GetResult_Response__get_type_description,
  &dobot_interface__action__JointPTP_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Response>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_GetResult_Response)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_GetResult_Event_type_support_ids_t;

static const _JointPTP_GetResult_Event_type_support_ids_t _JointPTP_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_GetResult_Event_type_support_symbol_names_t _JointPTP_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_GetResult_Event)),
  }
};

typedef struct _JointPTP_GetResult_Event_type_support_data_t
{
  void * data[2];
} _JointPTP_GetResult_Event_type_support_data_t;

static _JointPTP_GetResult_Event_type_support_data_t _JointPTP_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_GetResult_Event_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_GetResult_Event__get_type_hash,
  &dobot_interface__action__JointPTP_GetResult_Event__get_type_description,
  &dobot_interface__action__JointPTP_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Event>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_GetResult_Event)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_GetResult_type_support_ids_t;

static const _JointPTP_GetResult_type_support_ids_t _JointPTP_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_GetResult_type_support_symbol_names_t _JointPTP_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_GetResult)),
  }
};

typedef struct _JointPTP_GetResult_type_support_data_t
{
  void * data[2];
} _JointPTP_GetResult_type_support_data_t;

static _JointPTP_GetResult_type_support_data_t _JointPTP_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_GetResult_service_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t JointPTP_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::action::JointPTP_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dobot_interface::action::JointPTP_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dobot_interface::action::JointPTP_GetResult>,
  &dobot_interface__action__JointPTP_GetResult__get_type_hash,
  &dobot_interface__action__JointPTP_GetResult__get_type_description,
  &dobot_interface__action__JointPTP_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_interface::action::JointPTP_GetResult>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dobot_interface::action::JointPTP_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _JointPTP_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPTP_FeedbackMessage_type_support_ids_t;

static const _JointPTP_FeedbackMessage_type_support_ids_t _JointPTP_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _JointPTP_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPTP_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPTP_FeedbackMessage_type_support_symbol_names_t _JointPTP_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, action, JointPTP_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, action, JointPTP_FeedbackMessage)),
  }
};

typedef struct _JointPTP_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _JointPTP_FeedbackMessage_type_support_data_t;

static _JointPTP_FeedbackMessage_type_support_data_t _JointPTP_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPTP_FeedbackMessage_message_typesupport_map = {
  2,
  "dobot_interface",
  &_JointPTP_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_JointPTP_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_JointPTP_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPTP_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPTP_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__action__JointPTP_FeedbackMessage__get_type_hash,
  &dobot_interface__action__JointPTP_FeedbackMessage__get_type_description,
  &dobot_interface__action__JointPTP_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::action::JointPTP_FeedbackMessage>()
{
  return &::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP_FeedbackMessage)() {
  return get_message_type_support_handle<dobot_interface::action::JointPTP_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "dobot_interface/action/detail/joint_ptp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t JointPTP_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &dobot_interface__action__JointPTP__get_type_hash,
  &dobot_interface__action__JointPTP__get_type_description,
  &dobot_interface__action__JointPTP__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<dobot_interface::action::JointPTP>()
{
  using ::dobot_interface::action::rosidl_typesupport_cpp::JointPTP_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  JointPTP_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::dobot_interface::action::JointPTP::Impl::SendGoalService>();
  JointPTP_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::dobot_interface::action::JointPTP::Impl::GetResultService>();
  JointPTP_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::dobot_interface::action::JointPTP::Impl::CancelGoalService>();
  JointPTP_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::dobot_interface::action::JointPTP::Impl::FeedbackMessage>();
  JointPTP_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::dobot_interface::action::JointPTP::Impl::GoalStatusMessage>();
  return &JointPTP_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, action, JointPTP)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<dobot_interface::action::JointPTP>();
}

#ifdef __cplusplus
}
#endif

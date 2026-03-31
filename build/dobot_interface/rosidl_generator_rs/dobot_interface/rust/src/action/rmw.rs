
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_Goal() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_Goal__init(msg: *mut JointPTP_Goal) -> bool;
    fn dobot_interface__action__JointPTP_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Goal>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Goal>);
    fn dobot_interface__action__JointPTP_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Goal>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_goal: [f64; 4],

}



impl Default for JointPTP_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_Goal__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_Goal() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_Result() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_Result__init(msg: *mut JointPTP_Result) -> bool;
    fn dobot_interface__action__JointPTP_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Result>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Result>);
    fn dobot_interface__action__JointPTP_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Result>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for JointPTP_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_Result__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_Result where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_Result() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_Feedback__init(msg: *mut JointPTP_Feedback) -> bool;
    fn dobot_interface__action__JointPTP_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Feedback>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Feedback>);
    fn dobot_interface__action__JointPTP_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_Feedback>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_present: [f64; 4],

}



impl Default for JointPTP_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_Feedback__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_Feedback() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_FeedbackMessage__init(msg: *mut JointPTP_FeedbackMessage) -> bool;
    fn dobot_interface__action__JointPTP_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_FeedbackMessage>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_FeedbackMessage>);
    fn dobot_interface__action__JointPTP_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_FeedbackMessage>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::JointPTP_Feedback,

}



impl Default for JointPTP_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_FeedbackMessage() }
  }
}




#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_SendGoal_Request__init(msg: *mut JointPTP_SendGoal_Request) -> bool;
    fn dobot_interface__action__JointPTP_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Request>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Request>);
    fn dobot_interface__action__JointPTP_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Request>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::JointPTP_Goal,

}



impl Default for JointPTP_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_SendGoal_Request() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_SendGoal_Response__init(msg: *mut JointPTP_SendGoal_Response) -> bool;
    fn dobot_interface__action__JointPTP_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Response>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Response>);
    fn dobot_interface__action__JointPTP_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_SendGoal_Response>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for JointPTP_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_SendGoal_Response() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_GetResult_Request__init(msg: *mut JointPTP_GetResult_Request) -> bool;
    fn dobot_interface__action__JointPTP_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_GetResult_Request>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_GetResult_Request>);
    fn dobot_interface__action__JointPTP_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_GetResult_Request>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for JointPTP_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_GetResult_Request() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__JointPTP_GetResult_Response__init(msg: *mut JointPTP_GetResult_Response) -> bool;
    fn dobot_interface__action__JointPTP_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_GetResult_Response>, size: usize) -> bool;
    fn dobot_interface__action__JointPTP_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPTP_GetResult_Response>);
    fn dobot_interface__action__JointPTP_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPTP_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPTP_GetResult_Response>) -> bool;
}

// Corresponds to dobot_interface__action__JointPTP_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPTP_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::JointPTP_Result,

}



impl Default for JointPTP_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__JointPTP_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__JointPTP_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPTP_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__JointPTP_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPTP_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPTP_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/JointPTP_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__JointPTP_GetResult_Response() }
  }
}






#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__JointPTP_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to dobot_interface__action__JointPTP_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct JointPTP_SendGoal;

impl rosidl_runtime_rs::Service for JointPTP_SendGoal {
    type Request = JointPTP_SendGoal_Request;
    type Response = JointPTP_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__JointPTP_SendGoal() }
    }
}




#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__JointPTP_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to dobot_interface__action__JointPTP_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct JointPTP_GetResult;

impl rosidl_runtime_rs::Service for JointPTP_GetResult {
    type Request = JointPTP_GetResult_Request;
    type Response = JointPTP_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__JointPTP_GetResult() }
    }
}



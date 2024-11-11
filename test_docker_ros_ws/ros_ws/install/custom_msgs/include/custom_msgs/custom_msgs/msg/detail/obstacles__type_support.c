// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/Obstacles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/obstacles__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/obstacles__functions.h"
#include "custom_msgs/msg/detail/obstacles__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `obstacles`
#include "custom_msgs/msg/obstacle_data.h"
// Member `obstacles`
#include "custom_msgs/msg/detail/obstacle_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__Obstacles__init(message_memory);
}

void custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_fini_function(void * message_memory)
{
  custom_msgs__msg__Obstacles__fini(message_memory);
}

size_t custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__size_function__Obstacles__obstacles(
  const void * untyped_member)
{
  const custom_msgs__msg__ObstacleData__Sequence * member =
    (const custom_msgs__msg__ObstacleData__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_const_function__Obstacles__obstacles(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__ObstacleData__Sequence * member =
    (const custom_msgs__msg__ObstacleData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_function__Obstacles__obstacles(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__ObstacleData__Sequence * member =
    (custom_msgs__msg__ObstacleData__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__fetch_function__Obstacles__obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_msgs__msg__ObstacleData * item =
    ((const custom_msgs__msg__ObstacleData *)
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_const_function__Obstacles__obstacles(untyped_member, index));
  custom_msgs__msg__ObstacleData * value =
    (custom_msgs__msg__ObstacleData *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__assign_function__Obstacles__obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_msgs__msg__ObstacleData * item =
    ((custom_msgs__msg__ObstacleData *)
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_function__Obstacles__obstacles(untyped_member, index));
  const custom_msgs__msg__ObstacleData * value =
    (const custom_msgs__msg__ObstacleData *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__resize_function__Obstacles__obstacles(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__ObstacleData__Sequence * member =
    (custom_msgs__msg__ObstacleData__Sequence *)(untyped_member);
  custom_msgs__msg__ObstacleData__Sequence__fini(member);
  return custom_msgs__msg__ObstacleData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array[2] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacles, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__Obstacles, obstacles),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__size_function__Obstacles__obstacles,  // size() function pointer
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_const_function__Obstacles__obstacles,  // get_const(index) function pointer
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_function__Obstacles__obstacles,  // get(index) function pointer
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__fetch_function__Obstacles__obstacles,  // fetch(index, &value) function pointer
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__assign_function__Obstacles__obstacles,  // assign(index, value) function pointer
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__resize_function__Obstacles__obstacles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_members = {
  "custom_msgs__msg",  // message namespace
  "Obstacles",  // message name
  2,  // number of fields
  sizeof(custom_msgs__msg__Obstacles),
  custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array,  // message members
  custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle = {
  0,
  &custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Obstacles)() {
  custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, ObstacleData)();
  if (!custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

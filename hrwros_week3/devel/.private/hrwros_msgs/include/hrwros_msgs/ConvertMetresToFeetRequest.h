// Generated by gencpp from file hrwros_msgs/ConvertMetresToFeetRequest.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETREQUEST_H
#define HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_msgs
{
template <class ContainerAllocator>
struct ConvertMetresToFeetRequest_
{
  typedef ConvertMetresToFeetRequest_<ContainerAllocator> Type;

  ConvertMetresToFeetRequest_()
    : distance_metres(0.0)  {
    }
  ConvertMetresToFeetRequest_(const ContainerAllocator& _alloc)
    : distance_metres(0.0)  {
  (void)_alloc;
    }



   typedef double _distance_metres_type;
  _distance_metres_type distance_metres;





  typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ConvertMetresToFeetRequest_

typedef ::hrwros_msgs::ConvertMetresToFeetRequest_<std::allocator<void> > ConvertMetresToFeetRequest;

typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest > ConvertMetresToFeetRequestPtr;
typedef boost::shared_ptr< ::hrwros_msgs::ConvertMetresToFeetRequest const> ConvertMetresToFeetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/melodic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'hrwros_msgs': ['/home/xy/hrwros_ws/src/hrwros/hrwros_msgs/msg', '/home/xy/hrwros_ws/devel/.private/hrwros_msgs/share/hrwros_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9cae22e6f10f281a58edfb02da2709c6";
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9cae22e6f10f281aULL;
  static const uint64_t static_value2 = 0x58edfb02da2709c6ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/ConvertMetresToFeetRequest";
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 distance_metres\n"
;
  }

  static const char* value(const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance_metres);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConvertMetresToFeetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::ConvertMetresToFeetRequest_<ContainerAllocator>& v)
  {
    s << indent << "distance_metres: ";
    Printer<double>::stream(s, indent + "  ", v.distance_metres);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_CONVERTMETRESTOFEETREQUEST_H

#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickImu.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKIMU_H
#define SICK_SCAN_MESSAGE_SICKIMU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Imu.h>

namespace sick_scan_xd
{
template <class ContainerAllocator>
struct SickImu_
{
  typedef SickImu_<ContainerAllocator> Type;

  SickImu_()
    : header()
    , Imu()
    , ticks(0)
    , quaternion_accuracy(0.0)
    , angular_velocity_reliability(0)
    , linear_acceleration_reliability(0)  {
    }
  SickImu_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , Imu(_alloc)
    , ticks(0)
    , quaternion_accuracy(0.0)
    , angular_velocity_reliability(0)
    , linear_acceleration_reliability(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::Imu_<ContainerAllocator>  _Imu_type;
  _Imu_type Imu;

   typedef uint32_t _ticks_type;
  _ticks_type ticks;

   typedef float _quaternion_accuracy_type;
  _quaternion_accuracy_type quaternion_accuracy;

   typedef uint8_t _angular_velocity_reliability_type;
  _angular_velocity_reliability_type angular_velocity_reliability;

   typedef uint8_t _linear_acceleration_reliability_type;
  _linear_acceleration_reliability_type linear_acceleration_reliability;





  typedef std::shared_ptr< ::sick_scan_xd::SickImu_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::SickImu_<ContainerAllocator> const> ConstPtr;

}; // struct SickImu_

typedef ::sick_scan_xd::SickImu_<std::allocator<void> > SickImu;

typedef std::shared_ptr< ::sick_scan_xd::SickImu > SickImuPtr;
typedef std::shared_ptr< ::sick_scan_xd::SickImu const> SickImuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::SickImu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::SickImu_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sick_scan': ['/home/rosuser/catkin_sick_scan/src/sick_scan/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickImu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickImu_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickImu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickImu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickImu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickImu_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::SickImu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "136303711a1d592affd8713883708711";
  }

  static const char* value(const ::sick_scan_xd::SickImu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x136303711a1d592aULL;
  static const uint64_t static_value2 = 0xffd8713883708711ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::SickImu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickImu";
  }

  static const char* value(const ::sick_scan_xd::SickImu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::SickImu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains the IMU data of a Sick laser scanner as an IMU message.\n"
"# The ticks correspond to the internal time stamps of the laser scanner and increase linearly with time, the tickcounter overflows.\n"
"# The quaternion_accuracy has the unit rad.\n"
"# The accuracy measures for Lienar acceleration and angular velocity are abitre values, where higher values are better.\n"
"# \n"
"#\n"
"Header header\n"
"\n"
"sensor_msgs/Imu Imu\n"
"#IMU Message\n"
"\n"
"uint32 ticks\n"
"# timestamp Ticks from laser scanner\n"
"\n"
"float32 quaternion_accuracy\n"
"#quaternion accuracy in rad\n"
"\n"
"uint8 angular_velocity_reliability\n"
"#angular velocity reliability 0 low 255 high, value should be over 3\n"
"\n"
"uint8 linear_acceleration_reliability\n"
"#linear acceleration reliability 0 low 255 high, value should be over 3\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Imu\n"
"# This is a message to hold data from an IMU (Inertial Measurement Unit)\n"
"#\n"
"# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec\n"
"#\n"
"# If the covariance of the measurement is known, it should be filled in (if all you know is the \n"
"# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)\n"
"# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the\n"
"# data a covariance will have to be assumed or gotten from some other source\n"
"#\n"
"# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation \n"
"# estimate), please set element 0 of the associated covariance matrix to -1\n"
"# If you are interpreting this message, please check for a value of -1 in the first element of each \n"
"# covariance matrix, and disregard the associated estimate.\n"
"\n"
"Header header\n"
"\n"
"geometry_msgs/Quaternion orientation\n"
"float64[9] orientation_covariance # Row major about x, y, z axes\n"
"\n"
"geometry_msgs/Vector3 angular_velocity\n"
"float64[9] angular_velocity_covariance # Row major about x, y, z axes\n"
"\n"
"geometry_msgs/Vector3 linear_acceleration\n"
"float64[9] linear_acceleration_covariance # Row major x, y z \n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::sick_scan_xd::SickImu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::SickImu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.Imu);
      stream.next(m.ticks);
      stream.next(m.quaternion_accuracy);
      stream.next(m.angular_velocity_reliability);
      stream.next(m.linear_acceleration_reliability);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickImu_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::SickImu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan_xd::SickImu_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "Imu: ";
    s << std::endl;
    Printer< ::sensor_msgs::Imu_<ContainerAllocator> >::stream(s, indent + "  ", v.Imu);
    s << indent << "ticks: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ticks);
    s << indent << "quaternion_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.quaternion_accuracy);
    s << indent << "angular_velocity_reliability: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.angular_velocity_reliability);
    s << indent << "linear_acceleration_reliability: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.linear_acceleration_reliability);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKIMU_H

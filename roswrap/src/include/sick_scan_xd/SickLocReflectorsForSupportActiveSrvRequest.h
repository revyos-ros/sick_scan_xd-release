#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocReflectorsForSupportActiveSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCREFLECTORSFORSUPPORTACTIVESRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKLOCREFLECTORSFORSUPPORTACTIVESRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan_xd
{
template <class ContainerAllocator>
struct SickLocReflectorsForSupportActiveSrvRequest_
{
  typedef SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> Type;

  SickLocReflectorsForSupportActiveSrvRequest_()
    {
    }
  SickLocReflectorsForSupportActiveSrvRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef std::shared_ptr< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocReflectorsForSupportActiveSrvRequest_

typedef ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<std::allocator<void> > SickLocReflectorsForSupportActiveSrvRequest;

typedef std::shared_ptr< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest > SickLocReflectorsForSupportActiveSrvRequestPtr;
typedef std::shared_ptr< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest const> SickLocReflectorsForSupportActiveSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocReflectorsForSupportActiveSrvRequest";
  }

  static const char* value(const ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickLocReflectorsForSupportActive for sick localization\n"
"# Whether the map based localization uses mapped reflectors for robustification.\n"
"# Example call (ROS1):\n"
"# rosservice call SickLocReflectorsForSupportActive \"{<parameter>}\"\n"
"# Example call (ROS2):\n"
"# ros2 service call SickLocReflectorsForSupportActive sick_scan/srv/SickLocReflectorsForSupportActiveSrv \"{<parameter>}\"\n"
"# \n"
"\n"
"# \n"
"# Request (input)\n"
"# \n"
"\n"
;
  }

  static const char* value(const ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocReflectorsForSupportActiveSrvRequest_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::sick_scan_xd::SickLocReflectorsForSupportActiveSrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCREFLECTORSFORSUPPORTACTIVESRVREQUEST_H

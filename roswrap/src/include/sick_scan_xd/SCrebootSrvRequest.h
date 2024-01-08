#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SCrebootSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SCREBOOTSRVREQUEST_H
#define SICK_SCAN_MESSAGE_SCREBOOTSRVREQUEST_H


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
struct SCrebootSrvRequest_
{
  typedef SCrebootSrvRequest_<ContainerAllocator> Type;

  SCrebootSrvRequest_()
    {
    }
  SCrebootSrvRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SCrebootSrvRequest_

typedef ::sick_scan_xd::SCrebootSrvRequest_<std::allocator<void> > SCrebootSrvRequest;

typedef boost::shared_ptr< ::sick_scan_xd::SCrebootSrvRequest > SCrebootSrvRequestPtr;
typedef boost::shared_ptr< ::sick_scan_xd::SCrebootSrvRequest const> SCrebootSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SCrebootSrvRequest";
  }

  static const char* value(const ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SCreboot for sick_scan\n"
"# Example call (ROS1):\n"
"# rosservice call /sick_tim_7xx/SCreboot \"{}\"\n"
"# \n"
"\n"
"# \n"
"# Request (input)\n"
"# \n"
"\n"
;
  }

  static const char* value(const ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SCrebootSrvRequest_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::sick_scan_xd::SCrebootSrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SCREBOOTSRVREQUEST_H

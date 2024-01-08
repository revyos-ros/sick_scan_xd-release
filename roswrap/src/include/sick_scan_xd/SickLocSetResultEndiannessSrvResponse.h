#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSetResultEndiannessSrvResponse.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETRESULTENDIANNESSSRVRESPONSE_H
#define SICK_SCAN_MESSAGE_SICKLOCSETRESULTENDIANNESSSRVRESPONSE_H


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
struct SickLocSetResultEndiannessSrvResponse_
{
  typedef SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> Type;

  SickLocSetResultEndiannessSrvResponse_()
    : success(false)  {
    }
  SickLocSetResultEndiannessSrvResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef std::shared_ptr< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocSetResultEndiannessSrvResponse_

typedef ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<std::allocator<void> > SickLocSetResultEndiannessSrvResponse;

typedef std::shared_ptr< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse > SickLocSetResultEndiannessSrvResponsePtr;
typedef std::shared_ptr< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse const> SickLocSetResultEndiannessSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocSetResultEndiannessSrvResponse";
  }

  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"#\n"
"# Response (output)\n"
"#\n"
"\n"
"bool success # true: success response received from localization controller, false: service failed (timeout or error status from controller)\n"
"\n"
"\n"
;
  }

  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocSetResultEndiannessSrvResponse_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSETRESULTENDIANNESSSRVRESPONSE_H

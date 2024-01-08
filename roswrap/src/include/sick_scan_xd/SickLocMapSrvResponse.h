#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocMapSrvResponse.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCMAPSRVRESPONSE_H
#define SICK_SCAN_MESSAGE_SICKLOCMAPSRVRESPONSE_H


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
struct SickLocMapSrvResponse_
{
  typedef SickLocMapSrvResponse_<ContainerAllocator> Type;

  SickLocMapSrvResponse_()
    : map()
    , success(false)  {
    }
  SickLocMapSrvResponse_(const ContainerAllocator& _alloc)
    : map(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _map_type;
  _map_type map;

   typedef uint8_t _success_type;
  _success_type success;





  typedef std::shared_ptr< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocMapSrvResponse_

typedef ::sick_scan_xd::SickLocMapSrvResponse_<std::allocator<void> > SickLocMapSrvResponse;

typedef std::shared_ptr< ::sick_scan_xd::SickLocMapSrvResponse > SickLocMapSrvResponsePtr;
typedef std::shared_ptr< ::sick_scan_xd::SickLocMapSrvResponse const> SickLocMapSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.map == rhs.map &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa2a9f1d383f960de835b664a64ecd21";
  }

  static const char* value(const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa2a9f1d383f960dULL;
  static const uint64_t static_value2 = 0xe835b664a64ecd21ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocMapSrvResponse";
  }

  static const char* value(const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# \n"
"# Response (output)\n"
"# \n"
"\n"
"string map # filename of the configured map or an empty string if no map is defined.\n"
"bool success # true: success response received from localization controller, false: service failed (timeout or error status from controller)\n"
"\n"
;
  }

  static const char* value(const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocMapSrvResponse_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan_xd::SickLocMapSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "map: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCMAPSRVRESPONSE_H

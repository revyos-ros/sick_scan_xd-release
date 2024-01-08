#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/RadarPreHeaderStatusBlock.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_RADARPREHEADERSTATUSBLOCK_H
#define SICK_SCAN_MESSAGE_RADARPREHEADERSTATUSBLOCK_H


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
struct RadarPreHeaderStatusBlock_
{
  typedef RadarPreHeaderStatusBlock_<ContainerAllocator> Type;

  RadarPreHeaderStatusBlock_()
    : uitelegramcount(0)
    , uicyclecount(0)
    , udisystemcountscan(0)
    , udisystemcounttransmit(0)
    , uiinputs(0)
    , uioutputs(0)  {
    }
  RadarPreHeaderStatusBlock_(const ContainerAllocator& _alloc)
    : uitelegramcount(0)
    , uicyclecount(0)
    , udisystemcountscan(0)
    , udisystemcounttransmit(0)
    , uiinputs(0)
    , uioutputs(0)  {
  (void)_alloc;
    }



   typedef uint32_t _uitelegramcount_type;
  _uitelegramcount_type uitelegramcount;

   typedef uint32_t _uicyclecount_type;
  _uicyclecount_type uicyclecount;

   typedef uint32_t _udisystemcountscan_type;
  _udisystemcountscan_type udisystemcountscan;

   typedef uint32_t _udisystemcounttransmit_type;
  _udisystemcounttransmit_type udisystemcounttransmit;

   typedef uint16_t _uiinputs_type;
  _uiinputs_type uiinputs;

   typedef uint16_t _uioutputs_type;
  _uioutputs_type uioutputs;





  typedef std::shared_ptr< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> const> ConstPtr;

}; // struct RadarPreHeaderStatusBlock_

typedef ::sick_scan_xd::RadarPreHeaderStatusBlock_<std::allocator<void> > RadarPreHeaderStatusBlock;

typedef std::shared_ptr< ::sick_scan_xd::RadarPreHeaderStatusBlock > RadarPreHeaderStatusBlockPtr;
typedef std::shared_ptr< ::sick_scan_xd::RadarPreHeaderStatusBlock const> RadarPreHeaderStatusBlockConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator1> & lhs, const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator2> & rhs)
{
  return lhs.uitelegramcount == rhs.uitelegramcount &&
    lhs.uicyclecount == rhs.uicyclecount &&
    lhs.udisystemcountscan == rhs.udisystemcountscan &&
    lhs.udisystemcounttransmit == rhs.udisystemcounttransmit &&
    lhs.uiinputs == rhs.uiinputs &&
    lhs.uioutputs == rhs.uioutputs;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator1> & lhs, const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfa18760ab036b23a2e4191788b3e6e4";
  }

  static const char* value(const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdfa18760ab036b23ULL;
  static const uint64_t static_value2 = 0xa2e4191788b3e6e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/RadarPreHeaderStatusBlock";
  }

  static const char* value(const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"#\n"
"#\n"
"# ROS-1:\n"
"#uint32 uiTelegramCount # telegram number\n"
"#uint32 uiCycleCount # \"scan number\"\n"
"#uint32 udiSystemCountScan # system time since power on of scan gen. [us]\n"
"#uint32 udiSystemCountTransmit # system time since power on of scan transmission [us]\n"
"#uint16 uiInputs # state of digital inputs\n"
"#uint16 uiOutputs # state of digital outputs\n"
"\n"
"# ROS-2:\n"
"uint32 uitelegramcount # telegram number\n"
"uint32 uicyclecount # \"scan number\"\n"
"uint32 udisystemcountscan # system time since power on of scan gen. [us]\n"
"uint32 udisystemcounttransmit # system time since power on of scan transmission [us]\n"
"uint16 uiinputs # state of digital inputs\n"
"uint16 uioutputs # state of digital outputs\n"
;
  }

  static const char* value(const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uitelegramcount);
      stream.next(m.uicyclecount);
      stream.next(m.udisystemcountscan);
      stream.next(m.udisystemcounttransmit);
      stream.next(m.uiinputs);
      stream.next(m.uioutputs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RadarPreHeaderStatusBlock_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan_xd::RadarPreHeaderStatusBlock_<ContainerAllocator>& v)
  {
    s << indent << "uitelegramcount: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.uitelegramcount);
    s << indent << "uicyclecount: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.uicyclecount);
    s << indent << "udisystemcountscan: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.udisystemcountscan);
    s << indent << "udisystemcounttransmit: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.udisystemcounttransmit);
    s << indent << "uiinputs: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.uiinputs);
    s << indent << "uioutputs: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.uioutputs);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_RADARPREHEADERSTATUSBLOCK_H

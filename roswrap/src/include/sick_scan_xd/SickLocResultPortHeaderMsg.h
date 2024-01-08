#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocResultPortHeaderMsg.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCRESULTPORTHEADERMSG_H
#define SICK_SCAN_MESSAGE_SICKLOCRESULTPORTHEADERMSG_H


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
struct SickLocResultPortHeaderMsg_
{
  typedef SickLocResultPortHeaderMsg_<ContainerAllocator> Type;

  SickLocResultPortHeaderMsg_()
    : magicword(0)
    , length(0)
    , payloadtype(0)
    , payloadversion(0)
    , ordernumber(0)
    , serialnumber(0)
    , fw_version()
    , telegramcounter(0)
    , systemtime(0)  {
    }
  SickLocResultPortHeaderMsg_(const ContainerAllocator& _alloc)
    : magicword(0)
    , length(0)
    , payloadtype(0)
    , payloadversion(0)
    , ordernumber(0)
    , serialnumber(0)
    , fw_version(_alloc)
    , telegramcounter(0)
    , systemtime(0)  {
  (void)_alloc;
    }



   typedef uint32_t _magicword_type;
  _magicword_type magicword;

   typedef uint32_t _length_type;
  _length_type length;

   typedef uint16_t _payloadtype_type;
  _payloadtype_type payloadtype;

   typedef uint16_t _payloadversion_type;
  _payloadversion_type payloadversion;

   typedef uint32_t _ordernumber_type;
  _ordernumber_type ordernumber;

   typedef uint32_t _serialnumber_type;
  _serialnumber_type serialnumber;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _fw_version_type;
  _fw_version_type fw_version;

   typedef uint32_t _telegramcounter_type;
  _telegramcounter_type telegramcounter;

   typedef uint64_t _systemtime_type;
  _systemtime_type systemtime;





  typedef std::shared_ptr< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocResultPortHeaderMsg_

typedef ::sick_scan_xd::SickLocResultPortHeaderMsg_<std::allocator<void> > SickLocResultPortHeaderMsg;

typedef std::shared_ptr< ::sick_scan_xd::SickLocResultPortHeaderMsg > SickLocResultPortHeaderMsgPtr;
typedef std::shared_ptr< ::sick_scan_xd::SickLocResultPortHeaderMsg const> SickLocResultPortHeaderMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator2> & rhs)
{
  return lhs.magicword == rhs.magicword &&
    lhs.length == rhs.length &&
    lhs.payloadtype == rhs.payloadtype &&
    lhs.payloadversion == rhs.payloadversion &&
    lhs.ordernumber == rhs.ordernumber &&
    lhs.serialnumber == rhs.serialnumber &&
    lhs.fw_version == rhs.fw_version &&
    lhs.telegramcounter == rhs.telegramcounter &&
    lhs.systemtime == rhs.systemtime;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator1> & lhs, const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "974a1ebc4ebbc21c0773fa36aa0f0469";
  }

  static const char* value(const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x974a1ebc4ebbc21cULL;
  static const uint64_t static_value2 = 0x0773fa36aa0f0469ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocResultPortHeaderMsg";
  }

  static const char* value(const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ros message SickLocResultPortHeaderMsg.\n"
"# SickLocResultPortHeaderMsg publishes the header of a result port telegram\n"
"# for sick localization (52 byte). See chapter 5.9 (\"About result port telegrams\")\n"
"# of the operation manual for further details.\n"
"\n"
"uint32  magicword        # Magic word SICK (0x53 0x49 0x43 0x4B). Size: 4 × UInt8 = 4 byte\n"
"uint32  length           # Length of telegram incl. header, payload, and trailer. Size: UInt32 = 4 byte\n"
"uint16  payloadtype      # Payload type: 0x06c2 = Little Endian, 0x0642 = Big Endian. Size: UInt16 = 2 byte\n"
"uint16  payloadversion   # Version of PayloadType structure. Size: UInt16 = 2 byte\n"
"uint32  ordernumber      # Order number of the localization controller. Size: UInt32 = 4 byte\n"
"uint32  serialnumber     # Serial number of the localization controller. Size: UInt32 = 4 byte\n"
"uint8[] fw_version       # Software version of the localization controller. Size: 20 × UInt8 = 20 byte\n"
"uint32  telegramcounter  # Telegram counter since last start-up. Size: UInt32 = 4 byte\n"
"uint64  systemtime       # Not used. Size: NTP = 8 byte\n"
"\n"
;
  }

  static const char* value(const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.magicword);
      stream.next(m.length);
      stream.next(m.payloadtype);
      stream.next(m.payloadversion);
      stream.next(m.ordernumber);
      stream.next(m.serialnumber);
      stream.next(m.fw_version);
      stream.next(m.telegramcounter);
      stream.next(m.systemtime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocResultPortHeaderMsg_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan_xd::SickLocResultPortHeaderMsg_<ContainerAllocator>& v)
  {
    s << indent << "magicword: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.magicword);
    s << indent << "length: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.length);
    s << indent << "payloadtype: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.payloadtype);
    s << indent << "payloadversion: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.payloadversion);
    s << indent << "ordernumber: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ordernumber);
    s << indent << "serialnumber: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.serialnumber);
    s << indent << "fw_version[]" << std::endl;
    for (size_t i = 0; i < v.fw_version.size(); ++i)
    {
      s << indent << "  fw_version[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.fw_version[i]);
    }
    s << indent << "telegramcounter: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.telegramcounter);
    s << indent << "systemtime: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.systemtime);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCRESULTPORTHEADERMSG_H

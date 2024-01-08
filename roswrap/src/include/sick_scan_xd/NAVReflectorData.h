#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/NAVReflectorData.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_NAVREFLECTORDATA_H
#define SICK_SCAN_MESSAGE_NAVREFLECTORDATA_H


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
struct NAVReflectorData_
{
  typedef NAVReflectorData_<ContainerAllocator> Type;

  NAVReflectorData_()
    : cartesian_data_valid(0)
    , x(0)
    , y(0)
    , polar_data_valid(0)
    , dist(0)
    , phi(0)
    , opt_reflector_data_valid(0)
    , local_id(0)
    , global_id(0)
    , type(0)
    , sub_type(0)
    , quality(0)
    , timestamp(0)
    , size(0)
    , hit_count(0)
    , mean_echo(0)
    , start_index(0)
    , end_index(0)
    , pos_valid(0)
    , pos_x(0.0)
    , pos_y(0.0)  {
    }
  NAVReflectorData_(const ContainerAllocator& _alloc)
    : cartesian_data_valid(0)
    , x(0)
    , y(0)
    , polar_data_valid(0)
    , dist(0)
    , phi(0)
    , opt_reflector_data_valid(0)
    , local_id(0)
    , global_id(0)
    , type(0)
    , sub_type(0)
    , quality(0)
    , timestamp(0)
    , size(0)
    , hit_count(0)
    , mean_echo(0)
    , start_index(0)
    , end_index(0)
    , pos_valid(0)
    , pos_x(0.0)
    , pos_y(0.0)  {
  (void)_alloc;
    }



   typedef uint16_t _cartesian_data_valid_type;
  _cartesian_data_valid_type cartesian_data_valid;

   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef uint16_t _polar_data_valid_type;
  _polar_data_valid_type polar_data_valid;

   typedef uint32_t _dist_type;
  _dist_type dist;

   typedef uint32_t _phi_type;
  _phi_type phi;

   typedef uint16_t _opt_reflector_data_valid_type;
  _opt_reflector_data_valid_type opt_reflector_data_valid;

   typedef uint16_t _local_id_type;
  _local_id_type local_id;

   typedef uint16_t _global_id_type;
  _global_id_type global_id;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint16_t _sub_type_type;
  _sub_type_type sub_type;

   typedef uint16_t _quality_type;
  _quality_type quality;

   typedef uint32_t _timestamp_type;
  _timestamp_type timestamp;

   typedef uint16_t _size_type;
  _size_type size;

   typedef uint16_t _hit_count_type;
  _hit_count_type hit_count;

   typedef uint16_t _mean_echo_type;
  _mean_echo_type mean_echo;

   typedef uint16_t _start_index_type;
  _start_index_type start_index;

   typedef uint16_t _end_index_type;
  _end_index_type end_index;

   typedef int8_t _pos_valid_type;
  _pos_valid_type pos_valid;

   typedef float _pos_x_type;
  _pos_x_type pos_x;

   typedef float _pos_y_type;
  _pos_y_type pos_y;





  typedef std::shared_ptr< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> const> ConstPtr;

}; // struct NAVReflectorData_

typedef ::sick_scan_xd::NAVReflectorData_<std::allocator<void> > NAVReflectorData;

typedef std::shared_ptr< ::sick_scan_xd::NAVReflectorData > NAVReflectorDataPtr;
typedef std::shared_ptr< ::sick_scan_xd::NAVReflectorData const> NAVReflectorDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator1> & lhs, const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator2> & rhs)
{
  return lhs.cartesian_data_valid == rhs.cartesian_data_valid &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.polar_data_valid == rhs.polar_data_valid &&
    lhs.dist == rhs.dist &&
    lhs.phi == rhs.phi &&
    lhs.opt_reflector_data_valid == rhs.opt_reflector_data_valid &&
    lhs.local_id == rhs.local_id &&
    lhs.global_id == rhs.global_id &&
    lhs.type == rhs.type &&
    lhs.sub_type == rhs.sub_type &&
    lhs.quality == rhs.quality &&
    lhs.timestamp == rhs.timestamp &&
    lhs.size == rhs.size &&
    lhs.hit_count == rhs.hit_count &&
    lhs.mean_echo == rhs.mean_echo &&
    lhs.start_index == rhs.start_index &&
    lhs.end_index == rhs.end_index &&
    lhs.pos_valid == rhs.pos_valid &&
    lhs.pos_x == rhs.pos_x &&
    lhs.pos_y == rhs.pos_y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator1> & lhs, const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan_xd

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c834b1997d0f1a7b5b282c13153f6e67";
  }

  static const char* value(const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc834b1997d0f1a7bULL;
  static const uint64_t static_value2 = 0x5b282c13153f6e67ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/NAVReflectorData";
  }

  static const char* value(const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ROS message of NAV350ReflectorData, see sick_nav_scandata_parser.h and NAV-350 telegram listing for details.\n"
"\n"
"# cartesian data in lidar coordinates in mm\n"
"uint16 cartesian_data_valid\n"
"int32 x\n"
"int32 y\n"
"\n"
"# polar data in lidar coordinates in mm and mdeg\n"
"uint16 polar_data_valid\n"
"uint32 dist\n"
"uint32 phi\n"
"\n"
"# optional reflector data\n"
"uint16 opt_reflector_data_valid\n"
"uint16 local_id\n"
"uint16 global_id\n"
"uint8 type \n"
"uint16 sub_type\n"
"uint16 quality\n"
"uint32 timestamp\n"
"uint16 size\n"
"uint16 hit_count\n"
"uint16 mean_echo\n"
"uint16 start_index\n"
"uint16 end_index\n"
"\n"
"# reflector position in ros coordinates\n"
"int8 pos_valid   # pose_x, pose_y and pose_yaw are valid if pose_valid > 0\n"
"float32 pos_x    # x position in ros coordinates in m\n"
"float32 pos_y    # y position in ros coordinates in m\n"
;
  }

  static const char* value(const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cartesian_data_valid);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.polar_data_valid);
      stream.next(m.dist);
      stream.next(m.phi);
      stream.next(m.opt_reflector_data_valid);
      stream.next(m.local_id);
      stream.next(m.global_id);
      stream.next(m.type);
      stream.next(m.sub_type);
      stream.next(m.quality);
      stream.next(m.timestamp);
      stream.next(m.size);
      stream.next(m.hit_count);
      stream.next(m.mean_echo);
      stream.next(m.start_index);
      stream.next(m.end_index);
      stream.next(m.pos_valid);
      stream.next(m.pos_x);
      stream.next(m.pos_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NAVReflectorData_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan_xd::NAVReflectorData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan_xd::NAVReflectorData_<ContainerAllocator>& v)
  {
    s << indent << "cartesian_data_valid: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cartesian_data_valid);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "polar_data_valid: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.polar_data_valid);
    s << indent << "dist: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dist);
    s << indent << "phi: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.phi);
    s << indent << "opt_reflector_data_valid: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.opt_reflector_data_valid);
    s << indent << "local_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.local_id);
    s << indent << "global_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.global_id);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "sub_type: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.sub_type);
    s << indent << "quality: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.quality);
    s << indent << "timestamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.timestamp);
    s << indent << "size: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.size);
    s << indent << "hit_count: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.hit_count);
    s << indent << "mean_echo: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mean_echo);
    s << indent << "start_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.start_index);
    s << indent << "end_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.end_index);
    s << indent << "pos_valid: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pos_valid);
    s << indent << "pos_x: ";
    Printer<float>::stream(s, indent + "  ", v.pos_x);
    s << indent << "pos_y: ";
    Printer<float>::stream(s, indent + "  ", v.pos_y);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_NAVREFLECTORDATA_H

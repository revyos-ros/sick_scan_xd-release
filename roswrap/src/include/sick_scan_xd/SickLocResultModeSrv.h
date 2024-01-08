#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocResultModeSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCRESULTMODESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCRESULTMODESRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickLocResultModeSrvRequest.h>
#include <sick_scan_xd/SickLocResultModeSrvResponse.h>


namespace sick_scan_xd
{

struct SickLocResultModeSrv
{

typedef SickLocResultModeSrvRequest Request;
typedef SickLocResultModeSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocResultModeSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickLocResultModeSrv > {
  static const char* value()
  {
    return "2f5955347ceb3a6a079af7cb70bb2354";
  }

  static const char* value(const ::sick_scan_xd::SickLocResultModeSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickLocResultModeSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocResultModeSrv";
  }

  static const char* value(const ::sick_scan_xd::SickLocResultModeSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickLocResultModeSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocResultModeSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocResultModeSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocResultModeSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocResultModeSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocResultModeSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickLocResultModeSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocResultModeSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocResultModeSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocResultModeSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickLocResultModeSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocResultModeSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocResultModeSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocResultModeSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocResultModeSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocResultModeSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickLocResultModeSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocResultModeSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocResultModeSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocResultModeSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCRESULTMODESRV_H

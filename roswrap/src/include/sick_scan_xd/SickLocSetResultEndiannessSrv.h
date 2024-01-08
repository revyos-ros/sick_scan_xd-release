#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSetResultEndiannessSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETRESULTENDIANNESSSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSETRESULTENDIANNESSSRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickLocSetResultEndiannessSrvRequest.h>
#include <sick_scan_xd/SickLocSetResultEndiannessSrvResponse.h>


namespace sick_scan_xd
{

struct SickLocSetResultEndiannessSrv
{

typedef SickLocSetResultEndiannessSrvRequest Request;
typedef SickLocSetResultEndiannessSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocSetResultEndiannessSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrv > {
  static const char* value()
  {
    return "ad546145ccc5332dee356f4fbbf0ae49";
  }

  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocSetResultEndiannessSrv";
  }

  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocSetResultEndiannessSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocSetResultEndiannessSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetResultEndiannessSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSETRESULTENDIANNESSSRV_H

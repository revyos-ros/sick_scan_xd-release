#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocOdometryRestrictYMotionSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCODOMETRYRESTRICTYMOTIONSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCODOMETRYRESTRICTYMOTIONSRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickLocOdometryRestrictYMotionSrvRequest.h>
#include <sick_scan_xd/SickLocOdometryRestrictYMotionSrvResponse.h>


namespace sick_scan_xd
{

struct SickLocOdometryRestrictYMotionSrv
{

typedef SickLocOdometryRestrictYMotionSrvRequest Request;
typedef SickLocOdometryRestrictYMotionSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocOdometryRestrictYMotionSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv > {
  static const char* value()
  {
    return "9bb3f90ef7a4dde50a9193067d4298d5";
  }

  static const char* value(const ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocOdometryRestrictYMotionSrv";
  }

  static const char* value(const ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocOdometryRestrictYMotionSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCODOMETRYRESTRICTYMOTIONSRV_H

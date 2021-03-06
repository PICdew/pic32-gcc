
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_ServerRequestInterceptorOperations__
#define __org_omg_PortableInterceptor_ServerRequestInterceptorOperations__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace PortableInterceptor
      {
          class ServerRequestInfo;
          class ServerRequestInterceptorOperations;
      }
    }
  }
}

class org::omg::PortableInterceptor::ServerRequestInterceptorOperations : public ::java::lang::Object
{

public:
  virtual void receive_request_service_contexts(::org::omg::PortableInterceptor::ServerRequestInfo *) = 0;
  virtual void receive_request(::org::omg::PortableInterceptor::ServerRequestInfo *) = 0;
  virtual void send_reply(::org::omg::PortableInterceptor::ServerRequestInfo *) = 0;
  virtual void send_exception(::org::omg::PortableInterceptor::ServerRequestInfo *) = 0;
  virtual void send_other(::org::omg::PortableInterceptor::ServerRequestInfo *) = 0;
  virtual void destroy() = 0;
  virtual ::java::lang::String * name() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_PortableInterceptor_ServerRequestInterceptorOperations__

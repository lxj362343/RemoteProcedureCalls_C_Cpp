// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: message.proto
#ifndef GRPC_message_2eproto__INCLUDED
#define GRPC_message_2eproto__INCLUDED

#include "message.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace prptopkg {

class srvc final {
 public:
  static constexpr char const* service_full_name() {
    return "prptopkg.srvc";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status add(::grpc::ClientContext* context, const ::prptopkg::input& request, ::prptopkg::output* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>> Asyncadd(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>>(AsyncaddRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>> PrepareAsyncadd(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>>(PrepareAsyncaddRaw(context, request, cq));
    }
    virtual ::grpc::Status echo(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::prptopkg::output* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>> Asyncecho(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>>(AsyncechoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>> PrepareAsyncecho(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>>(PrepareAsyncechoRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) = 0;
      virtual void add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) = 0;
      virtual void echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>* AsyncaddRaw(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>* PrepareAsyncaddRaw(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>* AsyncechoRaw(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::prptopkg::output>* PrepareAsyncechoRaw(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status add(::grpc::ClientContext* context, const ::prptopkg::input& request, ::prptopkg::output* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>> Asyncadd(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>>(AsyncaddRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>> PrepareAsyncadd(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>>(PrepareAsyncaddRaw(context, request, cq));
    }
    ::grpc::Status echo(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::prptopkg::output* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>> Asyncecho(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>>(AsyncechoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>> PrepareAsyncecho(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::prptopkg::output>>(PrepareAsyncechoRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) override;
      void add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) override;
      void echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::prptopkg::output>* AsyncaddRaw(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::prptopkg::output>* PrepareAsyncaddRaw(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::prptopkg::output>* AsyncechoRaw(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::prptopkg::output>* PrepareAsyncechoRaw(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_add_;
    const ::grpc::internal::RpcMethod rpcmethod_echo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status add(::grpc::ServerContext* context, const ::prptopkg::input* request, ::prptopkg::output* response);
    virtual ::grpc::Status echo(::grpc::ServerContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_add() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add(::grpc::ServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestadd(::grpc::ServerContext* context, ::prptopkg::input* request, ::grpc::ServerAsyncResponseWriter< ::prptopkg::output>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_echo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_echo() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_echo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status echo(::grpc::ServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestecho(::grpc::ServerContext* context, ::prptopkg::nill* request, ::grpc::ServerAsyncResponseWriter< ::prptopkg::output>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_add<WithAsyncMethod_echo<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_add() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::prptopkg::input, ::prptopkg::output>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::prptopkg::input* request, ::prptopkg::output* response) { return this->add(context, request, response); }));}
    void SetMessageAllocatorFor_add(
        ::grpc::experimental::MessageAllocator< ::prptopkg::input, ::prptopkg::output>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::prptopkg::input, ::prptopkg::output>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add(::grpc::ServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* add(
      ::grpc::CallbackServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* add(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_echo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_echo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::prptopkg::nill, ::prptopkg::output>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::prptopkg::nill* request, ::prptopkg::output* response) { return this->echo(context, request, response); }));}
    void SetMessageAllocatorFor_echo(
        ::grpc::experimental::MessageAllocator< ::prptopkg::nill, ::prptopkg::output>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::prptopkg::nill, ::prptopkg::output>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_echo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status echo(::grpc::ServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* echo(
      ::grpc::CallbackServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* echo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_add<ExperimentalWithCallbackMethod_echo<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_add<ExperimentalWithCallbackMethod_echo<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_add() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add(::grpc::ServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_echo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_echo() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_echo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status echo(::grpc::ServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_add() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add(::grpc::ServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestadd(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_echo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_echo() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_echo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status echo(::grpc::ServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestecho(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_add() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->add(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add(::grpc::ServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* add(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* add(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_echo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_echo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->echo(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_echo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status echo(::grpc::ServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* echo(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* echo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_add() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::prptopkg::input, ::prptopkg::output>(std::bind(&WithStreamedUnaryMethod_add<BaseClass>::Streamedadd, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status add(::grpc::ServerContext* /*context*/, const ::prptopkg::input* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedadd(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::prptopkg::input,::prptopkg::output>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_echo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_echo() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::prptopkg::nill, ::prptopkg::output>(std::bind(&WithStreamedUnaryMethod_echo<BaseClass>::Streamedecho, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_echo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status echo(::grpc::ServerContext* /*context*/, const ::prptopkg::nill* /*request*/, ::prptopkg::output* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedecho(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::prptopkg::nill,::prptopkg::output>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_add<WithStreamedUnaryMethod_echo<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_add<WithStreamedUnaryMethod_echo<Service > > StreamedService;
};

}  // namespace prptopkg


#endif  // GRPC_message_2eproto__INCLUDED

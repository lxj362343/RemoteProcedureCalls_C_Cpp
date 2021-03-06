// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: message.proto

#include "message.pb.h"
#include "message.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace prptopkg {

static const char* srvc_method_names[] = {
  "/prptopkg.srvc/add",
  "/prptopkg.srvc/echo",
};

std::unique_ptr< srvc::Stub> srvc::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< srvc::Stub> stub(new srvc::Stub(channel));
  return stub;
}

srvc::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_add_(srvc_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_echo_(srvc_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status srvc::Stub::add(::grpc::ClientContext* context, const ::prptopkg::input& request, ::prptopkg::output* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_add_, context, request, response);
}

void srvc::Stub::experimental_async::add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_add_, context, request, response, std::move(f));
}

void srvc::Stub::experimental_async::add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_add_, context, request, response, std::move(f));
}

void srvc::Stub::experimental_async::add(::grpc::ClientContext* context, const ::prptopkg::input* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_add_, context, request, response, reactor);
}

void srvc::Stub::experimental_async::add(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_add_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::prptopkg::output>* srvc::Stub::AsyncaddRaw(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::prptopkg::output>::Create(channel_.get(), cq, rpcmethod_add_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::prptopkg::output>* srvc::Stub::PrepareAsyncaddRaw(::grpc::ClientContext* context, const ::prptopkg::input& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::prptopkg::output>::Create(channel_.get(), cq, rpcmethod_add_, context, request, false);
}

::grpc::Status srvc::Stub::echo(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::prptopkg::output* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_echo_, context, request, response);
}

void srvc::Stub::experimental_async::echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_echo_, context, request, response, std::move(f));
}

void srvc::Stub::experimental_async::echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_echo_, context, request, response, std::move(f));
}

void srvc::Stub::experimental_async::echo(::grpc::ClientContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_echo_, context, request, response, reactor);
}

void srvc::Stub::experimental_async::echo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::prptopkg::output* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_echo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::prptopkg::output>* srvc::Stub::AsyncechoRaw(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::prptopkg::output>::Create(channel_.get(), cq, rpcmethod_echo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::prptopkg::output>* srvc::Stub::PrepareAsyncechoRaw(::grpc::ClientContext* context, const ::prptopkg::nill& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::prptopkg::output>::Create(channel_.get(), cq, rpcmethod_echo_, context, request, false);
}

srvc::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      srvc_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< srvc::Service, ::prptopkg::input, ::prptopkg::output>(
          std::mem_fn(&srvc::Service::add), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      srvc_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< srvc::Service, ::prptopkg::nill, ::prptopkg::output>(
          std::mem_fn(&srvc::Service::echo), this)));
}

srvc::Service::~Service() {
}

::grpc::Status srvc::Service::add(::grpc::ServerContext* context, const ::prptopkg::input* request, ::prptopkg::output* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status srvc::Service::echo(::grpc::ServerContext* context, const ::prptopkg::nill* request, ::prptopkg::output* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace prptopkg


THIRD_PARTY_INCLUDES_START
#pragma warning (disable : 4005)
#pragma warning (disable : 4125)
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: unaryDemo.proto

#include "unaryDemo.pb.h"
#include "unaryDemo.grpc.pb.h"

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

static const char* UnaryDemoService_method_names[] = {
  "/UnaryDemoService/Request",
};

std::unique_ptr< UnaryDemoService::Stub> UnaryDemoService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< UnaryDemoService::Stub> stub(new UnaryDemoService::Stub(channel, options));
  return stub;
}

UnaryDemoService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Request_(UnaryDemoService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status UnaryDemoService::Stub::Request(::grpc::ClientContext* context, const ::UnaryDemoRequest& request, ::UnaryDemoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::UnaryDemoRequest, ::UnaryDemoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Request_, context, request, response);
}

void UnaryDemoService::Stub::async::Request(::grpc::ClientContext* context, const ::UnaryDemoRequest* request, ::UnaryDemoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::UnaryDemoRequest, ::UnaryDemoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Request_, context, request, response, std::move(f));
}

void UnaryDemoService::Stub::async::Request(::grpc::ClientContext* context, const ::UnaryDemoRequest* request, ::UnaryDemoResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Request_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::UnaryDemoResponse>* UnaryDemoService::Stub::PrepareAsyncRequestRaw(::grpc::ClientContext* context, const ::UnaryDemoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::UnaryDemoResponse, ::UnaryDemoRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Request_, context, request);
}

::grpc::ClientAsyncResponseReader< ::UnaryDemoResponse>* UnaryDemoService::Stub::AsyncRequestRaw(::grpc::ClientContext* context, const ::UnaryDemoRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

UnaryDemoService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      UnaryDemoService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< UnaryDemoService::Service, ::UnaryDemoRequest, ::UnaryDemoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](UnaryDemoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::UnaryDemoRequest* req,
             ::UnaryDemoResponse* resp) {
               return service->Request(ctx, req, resp);
             }, this)));
}

UnaryDemoService::Service::~Service() {
}

::grpc::Status UnaryDemoService::Service::Request(::grpc::ServerContext* context, const ::UnaryDemoRequest* request, ::UnaryDemoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


THIRD_PARTY_INCLUDES_END

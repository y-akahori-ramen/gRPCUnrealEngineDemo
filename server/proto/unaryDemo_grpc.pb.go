// Code generated by protoc-gen-go-grpc. DO NOT EDIT.

package proto

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
// Requires gRPC-Go v1.32.0 or later.
const _ = grpc.SupportPackageIsVersion7

// UnaryDemoServiceClient is the client API for UnaryDemoService service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
type UnaryDemoServiceClient interface {
	Request(ctx context.Context, in *UnaryDemoRequest, opts ...grpc.CallOption) (*UnaryDemoResponse, error)
}

type unaryDemoServiceClient struct {
	cc grpc.ClientConnInterface
}

func NewUnaryDemoServiceClient(cc grpc.ClientConnInterface) UnaryDemoServiceClient {
	return &unaryDemoServiceClient{cc}
}

func (c *unaryDemoServiceClient) Request(ctx context.Context, in *UnaryDemoRequest, opts ...grpc.CallOption) (*UnaryDemoResponse, error) {
	out := new(UnaryDemoResponse)
	err := c.cc.Invoke(ctx, "/grpcDemo.UnaryDemoService/Request", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// UnaryDemoServiceServer is the server API for UnaryDemoService service.
// All implementations must embed UnimplementedUnaryDemoServiceServer
// for forward compatibility
type UnaryDemoServiceServer interface {
	Request(context.Context, *UnaryDemoRequest) (*UnaryDemoResponse, error)
	mustEmbedUnimplementedUnaryDemoServiceServer()
}

// UnimplementedUnaryDemoServiceServer must be embedded to have forward compatible implementations.
type UnimplementedUnaryDemoServiceServer struct {
}

func (UnimplementedUnaryDemoServiceServer) Request(context.Context, *UnaryDemoRequest) (*UnaryDemoResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Request not implemented")
}
func (UnimplementedUnaryDemoServiceServer) mustEmbedUnimplementedUnaryDemoServiceServer() {}

// UnsafeUnaryDemoServiceServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to UnaryDemoServiceServer will
// result in compilation errors.
type UnsafeUnaryDemoServiceServer interface {
	mustEmbedUnimplementedUnaryDemoServiceServer()
}

func RegisterUnaryDemoServiceServer(s grpc.ServiceRegistrar, srv UnaryDemoServiceServer) {
	s.RegisterService(&UnaryDemoService_ServiceDesc, srv)
}

func _UnaryDemoService_Request_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(UnaryDemoRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(UnaryDemoServiceServer).Request(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/grpcDemo.UnaryDemoService/Request",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(UnaryDemoServiceServer).Request(ctx, req.(*UnaryDemoRequest))
	}
	return interceptor(ctx, in, info, handler)
}

// UnaryDemoService_ServiceDesc is the grpc.ServiceDesc for UnaryDemoService service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var UnaryDemoService_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "grpcDemo.UnaryDemoService",
	HandlerType: (*UnaryDemoServiceServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Request",
			Handler:    _UnaryDemoService_Request_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "unaryDemo.proto",
}

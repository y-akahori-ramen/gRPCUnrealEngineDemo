// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.26.0
// 	protoc        v3.17.3
// source: clientStreamingDemo.proto

package proto

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type UploadClientTextureRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Types that are assignable to Data:
	//	*UploadClientTextureRequest_ImageName
	//	*UploadClientTextureRequest_Chunk
	Data isUploadClientTextureRequest_Data `protobuf_oneof:"data"`
}

func (x *UploadClientTextureRequest) Reset() {
	*x = UploadClientTextureRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_clientStreamingDemo_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *UploadClientTextureRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*UploadClientTextureRequest) ProtoMessage() {}

func (x *UploadClientTextureRequest) ProtoReflect() protoreflect.Message {
	mi := &file_clientStreamingDemo_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use UploadClientTextureRequest.ProtoReflect.Descriptor instead.
func (*UploadClientTextureRequest) Descriptor() ([]byte, []int) {
	return file_clientStreamingDemo_proto_rawDescGZIP(), []int{0}
}

func (m *UploadClientTextureRequest) GetData() isUploadClientTextureRequest_Data {
	if m != nil {
		return m.Data
	}
	return nil
}

func (x *UploadClientTextureRequest) GetImageName() string {
	if x, ok := x.GetData().(*UploadClientTextureRequest_ImageName); ok {
		return x.ImageName
	}
	return ""
}

func (x *UploadClientTextureRequest) GetChunk() []byte {
	if x, ok := x.GetData().(*UploadClientTextureRequest_Chunk); ok {
		return x.Chunk
	}
	return nil
}

type isUploadClientTextureRequest_Data interface {
	isUploadClientTextureRequest_Data()
}

type UploadClientTextureRequest_ImageName struct {
	ImageName string `protobuf:"bytes,1,opt,name=imageName,proto3,oneof"`
}

type UploadClientTextureRequest_Chunk struct {
	Chunk []byte `protobuf:"bytes,2,opt,name=chunk,proto3,oneof"`
}

func (*UploadClientTextureRequest_ImageName) isUploadClientTextureRequest_Data() {}

func (*UploadClientTextureRequest_Chunk) isUploadClientTextureRequest_Data() {}

type UploadClientTextureResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Size uint32 `protobuf:"varint,1,opt,name=size,proto3" json:"size,omitempty"`
}

func (x *UploadClientTextureResponse) Reset() {
	*x = UploadClientTextureResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_clientStreamingDemo_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *UploadClientTextureResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*UploadClientTextureResponse) ProtoMessage() {}

func (x *UploadClientTextureResponse) ProtoReflect() protoreflect.Message {
	mi := &file_clientStreamingDemo_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use UploadClientTextureResponse.ProtoReflect.Descriptor instead.
func (*UploadClientTextureResponse) Descriptor() ([]byte, []int) {
	return file_clientStreamingDemo_proto_rawDescGZIP(), []int{1}
}

func (x *UploadClientTextureResponse) GetSize() uint32 {
	if x != nil {
		return x.Size
	}
	return 0
}

var File_clientStreamingDemo_proto protoreflect.FileDescriptor

var file_clientStreamingDemo_proto_rawDesc = []byte{
	0x0a, 0x19, 0x63, 0x6c, 0x69, 0x65, 0x6e, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x69, 0x6e,
	0x67, 0x44, 0x65, 0x6d, 0x6f, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x08, 0x67, 0x72, 0x70,
	0x63, 0x44, 0x65, 0x6d, 0x6f, 0x22, 0x5c, 0x0a, 0x1a, 0x55, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x43,
	0x6c, 0x69, 0x65, 0x6e, 0x74, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x52, 0x65, 0x71, 0x75,
	0x65, 0x73, 0x74, 0x12, 0x1e, 0x0a, 0x09, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4e, 0x61, 0x6d, 0x65,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x48, 0x00, 0x52, 0x09, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4e,
	0x61, 0x6d, 0x65, 0x12, 0x16, 0x0a, 0x05, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x18, 0x02, 0x20, 0x01,
	0x28, 0x0c, 0x48, 0x00, 0x52, 0x05, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x42, 0x06, 0x0a, 0x04, 0x64,
	0x61, 0x74, 0x61, 0x22, 0x31, 0x0a, 0x1b, 0x55, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x43, 0x6c, 0x69,
	0x65, 0x6e, 0x74, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e,
	0x73, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x73, 0x69, 0x7a, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0d,
	0x52, 0x04, 0x73, 0x69, 0x7a, 0x65, 0x32, 0x7f, 0x0a, 0x1b, 0x43, 0x6c, 0x69, 0x6e, 0x65, 0x6e,
	0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x69, 0x6e, 0x67, 0x44, 0x65, 0x6d, 0x6f, 0x53, 0x65,
	0x72, 0x76, 0x69, 0x63, 0x65, 0x12, 0x60, 0x0a, 0x0d, 0x55, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x54,
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x12, 0x24, 0x2e, 0x67, 0x72, 0x70, 0x63, 0x44, 0x65, 0x6d,
	0x6f, 0x2e, 0x55, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x43, 0x6c, 0x69, 0x65, 0x6e, 0x74, 0x54, 0x65,
	0x78, 0x74, 0x75, 0x72, 0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x25, 0x2e, 0x67,
	0x72, 0x70, 0x63, 0x44, 0x65, 0x6d, 0x6f, 0x2e, 0x55, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x43, 0x6c,
	0x69, 0x65, 0x6e, 0x74, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f,
	0x6e, 0x73, 0x65, 0x22, 0x00, 0x28, 0x01, 0x42, 0x2e, 0x5a, 0x2c, 0x67, 0x69, 0x74, 0x68, 0x75,
	0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x79, 0x2d, 0x61, 0x6b, 0x61, 0x68, 0x6f, 0x72, 0x69, 0x2d,
	0x72, 0x61, 0x6d, 0x65, 0x6e, 0x2f, 0x67, 0x52, 0x50, 0x43, 0x55, 0x45, 0x34, 0x44, 0x65, 0x6d,
	0x6f, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_clientStreamingDemo_proto_rawDescOnce sync.Once
	file_clientStreamingDemo_proto_rawDescData = file_clientStreamingDemo_proto_rawDesc
)

func file_clientStreamingDemo_proto_rawDescGZIP() []byte {
	file_clientStreamingDemo_proto_rawDescOnce.Do(func() {
		file_clientStreamingDemo_proto_rawDescData = protoimpl.X.CompressGZIP(file_clientStreamingDemo_proto_rawDescData)
	})
	return file_clientStreamingDemo_proto_rawDescData
}

var file_clientStreamingDemo_proto_msgTypes = make([]protoimpl.MessageInfo, 2)
var file_clientStreamingDemo_proto_goTypes = []interface{}{
	(*UploadClientTextureRequest)(nil),  // 0: grpcDemo.UploadClientTextureRequest
	(*UploadClientTextureResponse)(nil), // 1: grpcDemo.UploadClientTextureResponse
}
var file_clientStreamingDemo_proto_depIdxs = []int32{
	0, // 0: grpcDemo.ClinentStreamingDemoService.UploadTexture:input_type -> grpcDemo.UploadClientTextureRequest
	1, // 1: grpcDemo.ClinentStreamingDemoService.UploadTexture:output_type -> grpcDemo.UploadClientTextureResponse
	1, // [1:2] is the sub-list for method output_type
	0, // [0:1] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_clientStreamingDemo_proto_init() }
func file_clientStreamingDemo_proto_init() {
	if File_clientStreamingDemo_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_clientStreamingDemo_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*UploadClientTextureRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_clientStreamingDemo_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*UploadClientTextureResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	file_clientStreamingDemo_proto_msgTypes[0].OneofWrappers = []interface{}{
		(*UploadClientTextureRequest_ImageName)(nil),
		(*UploadClientTextureRequest_Chunk)(nil),
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_clientStreamingDemo_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   2,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_clientStreamingDemo_proto_goTypes,
		DependencyIndexes: file_clientStreamingDemo_proto_depIdxs,
		MessageInfos:      file_clientStreamingDemo_proto_msgTypes,
	}.Build()
	File_clientStreamingDemo_proto = out.File
	file_clientStreamingDemo_proto_rawDesc = nil
	file_clientStreamingDemo_proto_goTypes = nil
	file_clientStreamingDemo_proto_depIdxs = nil
}
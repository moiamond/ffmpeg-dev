/*** Autogenerated by WIDL 1.6 from DeckLinkAPI.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif

#ifdef __cplusplus
extern "C" {
#endif

MIDL_DEFINE_GUID(IID, LIBID_DeckLinkAPI, 0xd864517a, 0xedd5, 0x466d, 0x86,0x7d, 0xc8,0x19,0xf1,0xc0,0x52,0xbb);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkTimecode, 0xbc6cfbd3, 0x8317, 0x4325, 0xac,0x1c, 0x12,0x16,0x39,0x1e,0x93,0x40);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDisplayModeIterator, 0x9c88499f, 0xf601, 0x4021, 0xb8,0x0b, 0x03,0x2e,0x4e,0xb4,0x1c,0x35);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDisplayMode, 0x3eb2c1ab, 0x0a3d, 0x4523, 0xa3,0xad, 0xf4,0x0d,0x7f,0xb1,0x4e,0x78);
MIDL_DEFINE_GUID(IID, IID_IDeckLink, 0xc418fbdd, 0x0587, 0x48ed, 0x8f,0xe5, 0x64,0x0f,0x0a,0x14,0xaf,0x91);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkConfiguration, 0xcb71734a, 0xfe37, 0x4e8d, 0x8e,0x13, 0x80,0x21,0x33,0xa1,0xc3,0xf2);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkEncoderConfiguration, 0x138050e5, 0xc60a, 0x4552, 0xbf,0x3f, 0x0f,0x35,0x80,0x49,0x32,0x7e);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDeckControlStatusCallback, 0x53436ffb, 0xb434, 0x4906, 0xba,0xdc, 0xae,0x30,0x60,0xff,0xe8,0xef);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDeckControl, 0x8e1c3ace, 0x19c7, 0x4e00, 0x8b,0x92, 0xd8,0x04,0x31,0xd9,0x58,0xbe);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingDeviceNotificationCallback, 0xf9531d64, 0x3305, 0x4b29, 0xa3,0x87, 0x7f,0x74,0xbb,0x0d,0x0e,0x84);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingH264InputCallback, 0x823c475f, 0x55ae, 0x46f9, 0x89,0x0c, 0x53,0x7c,0xc5,0xce,0xdc,0xca);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingDiscovery, 0x2c837444, 0xf989, 0x4d87, 0x90,0x1a, 0x47,0xc8,0xa3,0x6d,0x09,0x6d);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingVideoEncodingMode, 0x1ab8035b, 0xcd13, 0x458d, 0xb6,0xdf, 0x5e,0x8f,0x7c,0x21,0x41,0xd9);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingMutableVideoEncodingMode, 0x19bf7d90, 0x1e0a, 0x400d, 0xb2,0xc6, 0xff,0xc4,0xe7,0x8a,0xd4,0x9d);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingVideoEncodingModePresetIterator, 0x7ac731a3, 0xc950, 0x4ad0, 0x80,0x4a, 0x83,0x77,0xaa,0x51,0xc6,0xc4);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingDeviceInput, 0x24b6b6ec, 0x1727, 0x44bb, 0x98,0x18, 0x34,0xff,0x08,0x6a,0xcf,0x98);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingH264NALPacket, 0xe260e955, 0x14be, 0x4395, 0x97,0x75, 0x9f,0x02,0xcc,0x0a,0x9d,0x89);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingAudioPacket, 0xd9eb5902, 0x1ad2, 0x43f4, 0x9e,0x2c, 0x3c,0xfa,0x50,0xb5,0xee,0x19);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingMPEG2TSPacket, 0x91810d1c, 0x4fb3, 0x4aaa, 0xae,0x56, 0xfa,0x30,0x1d,0x3d,0xfa,0x4c);
MIDL_DEFINE_GUID(IID, IID_IBMDStreamingH264NALParser, 0x5867f18c, 0x5bfa, 0x4ccc, 0xb2,0xa7, 0x9d,0xfd,0x14,0x04,0x17,0xd2);
MIDL_DEFINE_GUID(CLSID, CLSID_CBMDStreamingDiscovery, 0x0caa31f6, 0x8a26, 0x40b0, 0x86,0xa4, 0xbf,0x58,0xdc,0xca,0x71,0x0c);
MIDL_DEFINE_GUID(CLSID, CLSID_CBMDStreamingH264NALParser, 0x7753efbd, 0x951c, 0x407c, 0x97,0xa5, 0x23,0xc7,0x37,0xb7,0x3b,0x52);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoOutputCallback, 0x20aa5225, 0x1958, 0x47cb, 0x82,0x0b, 0x80,0xa8,0xd5,0x21,0xa6,0xee);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInputCallback, 0xdd04e5ec, 0x7415, 0x42ab, 0xae,0x4a, 0xe8,0x0c,0x4d,0xfc,0x04,0x4a);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkEncoderInputCallback, 0xacf13e61, 0xf4a0, 0x4974, 0xa6,0xa7, 0x59,0xaf,0xf6,0x26,0x8b,0x31);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkMemoryAllocator, 0xb36eb6e7, 0x9d29, 0x4aa8, 0x92,0xef, 0x84,0x3b,0x87,0xa2,0x89,0xe8);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkAudioOutputCallback, 0x403c681b, 0x7f46, 0x4a12, 0xb9,0x93, 0x2b,0xb1,0x27,0x08,0x4e,0xe6);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkIterator, 0x50fb36cd, 0x3063, 0x4b73, 0xbd,0xbb, 0x95,0x80,0x87,0xf2,0xd8,0xba);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkAPIInformation, 0x7bea3c68, 0x730d, 0x4322, 0xaf,0x34, 0x8a,0x71,0x52,0xb5,0x32,0xa4);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkOutput, 0xcc5c8a6e, 0x3f2f, 0x4b3a, 0x87,0xea, 0xfd,0x78,0xaf,0x30,0x05,0x64);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInput, 0xaf22762b, 0xdfac, 0x4846, 0xaa,0x79, 0xfa,0x88,0x83,0x56,0x09,0x95);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkEncoderInput, 0x270587da, 0x6b7d, 0x42e7, 0xa1,0xf0, 0x6d,0x85,0x3f,0x58,0x11,0x85);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoFrame, 0x3f716fe0, 0xf023, 0x4111, 0xbe,0x5d, 0xef,0x44,0x14,0xc0,0x5b,0x17);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkMutableVideoFrame, 0x69e2639f, 0x40da, 0x4e19, 0xb6,0xf2, 0x20,0xac,0xe8,0x15,0xc3,0x90);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoFrame3DExtensions, 0xda0f7e4a, 0xedc7, 0x48a8, 0x9c,0xdd, 0x2d,0xb5,0x1c,0x72,0x9c,0xd7);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoFrameMetadataExtensions, 0xd5973dc9, 0x6432, 0x46d0, 0x8f,0x0b, 0x24,0x96,0xf8,0xa1,0x23,0x8f);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoInputFrame, 0x05cfe374, 0x537c, 0x4094, 0x9a,0x57, 0x68,0x05,0x25,0x11,0x8f,0x44);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoFrameAncillary, 0x732e723c, 0xd1a4, 0x4e29, 0x9e,0x8e, 0x4a,0x88,0x79,0x7a,0x00,0x04);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkEncoderPacket, 0xb693f36c, 0x316e, 0x4af1, 0xb6,0xc2, 0xf3,0x89,0xa4,0xbc,0xa6,0x20);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkEncoderVideoPacket, 0x4e7fd944, 0xe8c7, 0x4eac, 0xb8,0xc0, 0x7b,0x77,0xf8,0x0f,0x5a,0xe0);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkEncoderAudioPacket, 0x49e8edc8, 0x693b, 0x4e14, 0x8e,0xf6, 0x12,0xc6,0x58,0xf5,0xa0,0x7a);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkH265NALPacket, 0x639c8e0b, 0x68d5, 0x4bde, 0xa6,0xd4, 0x95,0xf3,0xae,0xaf,0xf2,0xe7);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkAudioInputPacket, 0xe43d5870, 0x2894, 0x11de, 0x8c,0x30, 0x08,0x00,0x20,0x0c,0x9a,0x66);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkScreenPreviewCallback, 0xb1d3f49a, 0x85fe, 0x4c5d, 0x95,0xc8, 0x0b,0x5d,0x5d,0xcc,0xd4,0x38);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkGLScreenPreviewHelper, 0x504e2209, 0xcac7, 0x4c1a, 0x9f,0xb4, 0xc5,0xbb,0x62,0x74,0xd2,0x2f);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDX9ScreenPreviewHelper, 0x2094b522, 0xd1a1, 0x40c0, 0x9a,0xc7, 0x1c,0x01,0x22,0x18,0xef,0x02);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkNotificationCallback, 0xb002a1ec, 0x070d, 0x4288, 0x82,0x89, 0xbd,0x5d,0x36,0xe5,0xff,0x0d);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkNotification, 0x0a1fb207, 0xe215, 0x441b, 0x9b,0x19, 0x6f,0xa1,0x57,0x59,0x46,0xc5);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkAttributes, 0xabc11843, 0xd966, 0x44cb, 0x96,0xe2, 0xa1,0xcb,0x5d,0x31,0x35,0xc4);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkStatus, 0x5f558200, 0x4028, 0x49bc, 0xbe,0xac, 0xdb,0x3f,0xa4,0xa9,0x6e,0x46);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkKeyer, 0x89afcaf5, 0x65f8, 0x421e, 0x98,0xf7, 0x96,0xfe,0x5f,0x5b,0xfb,0xa3);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoConversion, 0x3bbcb8a2, 0xda2c, 0x42d9, 0xb5,0xd8, 0x88,0x08,0x36,0x44,0xe9,0x9a);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDeviceNotificationCallback, 0x4997053b, 0x0adf, 0x4cc8, 0xac,0x70, 0x7a,0x50,0xc4,0xbe,0x72,0x8f);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDiscovery, 0xcdbf631c, 0xbc76, 0x45fa, 0xb4,0x4d, 0xc5,0x50,0x59,0xbc,0x61,0x01);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkIterator, 0x1f2e109a, 0x8f4f, 0x49e4, 0x92,0x03, 0x13,0x55,0x95,0xcb,0x6f,0xa5);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkAPIInformation, 0x263ca19f, 0xed09, 0x482e, 0x9f,0x9d, 0x84,0x00,0x57,0x83,0xa2,0x37);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkGLScreenPreviewHelper, 0xf63e77c7, 0xb655, 0x4a4a, 0x9a,0xd0, 0x3c,0xa8,0x5d,0x39,0x43,0x43);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkDX9ScreenPreviewHelper, 0xcc010023, 0xe01d, 0x4525, 0x9d,0x59, 0x80,0xc8,0xab,0x3d,0xc7,0xa0);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkVideoConversion, 0x7dbbbb11, 0x5b7b, 0x467d, 0xae,0xa4, 0xce,0xa4,0x68,0xfd,0x36,0x8c);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkDiscovery, 0x1073a05c, 0xd885, 0x47e9, 0xb3,0xc6, 0x12,0x9b,0x3f,0x9f,0x64,0x8b);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkEncoderConfiguration_v10_5, 0x67455668, 0x0848, 0x45df, 0x8d,0x8e, 0x35,0x0a,0x77,0xc9,0xa0,0x28);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkConfiguration_v10_4, 0x1e69fcf6, 0x4203, 0x4936, 0x80,0x76, 0x2a,0x9f,0x4c,0xfd,0x50,0xcb);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkConfiguration_v10_2, 0xc679a35b, 0x610c, 0x4d09, 0xb7,0x48, 0x1d,0x04,0x78,0x10,0x0f,0xc0);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkOutput_v9_9, 0xa3ef0963, 0x0862, 0x44ed, 0x92,0xa9, 0xee,0x89,0xab,0xf4,0x31,0xc7);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInput_v9_2, 0x6d40ef78, 0x28b9, 0x4e21, 0x99,0x0d, 0x95,0xbb,0x77,0x50,0xa0,0x4f);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDeckControlStatusCallback_v8_1, 0xe5f693c1, 0x4283, 0x4716, 0xb1,0x8f, 0xc1,0x43,0x15,0x21,0x95,0x5b);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDeckControl_v8_1, 0x522a9e39, 0x0f3c, 0x4742, 0x94,0xee, 0xd8,0x0d,0xe3,0x35,0xda,0x1d);
MIDL_DEFINE_GUID(IID, IID_IDeckLink_v8_0, 0x62bff75d, 0x6569, 0x4e55, 0x8d,0x4d, 0x66,0xaa,0x03,0x82,0x9a,0xbc);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkIterator_v8_0, 0x74e936fc, 0xcc28, 0x4a67, 0x81,0xa0, 0x1e,0x94,0xe5,0x2d,0x4e,0x69);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkIterator_v8_0, 0xd9eda3b3, 0x2887, 0x41fa, 0xb7,0x24, 0x01,0x7c,0xf1,0xeb,0x1d,0x37);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDeckControl_v7_9, 0xa4d81043, 0x0619, 0x42b7, 0x8e,0xd6, 0x60,0x2d,0x29,0x04,0x1d,0xf7);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoOutputCallback_v7_6, 0xe763a626, 0x4a3c, 0x49d1, 0xbf,0x13, 0xe7,0xad,0x36,0x92,0xae,0x52);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInputCallback_v7_6, 0x31d28ee7, 0x88b6, 0x4cb1, 0x89,0x7a, 0xcd,0xbf,0x79,0xa2,0x64,0x14);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDisplayModeIterator_v7_6, 0x455d741f, 0x1779, 0x4800, 0x86,0xf5, 0x0b,0x5d,0x13,0xd7,0x97,0x51);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDisplayMode_v7_6, 0x87451e84, 0x2b7e, 0x439e, 0xa6,0x29, 0x43,0x93,0xea,0x4a,0x85,0x50);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkOutput_v7_6, 0x29228142, 0xeb8c, 0x4141, 0xa6,0x21, 0xf7,0x40,0x26,0x45,0x09,0x55);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInput_v7_6, 0x300c135a, 0x9f43, 0x48e2, 0x99,0x06, 0x6d,0x79,0x11,0xd9,0x3c,0xf1);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkTimecode_v7_6, 0xefb9bca6, 0xa521, 0x44f7, 0xbd,0x69, 0x23,0x32,0xf2,0x4d,0x9e,0xe6);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoFrame_v7_6, 0xa8d8238e, 0x6b18, 0x4196, 0x99,0xe1, 0x5a,0xf7,0x17,0xb8,0x3d,0x32);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkMutableVideoFrame_v7_6, 0x46fcee00, 0xb4e6, 0x43d0, 0x91,0xc0, 0x02,0x3a,0x7f,0xce,0xb3,0x4f);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoInputFrame_v7_6, 0x9a74fa41, 0xae9f, 0x47ac, 0x8c,0xf4, 0x01,0xf4,0x2d,0xd5,0x99,0x65);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkScreenPreviewCallback_v7_6, 0x373f499d, 0x4b4d, 0x4518, 0xad,0x22, 0x63,0x54,0xe5,0xa5,0x82,0x5e);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkGLScreenPreviewHelper_v7_6, 0xba575cd9, 0xa15e, 0x497b, 0xb2,0xc2, 0xf9,0xaf,0xe7,0xbe,0x4e,0xba);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoConversion_v7_6, 0x3eb504c9, 0xf97d, 0x40fe, 0xa1,0x58, 0xd4,0x07,0xd4,0x8c,0xb5,0x3b);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkConfiguration_v7_6, 0xb8ead569, 0xb764, 0x47f0, 0xa7,0x3f, 0xae,0x40,0xdf,0x6c,0xbf,0x10);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkGLScreenPreviewHelper_v7_6, 0xd398cee7, 0x4434, 0x4ca3, 0x9b,0xa6, 0x5a,0xe3,0x45,0x56,0xb9,0x05);
MIDL_DEFINE_GUID(CLSID, CLSID_CDeckLinkVideoConversion_v7_6, 0xffa84f77, 0x73be, 0x4fb7, 0xb0,0x3e, 0xb5,0xe4,0x4b,0x9f,0x75,0x9b);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInputCallback_v7_3, 0xfd6f311d, 0x4d00, 0x444b, 0x9e,0xd4, 0x1f,0x25,0xb5,0x73,0x0a,0xd0);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkOutput_v7_3, 0x271c65e3, 0xc323, 0x4344, 0xa3,0x0f, 0xd9,0x08,0xbc,0xb2,0x0a,0xa3);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInput_v7_3, 0x4973f012, 0x9925, 0x458c, 0x87,0x1c, 0x18,0x77,0x4c,0xdb,0xbe,0xcb);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoInputFrame_v7_3, 0xcf317790, 0x2894, 0x11de, 0x8c,0x30, 0x08,0x00,0x20,0x0c,0x9a,0x66);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDisplayModeIterator_v7_1, 0xb28131b6, 0x59ac, 0x4857, 0xb5,0xac, 0xcd,0x75,0xd5,0x88,0x3e,0x2f);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkDisplayMode_v7_1, 0xaf0cd6d5, 0x8376, 0x435e, 0x84,0x33, 0x54,0xf9,0xdd,0x53,0x0a,0xc3);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoOutputCallback_v7_1, 0xebd01afa, 0xe4b0, 0x49c6, 0xa0,0x1d, 0xed,0xb9,0xd1,0xb5,0x5f,0xd9);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInputCallback_v7_1, 0x7f94f328, 0x5ed4, 0x4e9f, 0x97,0x29, 0x76,0xa8,0x6b,0xdc,0x99,0xcc);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkOutput_v7_1, 0xae5b3e9b, 0x4e1e, 0x4535, 0xb6,0xe8, 0x48,0x0f,0xf5,0x2f,0x6c,0xe5);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkInput_v7_1, 0x2b54edef, 0x5b32, 0x429f, 0xba,0x11, 0xbb,0x99,0x05,0x96,0xea,0xcd);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoFrame_v7_1, 0x333f3a10, 0x8c2d, 0x43cf, 0xb7,0x9d, 0x46,0x56,0x0f,0xee,0xa1,0xce);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkVideoInputFrame_v7_1, 0xc8b41d95, 0x8848, 0x40ee, 0x9b,0x37, 0x6e,0x34,0x17,0xfb,0x11,0x4b);
MIDL_DEFINE_GUID(IID, IID_IDeckLinkAudioInputPacket_v7_1, 0xc86de4f6, 0xa29f, 0x42e3, 0xab,0x3a, 0x13,0x63,0xe2,0x9f,0x07,0x88);

#ifdef __cplusplus
}
#endif

#undef MIDL_DEFINE_GUID

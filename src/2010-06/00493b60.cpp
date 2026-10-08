// from server: 100% by auto
// roc 2010-06 00493b60  unit: seg_00490000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493b60
//
// 00493b60  83ec40               sub esp, 0x40
// 00493b63  8b442448             mov eax, dword ptr [esp + 0x48]
// 00493b67  f30f1000             movss xmm0, dword ptr [eax]
// 00493b6b  f30f110424           movss dword ptr [esp], xmm0
// 00493b70  f30f104004           movss xmm0, dword ptr [eax + 4]
// 00493b75  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00493b7b  f30f104008           movss xmm0, dword ptr [eax + 8]
// 00493b80  8b542444             mov edx, dword ptr [esp + 0x44]
// 00493b84  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00493b8a  f30f104024           movss xmm0, dword ptr [eax + 0x24]
// 00493b8f  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00493b95  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 00493b9a  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00493ba0  f30f104010           movss xmm0, dword ptr [eax + 0x10]
// 00493ba5  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00493bab  f30f104014           movss xmm0, dword ptr [eax + 0x14]
// 00493bb0  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00493bb6  f30f104028           movss xmm0, dword ptr [eax + 0x28]
// 00493bbb  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00493bc1  f30f104018           movss xmm0, dword ptr [eax + 0x18]
// 00493bc6  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 00493bcc  f30f10401c           movss xmm0, dword ptr [eax + 0x1c]
// 00493bd1  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 00493bd7  f30f104020           movss xmm0, dword ptr [eax + 0x20]
// 00493bdc  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 00493be2  f30f10402c           movss xmm0, dword ptr [eax + 0x2c]
// 00493be7  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 00493bed  0f57c0               xorps xmm0, xmm0
// 00493bf0  8d0424               lea eax, [esp]
// 00493bf3  50                   push eax
// 00493bf4  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00493bfa  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00493c00  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00493c06  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00493c0e  52                   push edx
// 00493c0f  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00493c15  e8f6feffff           call 0x493b10
// 00493c1a  83c440               add esp, 0x40
// 00493c1d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp

// roc 2009-12 004ccff0  unit: G3D::VARArea  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccff0
//
// 004ccff0  83ec40               sub esp, 0x40
// 004ccff3  8b442448             mov eax, dword ptr [esp + 0x48]
// 004ccff7  f30f1000             movss xmm0, dword ptr [eax]
// 004ccffb  f30f110424           movss dword ptr [esp], xmm0
// 004cd000  f30f104004           movss xmm0, dword ptr [eax + 4]
// 004cd005  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004cd00b  f30f104008           movss xmm0, dword ptr [eax + 8]
// 004cd010  8b542444             mov edx, dword ptr [esp + 0x44]
// 004cd014  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004cd01a  f30f104024           movss xmm0, dword ptr [eax + 0x24]
// 004cd01f  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004cd025  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 004cd02a  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004cd030  f30f104010           movss xmm0, dword ptr [eax + 0x10]
// 004cd035  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004cd03b  f30f104014           movss xmm0, dword ptr [eax + 0x14]
// 004cd040  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004cd046  f30f104028           movss xmm0, dword ptr [eax + 0x28]
// 004cd04b  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004cd051  f30f104018           movss xmm0, dword ptr [eax + 0x18]
// 004cd056  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004cd05c  f30f10401c           movss xmm0, dword ptr [eax + 0x1c]
// 004cd061  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004cd067  f30f104020           movss xmm0, dword ptr [eax + 0x20]
// 004cd06c  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004cd072  f30f10402c           movss xmm0, dword ptr [eax + 0x2c]
// 004cd077  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 004cd07d  0f57c0               xorps xmm0, xmm0
// 004cd080  8d0424               lea eax, [esp]
// 004cd083  50                   push eax
// 004cd084  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004cd08a  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004cd090  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004cd096  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004cd09e  52                   push edx
// 004cd09f  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 004cd0a5  e8f6feffff           call 0x4ccfa0
// 004cd0aa  83c440               add esp, 0x40
// 004cd0ad  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp

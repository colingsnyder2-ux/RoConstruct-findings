// roc 2009-12 004d9e40  unit: G3D::Win32Window  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9e40
//
// 004d9e40  83ec40               sub esp, 0x40
// 004d9e43  8b442444             mov eax, dword ptr [esp + 0x44]
// 004d9e47  f30f1000             movss xmm0, dword ptr [eax]
// 004d9e4b  f30f104804           movss xmm1, dword ptr [eax + 4]
// 004d9e50  f30f110424           movss dword ptr [esp], xmm0
// 004d9e55  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 004d9e5a  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004d9e60  f30f104018           movss xmm0, dword ptr [eax + 0x18]
// 004d9e65  f30f114c2410         movss dword ptr [esp + 0x10], xmm1
// 004d9e6b  f30f104810           movss xmm1, dword ptr [eax + 0x10]
// 004d9e70  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004d9e76  0f57c0               xorps xmm0, xmm0
// 004d9e79  f30f114c2414         movss dword ptr [esp + 0x14], xmm1
// 004d9e7f  f30f10481c           movss xmm1, dword ptr [eax + 0x1c]
// 004d9e84  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004d9e8a  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004d9e90  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 004d9e96  f30f104024           movss xmm0, dword ptr [eax + 0x24]
// 004d9e9b  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 004d9ea1  f30f104808           movss xmm1, dword ptr [eax + 8]
// 004d9ea6  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004d9eac  f30f104028           movss xmm0, dword ptr [eax + 0x28]
// 004d9eb1  f30f114c2420         movss dword ptr [esp + 0x20], xmm1
// 004d9eb7  f30f104814           movss xmm1, dword ptr [eax + 0x14]
// 004d9ebc  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004d9ec2  f30f10402c           movss xmm0, dword ptr [eax + 0x2c]
// 004d9ec7  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 004d9ecd  f30f104820           movss xmm1, dword ptr [eax + 0x20]
// 004d9ed2  8d0424               lea eax, [esp]
// 004d9ed5  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004d9edb  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 004d9ee3  50                   push eax
// 004d9ee4  f30f114c242c         movss dword ptr [esp + 0x2c], xmm1
// 004d9eea  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 004d9ef0  ff15f0ba9800         call dword ptr [0x98baf0]
// 004d9ef6  83c440               add esp, 0x40
// 004d9ef9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp

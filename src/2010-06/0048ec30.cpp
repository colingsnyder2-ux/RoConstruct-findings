// roc 2010-06 0048ec30  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ec30
//
// 0048ec30  83ec40               sub esp, 0x40
// 0048ec33  8b442444             mov eax, dword ptr [esp + 0x44]
// 0048ec37  f30f1000             movss xmm0, dword ptr [eax]
// 0048ec3b  f30f104804           movss xmm1, dword ptr [eax + 4]
// 0048ec40  f30f110424           movss dword ptr [esp], xmm0
// 0048ec45  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 0048ec4a  f30f11442404         movss dword ptr [esp + 4], xmm0
// 0048ec50  f30f104018           movss xmm0, dword ptr [eax + 0x18]
// 0048ec55  f30f114c2410         movss dword ptr [esp + 0x10], xmm1
// 0048ec5b  f30f104810           movss xmm1, dword ptr [eax + 0x10]
// 0048ec60  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0048ec66  0f57c0               xorps xmm0, xmm0
// 0048ec69  f30f114c2414         movss dword ptr [esp + 0x14], xmm1
// 0048ec6f  f30f10481c           movss xmm1, dword ptr [eax + 0x1c]
// 0048ec74  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 0048ec7a  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 0048ec80  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 0048ec86  f30f104024           movss xmm0, dword ptr [eax + 0x24]
// 0048ec8b  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 0048ec91  f30f104808           movss xmm1, dword ptr [eax + 8]
// 0048ec96  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 0048ec9c  f30f104028           movss xmm0, dword ptr [eax + 0x28]
// 0048eca1  f30f114c2420         movss dword ptr [esp + 0x20], xmm1
// 0048eca7  f30f104814           movss xmm1, dword ptr [eax + 0x14]
// 0048ecac  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 0048ecb2  f30f10402c           movss xmm0, dword ptr [eax + 0x2c]
// 0048ecb7  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 0048ecbd  f30f104820           movss xmm1, dword ptr [eax + 0x20]
// 0048ecc2  8d0424               lea eax, [esp]
// 0048ecc5  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 0048eccb  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 0048ecd3  50                   push eax
// 0048ecd4  f30f114c242c         movss dword ptr [esp + 0x2c], xmm1
// 0048ecda  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 0048ece0  ff1548ab9e00         call dword ptr [0x9eab48]
// 0048ece6  83c440               add esp, 0x40
// 0048ece9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp

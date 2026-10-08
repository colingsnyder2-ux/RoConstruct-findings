// roc 2009-12 00911d10  unit: RBX::RenderNew::RenderScene  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00911d10
//
// 00911d10  83ec30               sub esp, 0x30
// 00911d13  e8982cceff           call 0x5f49b0
// 00911d18  50                   push eax
// 00911d19  8d4c2404             lea ecx, [esp + 4]
// 00911d1d  e8de1bceff           call 0x5f3900
// 00911d22  b801000000           mov eax, 1
// 00911d27  84052cccb700         test byte ptr [0xb7cc2c], al
// 00911d2d  7521                 jne 0x911d50
// 00911d2f  0f57c0               xorps xmm0, xmm0
// 00911d32  09052cccb700         or dword ptr [0xb7cc2c], eax
// 00911d38  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 00911d40  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 00911d48  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 00911d50  d9442444             fld dword ptr [esp + 0x44]
// 00911d54  8b442440             mov eax, dword ptr [esp + 0x40]
// 00911d58  8b542438             mov edx, dword ptr [esp + 0x38]
// 00911d5c  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 00911d64  51                   push ecx
// 00911d65  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00911d69  d91c24               fstp dword ptr [esp]
// 00911d6c  50                   push eax
// 00911d6d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00911d71  51                   push ecx
// 00911d72  52                   push edx
// 00911d73  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00911d79  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 00911d81  50                   push eax
// 00911d82  8d4c2414             lea ecx, [esp + 0x14]
// 00911d86  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00911d8c  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 00911d94  51                   push ecx
// 00911d95  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00911d9b  e820f5ffff           call 0x9112c0
// 00911da0  83c448               add esp, 0x48
// 00911da3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXPAVRenderDevice@2@ABVColor4@2@11M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp

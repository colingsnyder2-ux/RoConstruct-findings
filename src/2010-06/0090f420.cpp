// from server: 100% by auto
// roc 2010-06 0090f420  unit: G3D::TextureManager::TextureArgs  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090f420
//
// 0090f420  83ec30               sub esp, 0x30
// 0090f423  e8f87ec4ff           call 0x557320
// 0090f428  50                   push eax
// 0090f429  8d4c2404             lea ecx, [esp + 4]
// 0090f42d  e83e6cc4ff           call 0x556070
// 0090f432  b801000000           mov eax, 1
// 0090f437  8405d03cc000         test byte ptr [0xc03cd0], al
// 0090f43d  7521                 jne 0x90f460
// 0090f43f  0f57c0               xorps xmm0, xmm0
// 0090f442  0905d03cc000         or dword ptr [0xc03cd0], eax
// 0090f448  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 0090f450  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 0090f458  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 0090f460  d9442444             fld dword ptr [esp + 0x44]
// 0090f464  8b442440             mov eax, dword ptr [esp + 0x40]
// 0090f468  8b542438             mov edx, dword ptr [esp + 0x38]
// 0090f46c  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 0090f474  51                   push ecx
// 0090f475  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0090f479  d91c24               fstp dword ptr [esp]
// 0090f47c  50                   push eax
// 0090f47d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0090f481  51                   push ecx
// 0090f482  52                   push edx
// 0090f483  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 0090f489  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 0090f491  50                   push eax
// 0090f492  8d4c2414             lea ecx, [esp + 0x14]
// 0090f496  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 0090f49c  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 0090f4a4  51                   push ecx
// 0090f4a5  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 0090f4ab  e820f5ffff           call 0x90e9d0
// 0090f4b0  83c448               add esp, 0x48
// 0090f4b3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXPAVRenderDevice@2@ABVColor4@2@11M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp

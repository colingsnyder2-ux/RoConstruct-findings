// roc 2008-06 00511c80  unit: G3D::GCamera  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00511c80
//
// 00511c80  6aff                 push -1
// 00511c82  6821c47c00           push 0x7cc421
// 00511c87  64a100000000         mov eax, dword ptr fs:[0]
// 00511c8d  50                   push eax
// 00511c8e  64892500000000       mov dword ptr fs:[0], esp
// 00511c95  51                   push ecx
// 00511c96  33c0                 xor eax, eax
// 00511c98  890424               mov dword ptr [esp], eax
// 00511c9b  56                   push esi
// 00511c9c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00511ca0  894604               mov dword ptr [esi + 4], eax
// 00511ca3  894608               mov dword ptr [esi + 8], eax
// 00511ca6  8906                 mov dword ptr [esi], eax
// 00511ca8  894610               mov dword ptr [esi + 0x10], eax
// 00511cab  894614               mov dword ptr [esi + 0x14], eax
// 00511cae  89460c               mov dword ptr [esi + 0xc], eax
// 00511cb1  89442410             mov dword ptr [esp + 0x10], eax
// 00511cb5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00511cb9  56                   push esi
// 00511cba  50                   push eax
// 00511cbb  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00511cc3  e848f8ffff           call 0x511510
// 00511cc8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00511ccc  8bc6                 mov eax, esi
// 00511cce  5e                   pop esi
// 00511ccf  64890d00000000       mov dword ptr fs:[0], ecx
// 00511cd6  83c410               add esp, 0x10
// 00511cd9  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?frustum@GCamera@G3D@@QBE?AVFrustum@12@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp

// roc 2010-06 0055c6b0  unit: G3D::GCamera  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055c6b0
//
// 0055c6b0  6aff                 push -1
// 0055c6b2  6871159900           push 0x991571
// 0055c6b7  64a100000000         mov eax, dword ptr fs:[0]
// 0055c6bd  50                   push eax
// 0055c6be  64892500000000       mov dword ptr fs:[0], esp
// 0055c6c5  51                   push ecx
// 0055c6c6  33c0                 xor eax, eax
// 0055c6c8  890424               mov dword ptr [esp], eax
// 0055c6cb  56                   push esi
// 0055c6cc  8b742418             mov esi, dword ptr [esp + 0x18]
// 0055c6d0  894604               mov dword ptr [esi + 4], eax
// 0055c6d3  894608               mov dword ptr [esi + 8], eax
// 0055c6d6  8906                 mov dword ptr [esi], eax
// 0055c6d8  894610               mov dword ptr [esi + 0x10], eax
// 0055c6db  894614               mov dword ptr [esi + 0x14], eax
// 0055c6de  89460c               mov dword ptr [esi + 0xc], eax
// 0055c6e1  89442410             mov dword ptr [esp + 0x10], eax
// 0055c6e5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055c6e9  56                   push esi
// 0055c6ea  50                   push eax
// 0055c6eb  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0055c6f3  e888f5ffff           call 0x55bc80
// 0055c6f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055c6fc  8bc6                 mov eax, esi
// 0055c6fe  5e                   pop esi
// 0055c6ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c706  83c410               add esp, 0x10
// 0055c709  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?frustum@GCamera@G3D@@QBE?AVFrustum@12@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp

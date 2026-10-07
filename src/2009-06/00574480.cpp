// roc 2009-06 00574480  unit: G3D::GCamera  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574480
//
// 00574480  6aff                 push -1
// 00574482  68e1058600           push 0x8605e1
// 00574487  64a100000000         mov eax, dword ptr fs:[0]
// 0057448d  50                   push eax
// 0057448e  64892500000000       mov dword ptr fs:[0], esp
// 00574495  51                   push ecx
// 00574496  33c0                 xor eax, eax
// 00574498  890424               mov dword ptr [esp], eax
// 0057449b  56                   push esi
// 0057449c  8b742418             mov esi, dword ptr [esp + 0x18]
// 005744a0  894604               mov dword ptr [esi + 4], eax
// 005744a3  894608               mov dword ptr [esi + 8], eax
// 005744a6  8906                 mov dword ptr [esi], eax
// 005744a8  894610               mov dword ptr [esi + 0x10], eax
// 005744ab  894614               mov dword ptr [esi + 0x14], eax
// 005744ae  89460c               mov dword ptr [esi + 0xc], eax
// 005744b1  89442410             mov dword ptr [esp + 0x10], eax
// 005744b5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005744b9  56                   push esi
// 005744ba  50                   push eax
// 005744bb  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005744c3  e848f8ffff           call 0x573d10
// 005744c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005744cc  8bc6                 mov eax, esi
// 005744ce  5e                   pop esi
// 005744cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005744d6  83c410               add esp, 0x10
// 005744d9  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?frustum@GCamera@G3D@@QBE?AVFrustum@12@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp

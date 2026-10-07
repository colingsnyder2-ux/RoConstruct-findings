// roc 2008-06 0047d640  unit: G3D::TextureManager::TextureArgs  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d640
//
// 0047d640  6aff                 push -1
// 0047d642  68482a7c00           push 0x7c2a48
// 0047d647  64a100000000         mov eax, dword ptr fs:[0]
// 0047d64d  50                   push eax
// 0047d64e  64892500000000       mov dword ptr fs:[0], esp
// 0047d655  51                   push ecx
// 0047d656  56                   push esi
// 0047d657  8bf1                 mov esi, ecx
// 0047d659  89742404             mov dword ptr [esp + 4], esi
// 0047d65d  8d4e04               lea ecx, [esi + 4]
// 0047d660  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0047d668  c70670978100         mov dword ptr [esi], 0x819770
// 0047d66e  ff1560248000         call dword ptr [0x802460]
// 0047d674  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047d678  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0047d67f  8bc6                 mov eax, esi
// 0047d681  5e                   pop esi
// 0047d682  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d689  83c410               add esp, 0x10
// 0047d68c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp

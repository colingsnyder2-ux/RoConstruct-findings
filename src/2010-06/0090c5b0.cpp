// from server: 100% by auto
// roc 2010-06 0090c5b0  unit: G3D::TextureManager::TextureArgs  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c5b0
//
// 0090c5b0  6aff                 push -1
// 0090c5b2  6888e39800           push 0x98e388
// 0090c5b7  64a100000000         mov eax, dword ptr fs:[0]
// 0090c5bd  50                   push eax
// 0090c5be  64892500000000       mov dword ptr fs:[0], esp
// 0090c5c5  51                   push ecx
// 0090c5c6  56                   push esi
// 0090c5c7  8bf1                 mov esi, ecx
// 0090c5c9  89742404             mov dword ptr [esp + 4], esi
// 0090c5cd  8d4e04               lea ecx, [esi + 4]
// 0090c5d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0090c5d8  c70644e8a100         mov dword ptr [esi], 0xa1e844
// 0090c5de  ff1504a49e00         call dword ptr [0x9ea404]
// 0090c5e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0090c5e8  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0090c5ef  8bc6                 mov eax, esi
// 0090c5f1  5e                   pop esi
// 0090c5f2  64890d00000000       mov dword ptr fs:[0], ecx
// 0090c5f9  83c410               add esp, 0x10
// 0090c5fc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp

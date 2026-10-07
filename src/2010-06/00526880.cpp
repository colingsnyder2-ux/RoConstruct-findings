// roc 2010-06 00526880  unit: G3D::TextureManager::TextureArgs  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526880
//
// 00526880  6aff                 push -1
// 00526882  6888e39800           push 0x98e388
// 00526887  64a100000000         mov eax, dword ptr fs:[0]
// 0052688d  50                   push eax
// 0052688e  64892500000000       mov dword ptr fs:[0], esp
// 00526895  51                   push ecx
// 00526896  56                   push esi
// 00526897  8bf1                 mov esi, ecx
// 00526899  89742404             mov dword ptr [esp + 4], esi
// 0052689d  c70644e8a100         mov dword ptr [esi], 0xa1e844
// 005268a3  8d4e04               lea ecx, [esi + 4]
// 005268a6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005268ae  ff1500a49e00         call dword ptr [0x9ea400]
// 005268b4  f644241801           test byte ptr [esp + 0x18], 1
// 005268b9  c7062ce8a100         mov dword ptr [esi], 0xa1e82c
// 005268bf  7409                 je 0x5268ca
// 005268c1  56                   push esi
// 005268c2  e8d3102800           call 0x7a799a
// 005268c7  83c404               add esp, 4
// 005268ca  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005268ce  8bc6                 mov eax, esi
// 005268d0  5e                   pop esi
// 005268d1  64890d00000000       mov dword ptr fs:[0], ecx
// 005268d8  83c410               add esp, 0x10
// 005268db  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??_GTextureArgs@TextureManager@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp

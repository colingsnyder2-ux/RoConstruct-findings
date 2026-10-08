// roc 2007-03 0072f8c0  unit: seg_00720000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f8c0
//
// 0072f8c0  6aff                 push -1
// 0072f8c2  68d8cb7600           push 0x76cbd8
// 0072f8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0072f8cd  50                   push eax
// 0072f8ce  51                   push ecx
// 0072f8cf  56                   push esi
// 0072f8d0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072f8d5  33c4                 xor eax, esp
// 0072f8d7  50                   push eax
// 0072f8d8  8d44240c             lea eax, [esp + 0xc]
// 0072f8dc  64a300000000         mov dword ptr fs:[0], eax
// 0072f8e2  8bf1                 mov esi, ecx
// 0072f8e4  89742408             mov dword ptr [esp + 8], esi
// 0072f8e8  8d4e04               lea ecx, [esi + 4]
// 0072f8eb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0072f8f3  c70698e57900         mov dword ptr [esi], 0x79e598
// 0072f8f9  ff1584e77700         call dword ptr [0x77e784]
// 0072f8ff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072f903  894620               mov dword ptr [esi + 0x20], eax
// 0072f906  8bc6                 mov eax, esi
// 0072f908  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072f90c  64890d00000000       mov dword ptr fs:[0], ecx
// 0072f913  59                   pop ecx
// 0072f914  5e                   pop esi
// 0072f915  83c410               add esp, 0x10
// 0072f918  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@PBVTextureFormat@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp

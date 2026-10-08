// roc 2007-03 0072f860  unit: seg_00720000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f860
//
// 0072f860  6aff                 push -1
// 0072f862  68d8cb7600           push 0x76cbd8
// 0072f867  64a100000000         mov eax, dword ptr fs:[0]
// 0072f86d  50                   push eax
// 0072f86e  51                   push ecx
// 0072f86f  56                   push esi
// 0072f870  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072f875  33c4                 xor eax, esp
// 0072f877  50                   push eax
// 0072f878  8d44240c             lea eax, [esp + 0xc]
// 0072f87c  64a300000000         mov dword ptr fs:[0], eax
// 0072f882  8bf1                 mov esi, ecx
// 0072f884  89742408             mov dword ptr [esp + 8], esi
// 0072f888  8d4e04               lea ecx, [esi + 4]
// 0072f88b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0072f893  c70698e57900         mov dword ptr [esi], 0x79e598
// 0072f899  ff1584e77700         call dword ptr [0x77e784]
// 0072f89f  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0072f8a6  8bc6                 mov eax, esi
// 0072f8a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072f8ac  64890d00000000       mov dword ptr fs:[0], ecx
// 0072f8b3  59                   pop ecx
// 0072f8b4  5e                   pop esi
// 0072f8b5  83c410               add esp, 0x10
// 0072f8b8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp

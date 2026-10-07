// roc 2010-06 00522dd0  unit: RBX::MeshGen  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522dd0
//
// 00522dd0  6aff                 push -1
// 00522dd2  6818d49800           push 0x98d418
// 00522dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00522ddd  50                   push eax
// 00522dde  64892500000000       mov dword ptr fs:[0], esp
// 00522de5  51                   push ecx
// 00522de6  56                   push esi
// 00522de7  8bf1                 mov esi, ecx
// 00522de9  57                   push edi
// 00522dea  89742408             mov dword ptr [esp + 8], esi
// 00522dee  8b460c               mov eax, dword ptr [esi + 0xc]
// 00522df1  33ff                 xor edi, edi
// 00522df3  50                   push eax
// 00522df4  897c2418             mov dword ptr [esp + 0x18], edi
// 00522df8  e8c3ab0200           call 0x54d9c0
// 00522dfd  897e0c               mov dword ptr [esi + 0xc], edi
// 00522e00  897e10               mov dword ptr [esi + 0x10], edi
// 00522e03  897e14               mov dword ptr [esi + 0x14], edi
// 00522e06  8b0e                 mov ecx, dword ptr [esi]
// 00522e08  51                   push ecx
// 00522e09  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00522e11  e8aaab0200           call 0x54d9c0
// 00522e16  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00522e1a  83c408               add esp, 8
// 00522e1d  893e                 mov dword ptr [esi], edi
// 00522e1f  897e04               mov dword ptr [esi + 4], edi
// 00522e22  897e08               mov dword ptr [esi + 8], edi
// 00522e25  5f                   pop edi
// 00522e26  5e                   pop esi
// 00522e27  64890d00000000       mov dword ptr fs:[0], ecx
// 00522e2e  83c410               add esp, 0x10
// 00522e31  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??1Vertex@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp

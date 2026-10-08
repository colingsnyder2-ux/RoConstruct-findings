// from server: 100% by auto
// roc 2008-06 005dd2c0  unit: RBX::Message  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd2c0
//
// 005dd2c0  6aff                 push -1
// 005dd2c2  6848617d00           push 0x7d6148
// 005dd2c7  64a100000000         mov eax, dword ptr fs:[0]
// 005dd2cd  50                   push eax
// 005dd2ce  64892500000000       mov dword ptr fs:[0], esp
// 005dd2d5  51                   push ecx
// 005dd2d6  56                   push esi
// 005dd2d7  8bf1                 mov esi, ecx
// 005dd2d9  57                   push edi
// 005dd2da  89742408             mov dword ptr [esp + 8], esi
// 005dd2de  8b460c               mov eax, dword ptr [esi + 0xc]
// 005dd2e1  33ff                 xor edi, edi
// 005dd2e3  50                   push eax
// 005dd2e4  897c2418             mov dword ptr [esp + 0x18], edi
// 005dd2e8  e833aaf2ff           call 0x507d20
// 005dd2ed  897e0c               mov dword ptr [esi + 0xc], edi
// 005dd2f0  897e10               mov dword ptr [esi + 0x10], edi
// 005dd2f3  897e14               mov dword ptr [esi + 0x14], edi
// 005dd2f6  8b0e                 mov ecx, dword ptr [esi]
// 005dd2f8  51                   push ecx
// 005dd2f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005dd301  e81aaaf2ff           call 0x507d20
// 005dd306  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dd30a  83c408               add esp, 8
// 005dd30d  893e                 mov dword ptr [esi], edi
// 005dd30f  897e04               mov dword ptr [esi + 4], edi
// 005dd312  897e08               mov dword ptr [esi + 8], edi
// 005dd315  5f                   pop edi
// 005dd316  5e                   pop esi
// 005dd317  64890d00000000       mov dword ptr fs:[0], ecx
// 005dd31e  83c410               add esp, 0x10
// 005dd321  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??1Vertex@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp

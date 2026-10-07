// roc 2008-06 004975e0  unit: RBX::Network::Players  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004975e0
//
// 004975e0  56                   push esi
// 004975e1  8bf1                 mov esi, ecx
// 004975e3  8b4604               mov eax, dword ptr [esi + 4]
// 004975e6  50                   push eax
// 004975e7  e834070700           call 0x507d20
// 004975ec  33c0                 xor eax, eax
// 004975ee  83c404               add esp, 4
// 004975f1  894604               mov dword ptr [esi + 4], eax
// 004975f4  894608               mov dword ptr [esi + 8], eax
// 004975f7  89460c               mov dword ptr [esi + 0xc], eax
// 004975fa  5e                   pop esi
// 004975fb  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Entry@?$Table@HV?$Array@H@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp

// roc 2007-03 00504130  unit: seg_00500000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00504130
//
// 00504130  56                   push esi
// 00504131  8bf1                 mov esi, ecx
// 00504133  8b4608               mov eax, dword ptr [esi + 8]
// 00504136  50                   push eax
// 00504137  e844f2feff           call 0x4f3380
// 0050413c  33c0                 xor eax, eax
// 0050413e  83c404               add esp, 4
// 00504141  894608               mov dword ptr [esi + 8], eax
// 00504144  89460c               mov dword ptr [esi + 0xc], eax
// 00504147  894610               mov dword ptr [esi + 0x10], eax
// 0050414a  5e                   pop esi
// 0050414b  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ??1Entry@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp

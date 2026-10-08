// roc 2007-03 004e50b0  unit: seg_004e0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e50b0
//
// 004e50b0  56                   push esi
// 004e50b1  8b742408             mov esi, dword ptr [esp + 8]
// 004e50b5  8b4610               mov eax, dword ptr [esi + 0x10]
// 004e50b8  85c0                 test eax, eax
// 004e50ba  7409                 je 0x4e50c5
// 004e50bc  50                   push eax
// 004e50bd  e82e901300           call 0x61e0f0
// 004e50c2  83c404               add esp, 4
// 004e50c5  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004e50cc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004e50d3  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004e50da  5e                   pop esi
// 004e50db  c20400               ret 4
// library rbxgs-render/Clusterer.cpp (function ?destroy@?$allocator@VCluster@Clusterer@Render@RBX@@@std@@QAEXPAVCluster@Clusterer@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

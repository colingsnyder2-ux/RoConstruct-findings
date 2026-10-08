// roc 2007-08 004f1740  unit: RBX::Render::AggregatingSceneManager  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f1740
//
// 004f1740  56                   push esi
// 004f1741  8b742408             mov esi, dword ptr [esp + 8]
// 004f1745  8b4610               mov eax, dword ptr [esi + 0x10]
// 004f1748  85c0                 test eax, eax
// 004f174a  7409                 je 0x4f1755
// 004f174c  50                   push eax
// 004f174d  e810e51300           call 0x62fc62
// 004f1752  83c404               add esp, 4
// 004f1755  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004f175c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004f1763  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004f176a  5e                   pop esi
// 004f176b  c20400               ret 4
// library rbxgs-render/Clusterer.cpp (function ?destroy@?$allocator@VCluster@Clusterer@Render@RBX@@@std@@QAEXPAVCluster@Clusterer@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

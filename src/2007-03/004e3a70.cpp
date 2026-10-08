// roc 2007-03 004e3a70  unit: seg_004e0000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3a70
//
// 004e3a70  56                   push esi
// 004e3a71  8bf1                 mov esi, ecx
// 004e3a73  8b4610               mov eax, dword ptr [esi + 0x10]
// 004e3a76  85c0                 test eax, eax
// 004e3a78  7409                 je 0x4e3a83
// 004e3a7a  50                   push eax
// 004e3a7b  e870a61300           call 0x61e0f0
// 004e3a80  83c404               add esp, 4
// 004e3a83  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004e3a8a  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004e3a91  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004e3a98  5e                   pop esi
// 004e3a99  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??1Cluster@Clusterer@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

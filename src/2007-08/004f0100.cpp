// roc 2007-08 004f0100  unit: RBX::Render::AggregatingSceneManager  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0100
//
// 004f0100  56                   push esi
// 004f0101  8bf1                 mov esi, ecx
// 004f0103  8b4610               mov eax, dword ptr [esi + 0x10]
// 004f0106  85c0                 test eax, eax
// 004f0108  7409                 je 0x4f0113
// 004f010a  50                   push eax
// 004f010b  e852fb1300           call 0x62fc62
// 004f0110  83c404               add esp, 4
// 004f0113  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004f011a  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004f0121  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004f0128  5e                   pop esi
// 004f0129  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??1Cluster@Clusterer@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

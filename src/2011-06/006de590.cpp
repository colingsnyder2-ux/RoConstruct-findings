// roc 2011-06 006de590  unit: RBX::VPhysicsService::?$EventDesc  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006de590
//
// 006de590  56                   push esi
// 006de591  8bf1                 mov esi, ecx
// 006de593  8b4610               mov eax, dword ptr [esi + 0x10]
// 006de596  85c0                 test eax, eax
// 006de598  7409                 je 0x6de5a3
// 006de59a  50                   push eax
// 006de59b  e8b8ba1200           call 0x80a058
// 006de5a0  83c404               add esp, 4
// 006de5a3  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006de5aa  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006de5b1  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006de5b8  5e                   pop esi
// 006de5b9  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??1Cluster@Clusterer@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

// roc 2009-06 006804c0  unit: RBX::Mechanism  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006804c0
//
// 006804c0  56                   push esi
// 006804c1  8bf1                 mov esi, ecx
// 006804c3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006804c6  85c0                 test eax, eax
// 006804c8  7409                 je 0x6804d3
// 006804ca  50                   push eax
// 006804cb  e862850900           call 0x718a32
// 006804d0  83c404               add esp, 4
// 006804d3  8b460c               mov eax, dword ptr [esi + 0xc]
// 006804d6  50                   push eax
// 006804d7  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006804de  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006804e5  c7462000000000       mov dword ptr [esi + 0x20], 0
// 006804ec  e841850900           call 0x718a32
// 006804f1  83c404               add esp, 4
// 006804f4  5e                   pop esi
// 006804f5  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??1Cluster@Clusterer@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

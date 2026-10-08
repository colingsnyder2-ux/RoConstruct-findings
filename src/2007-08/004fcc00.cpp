// roc 2007-08 004fcc00  unit: RBX::Render::AggregateChunk  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcc00
//
// 004fcc00  8b442404             mov eax, dword ptr [esp + 4]
// 004fcc04  56                   push esi
// 004fcc05  8bf1                 mov esi, ecx
// 004fcc07  50                   push eax
// 004fcc08  8d4e08               lea ecx, [esi + 8]
// 004fcc0b  c70600000000         mov dword ptr [esi], 0
// 004fcc11  894604               mov dword ptr [esi + 4], eax
// 004fcc14  e867ffffff           call 0x4fcb80
// 004fcc19  8bc6                 mov eax, esi
// 004fcc1b  5e                   pop esi
// 004fcc1c  c20400               ret 4
// library rbxgs-render/Clusterer.cpp (function ??0Clusterer@Render@RBX@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

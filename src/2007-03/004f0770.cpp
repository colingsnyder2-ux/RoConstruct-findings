// roc 2007-03 004f0770  unit: seg_004f0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0770
//
// 004f0770  8b442404             mov eax, dword ptr [esp + 4]
// 004f0774  56                   push esi
// 004f0775  8bf1                 mov esi, ecx
// 004f0777  50                   push eax
// 004f0778  8d4e08               lea ecx, [esi + 8]
// 004f077b  c70600000000         mov dword ptr [esi], 0
// 004f0781  894604               mov dword ptr [esi + 4], eax
// 004f0784  e867ffffff           call 0x4f06f0
// 004f0789  8bc6                 mov eax, esi
// 004f078b  5e                   pop esi
// 004f078c  c20400               ret 4
// library rbxgs-render/Clusterer.cpp (function ??0Clusterer@Render@RBX@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp

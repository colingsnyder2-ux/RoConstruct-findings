// roc 2009-12 008cb2a0  unit: CXTPPropertyGridPaintManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb2a0
//
// 008cb2a0  8b442404             mov eax, dword ptr [esp + 4]
// 008cb2a4  56                   push esi
// 008cb2a5  50                   push eax
// 008cb2a6  8bf1                 mov esi, ecx
// 008cb2a8  e843e8ffff           call 0x8c9af0
// 008cb2ad  c70634a1a000         mov dword ptr [esi], 0xa0a134
// 008cb2b3  c7460401000000       mov dword ptr [esi + 4], 1
// 008cb2ba  8bc6                 mov eax, esi
// 008cb2bc  5e                   pop esi
// 008cb2bd  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

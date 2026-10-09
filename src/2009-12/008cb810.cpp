// roc 2009-12 008cb810  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb810
//
// 008cb810  8b442404             mov eax, dword ptr [esp + 4]
// 008cb814  56                   push esi
// 008cb815  50                   push eax
// 008cb816  8bf1                 mov esi, ecx
// 008cb818  e8d3e2ffff           call 0x8c9af0
// 008cb81d  c70684a3a000         mov dword ptr [esi], 0xa0a384
// 008cb823  c7460402000000       mov dword ptr [esi + 4], 2
// 008cb82a  8bc6                 mov eax, esi
// 008cb82c  5e                   pop esi
// 008cb82d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

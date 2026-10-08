// roc 2010-06 0087f9e0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087f9e0
//
// 0087f9e0  8b442404             mov eax, dword ptr [esp + 4]
// 0087f9e4  56                   push esi
// 0087f9e5  50                   push eax
// 0087f9e6  8bf1                 mov esi, ecx
// 0087f9e8  e8d3e2ffff           call 0x87dcc0
// 0087f9ed  c7067ce6a600         mov dword ptr [esi], 0xa6e67c
// 0087f9f3  c7460402000000       mov dword ptr [esi + 4], 2
// 0087f9fa  8bc6                 mov eax, esi
// 0087f9fc  5e                   pop esi
// 0087f9fd  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

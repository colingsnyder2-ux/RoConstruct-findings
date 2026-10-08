// roc 2009-06 007f0c90  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0c90
//
// 007f0c90  8b442404             mov eax, dword ptr [esp + 4]
// 007f0c94  56                   push esi
// 007f0c95  50                   push eax
// 007f0c96  8bf1                 mov esi, ecx
// 007f0c98  e8d3e2ffff           call 0x7eef70
// 007f0c9d  c706149f9000         mov dword ptr [esi], 0x909f14
// 007f0ca3  c7460402000000       mov dword ptr [esi + 4], 2
// 007f0caa  8bc6                 mov eax, esi
// 007f0cac  5e                   pop esi
// 007f0cad  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

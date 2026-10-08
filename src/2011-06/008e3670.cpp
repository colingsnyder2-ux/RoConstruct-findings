// roc 2011-06 008e3670  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3670
//
// 008e3670  8b442404             mov eax, dword ptr [esp + 4]
// 008e3674  56                   push esi
// 008e3675  50                   push eax
// 008e3676  8bf1                 mov esi, ecx
// 008e3678  e8d3e2ffff           call 0x8e1950
// 008e367d  c7064c87ad00         mov dword ptr [esi], 0xad874c
// 008e3683  c7460402000000       mov dword ptr [esi + 4], 2
// 008e368a  8bc6                 mov eax, esi
// 008e368c  5e                   pop esi
// 008e368d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

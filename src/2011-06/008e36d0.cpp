// roc 2011-06 008e36d0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e36d0
//
// 008e36d0  8b442404             mov eax, dword ptr [esp + 4]
// 008e36d4  56                   push esi
// 008e36d5  50                   push eax
// 008e36d6  8bf1                 mov esi, ecx
// 008e36d8  e873e2ffff           call 0x8e1950
// 008e36dd  c7069c87ad00         mov dword ptr [esi], 0xad879c
// 008e36e3  c7460401000000       mov dword ptr [esi + 4], 1
// 008e36ea  8bc6                 mov eax, esi
// 008e36ec  5e                   pop esi
// 008e36ed  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

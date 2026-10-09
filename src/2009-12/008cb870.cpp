// roc 2009-12 008cb870  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb870
//
// 008cb870  8b442404             mov eax, dword ptr [esp + 4]
// 008cb874  56                   push esi
// 008cb875  50                   push eax
// 008cb876  8bf1                 mov esi, ecx
// 008cb878  e873e2ffff           call 0x8c9af0
// 008cb87d  c706d4a3a000         mov dword ptr [esi], 0xa0a3d4
// 008cb883  c7460401000000       mov dword ptr [esi + 4], 1
// 008cb88a  8bc6                 mov eax, esi
// 008cb88c  5e                   pop esi
// 008cb88d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

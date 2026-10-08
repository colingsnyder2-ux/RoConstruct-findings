// roc 2012-06 00a5ba30  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5ba30
//
// 00a5ba30  8b442404             mov eax, dword ptr [esp + 4]
// 00a5ba34  56                   push esi
// 00a5ba35  50                   push eax
// 00a5ba36  8bf1                 mov esi, ecx
// 00a5ba38  e873e2ffff           call 0xa59cb0
// 00a5ba3d  c706343ec200         mov dword ptr [esi], 0xc23e34
// 00a5ba43  c7460401000000       mov dword ptr [esi + 4], 1
// 00a5ba4a  8bc6                 mov eax, esi
// 00a5ba4c  5e                   pop esi
// 00a5ba4d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

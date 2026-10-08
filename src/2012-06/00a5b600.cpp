// roc 2012-06 00a5b600  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2003Theme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5b600
//
// 00a5b600  8b442404             mov eax, dword ptr [esp + 4]
// 00a5b604  56                   push esi
// 00a5b605  50                   push eax
// 00a5b606  8bf1                 mov esi, ecx
// 00a5b608  e8c3feffff           call 0xa5b4d0
// 00a5b60d  c706343cc200         mov dword ptr [esi], 0xc23c34
// 00a5b613  c7460403000000       mov dword ptr [esi + 4], 3
// 00a5b61a  8bc6                 mov eax, esi
// 00a5b61c  5e                   pop esi
// 00a5b61d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

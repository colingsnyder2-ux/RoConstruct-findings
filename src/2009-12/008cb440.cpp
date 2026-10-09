// roc 2009-12 008cb440  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2003Theme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb440
//
// 008cb440  8b442404             mov eax, dword ptr [esp + 4]
// 008cb444  56                   push esi
// 008cb445  50                   push eax
// 008cb446  8bf1                 mov esi, ecx
// 008cb448  e8c3feffff           call 0x8cb310
// 008cb44d  c706d4a1a000         mov dword ptr [esi], 0xa0a1d4
// 008cb453  c7460403000000       mov dword ptr [esi + 4], 3
// 008cb45a  8bc6                 mov eax, esi
// 008cb45c  5e                   pop esi
// 008cb45d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

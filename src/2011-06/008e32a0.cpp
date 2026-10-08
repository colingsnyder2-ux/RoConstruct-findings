// roc 2011-06 008e32a0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOffice2003Theme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e32a0
//
// 008e32a0  8b442404             mov eax, dword ptr [esp + 4]
// 008e32a4  56                   push esi
// 008e32a5  50                   push eax
// 008e32a6  8bf1                 mov esi, ecx
// 008e32a8  e8c3feffff           call 0x8e3170
// 008e32ad  c7069c85ad00         mov dword ptr [esi], 0xad859c
// 008e32b3  c7460403000000       mov dword ptr [esi + 4], 3
// 008e32ba  8bc6                 mov eax, esi
// 008e32bc  5e                   pop esi
// 008e32bd  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

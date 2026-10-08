// roc 2011-06 008e3100  unit: CXTPPropertyGridPaintManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3100
//
// 008e3100  8b442404             mov eax, dword ptr [esp + 4]
// 008e3104  56                   push esi
// 008e3105  50                   push eax
// 008e3106  8bf1                 mov esi, ecx
// 008e3108  e843e8ffff           call 0x8e1950
// 008e310d  c706fc84ad00         mov dword ptr [esi], 0xad84fc
// 008e3113  c7460401000000       mov dword ptr [esi + 4], 1
// 008e311a  8bc6                 mov eax, esi
// 008e311c  5e                   pop esi
// 008e311d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

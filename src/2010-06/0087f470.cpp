// roc 2010-06 0087f470  unit: CXTPPropertyGridPaintManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087f470
//
// 0087f470  8b442404             mov eax, dword ptr [esp + 4]
// 0087f474  56                   push esi
// 0087f475  50                   push eax
// 0087f476  8bf1                 mov esi, ecx
// 0087f478  e843e8ffff           call 0x87dcc0
// 0087f47d  c7062ce4a600         mov dword ptr [esi], 0xa6e42c
// 0087f483  c7460401000000       mov dword ptr [esi + 4], 1
// 0087f48a  8bc6                 mov eax, esi
// 0087f48c  5e                   pop esi
// 0087f48d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

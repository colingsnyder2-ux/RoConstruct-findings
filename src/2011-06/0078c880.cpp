// roc 2011-06 0078c880  unit: RBX::NewNullTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078c880
//
// 0078c880  8b442404             mov eax, dword ptr [esp + 4]
// 0078c884  56                   push esi
// 0078c885  50                   push eax
// 0078c886  8bf1                 mov esi, ecx
// 0078c888  e893f5ffff           call 0x78be20
// 0078c88d  c706c49aab00         mov dword ptr [esi], 0xab9ac4
// 0078c893  c746049c9aab00       mov dword ptr [esi + 4], 0xab9a9c
// 0078c89a  8bc6                 mov eax, esi
// 0078c89c  5e                   pop esi
// 0078c89d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

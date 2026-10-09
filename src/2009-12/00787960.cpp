// roc 2009-12 00787960  unit: RBX::NewNullTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00787960
//
// 00787960  8b442404             mov eax, dword ptr [esp + 4]
// 00787964  56                   push esi
// 00787965  50                   push eax
// 00787966  8bf1                 mov esi, ecx
// 00787968  e893e0ffff           call 0x785a00
// 0078796d  c7063c9b9e00         mov dword ptr [esi], 0x9e9b3c
// 00787973  c74604249b9e00       mov dword ptr [esi + 4], 0x9e9b24
// 0078797a  8bc6                 mov eax, esi
// 0078797c  5e                   pop esi
// 0078797d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

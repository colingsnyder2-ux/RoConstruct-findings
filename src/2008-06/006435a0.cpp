// roc 2008-06 006435a0  unit: RBX::HUMAN::Landed  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006435a0
//
// 006435a0  8b442404             mov eax, dword ptr [esp + 4]
// 006435a4  56                   push esi
// 006435a5  50                   push eax
// 006435a6  8bf1                 mov esi, ecx
// 006435a8  e8d3330200           call 0x666980
// 006435ad  c706d0ac8400         mov dword ptr [esi], 0x84acd0
// 006435b3  c74604c8ac8400       mov dword ptr [esi + 4], 0x84acc8
// 006435ba  8bc6                 mov eax, esi
// 006435bc  5e                   pop esi
// 006435bd  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

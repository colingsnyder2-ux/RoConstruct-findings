// roc 2008-06 00618110  unit: RBX::NewNullTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618110
//
// 00618110  8b442404             mov eax, dword ptr [esp + 4]
// 00618114  56                   push esi
// 00618115  50                   push eax
// 00618116  8bf1                 mov esi, ecx
// 00618118  e8d3d8ffff           call 0x6159f0
// 0061811d  c706d43b8400         mov dword ptr [esi], 0x843bd4
// 00618123  c74604bc3b8400       mov dword ptr [esi + 4], 0x843bbc
// 0061812a  8bc6                 mov eax, esi
// 0061812c  5e                   pop esi
// 0061812d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

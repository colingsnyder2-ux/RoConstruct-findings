// roc 2010-06 007200b0  unit: RBX::NewNullTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007200b0
//
// 007200b0  8b442404             mov eax, dword ptr [esp + 4]
// 007200b4  56                   push esi
// 007200b5  50                   push eax
// 007200b6  8bf1                 mov esi, ecx
// 007200b8  e863ddffff           call 0x71de20
// 007200bd  c7062ccda400         mov dword ptr [esi], 0xa4cd2c
// 007200c3  c7460414cda400       mov dword ptr [esi + 4], 0xa4cd14
// 007200ca  8bc6                 mov eax, esi
// 007200cc  5e                   pop esi
// 007200cd  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

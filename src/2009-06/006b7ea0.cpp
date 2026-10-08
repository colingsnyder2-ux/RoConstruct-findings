// roc 2009-06 006b7ea0  unit: RBX::NewNullTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b7ea0
//
// 006b7ea0  8b442404             mov eax, dword ptr [esp + 4]
// 006b7ea4  56                   push esi
// 006b7ea5  50                   push eax
// 006b7ea6  8bf1                 mov esi, ecx
// 006b7ea8  e803dfffff           call 0x6b5db0
// 006b7ead  c7066cad8e00         mov dword ptr [esi], 0x8ead6c
// 006b7eb3  c7460454ad8e00       mov dword ptr [esi + 4], 0x8ead54
// 006b7eba  8bc6                 mov eax, esi
// 006b7ebc  5e                   pop esi
// 006b7ebd  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

// roc 2012-06 0071f7e0  unit: RBX::ArrowTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071f7e0
//
// 0071f7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0071f7e4  56                   push esi
// 0071f7e5  50                   push eax
// 0071f7e6  8bf1                 mov esi, ecx
// 0071f7e8  e8e3f6ffff           call 0x71eed0
// 0071f7ed  c7066c3cba00         mov dword ptr [esi], 0xba3c6c
// 0071f7f3  c746043c3cba00       mov dword ptr [esi + 4], 0xba3c3c
// 0071f7fa  8bc6                 mov eax, esi
// 0071f7fc  5e                   pop esi
// 0071f7fd  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

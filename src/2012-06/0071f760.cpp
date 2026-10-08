// roc 2012-06 0071f760  unit: RBX::ArrowToolBase  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071f760
//
// 0071f760  8b442404             mov eax, dword ptr [esp + 4]
// 0071f764  56                   push esi
// 0071f765  50                   push eax
// 0071f766  8bf1                 mov esi, ecx
// 0071f768  e833f6ffff           call 0x71eda0
// 0071f76d  c706e43bba00         mov dword ptr [esi], 0xba3be4
// 0071f773  c74604b43bba00       mov dword ptr [esi + 4], 0xba3bb4
// 0071f77a  8bc6                 mov eax, esi
// 0071f77c  5e                   pop esi
// 0071f77d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

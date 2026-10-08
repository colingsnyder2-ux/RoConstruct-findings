// roc 2007-08 005e5e20  unit: RBX::NewNullTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5e20
//
// 005e5e20  8b442404             mov eax, dword ptr [esp + 4]
// 005e5e24  56                   push esi
// 005e5e25  50                   push eax
// 005e5e26  8bf1                 mov esi, ecx
// 005e5e28  e8e3deffff           call 0x5e3d10
// 005e5e2d  c70624d27b00         mov dword ptr [esi], 0x7bd224
// 005e5e33  c746040cd27b00       mov dword ptr [esi + 4], 0x7bd20c
// 005e5e3a  8bc6                 mov eax, esi
// 005e5e3c  5e                   pop esi
// 005e5e3d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

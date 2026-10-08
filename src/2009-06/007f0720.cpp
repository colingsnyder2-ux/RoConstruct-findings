// roc 2009-06 007f0720  unit: CXTPPropertyGridPaintManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0720
//
// 007f0720  8b442404             mov eax, dword ptr [esp + 4]
// 007f0724  56                   push esi
// 007f0725  50                   push eax
// 007f0726  8bf1                 mov esi, ecx
// 007f0728  e843e8ffff           call 0x7eef70
// 007f072d  c706c49c9000         mov dword ptr [esi], 0x909cc4
// 007f0733  c7460401000000       mov dword ptr [esi + 4], 1
// 007f073a  8bc6                 mov eax, esi
// 007f073c  5e                   pop esi
// 007f073d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

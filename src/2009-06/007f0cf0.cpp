// roc 2009-06 007f0cf0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0cf0
//
// 007f0cf0  8b442404             mov eax, dword ptr [esp + 4]
// 007f0cf4  56                   push esi
// 007f0cf5  50                   push eax
// 007f0cf6  8bf1                 mov esi, ecx
// 007f0cf8  e873e2ffff           call 0x7eef70
// 007f0cfd  c706649f9000         mov dword ptr [esi], 0x909f64
// 007f0d03  c7460401000000       mov dword ptr [esi + 4], 1
// 007f0d0a  8bc6                 mov eax, esi
// 007f0d0c  5e                   pop esi
// 007f0d0d  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??$?0PAVWorkspace@RBX@@@?$Named@VMouseCommand@RBX@@$1?sGroupDragTool@2@3PBDB@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

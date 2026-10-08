// roc 2007-08 004633c0  unit: CSettingsDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004633c0
//
// 004633c0  8bc1                 mov eax, ecx
// 004633c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004633c6  0fbf11               movsx edx, word ptr [ecx]
// 004633c9  89542404             mov dword ptr [esp + 4], edx
// 004633cd  db442404             fild dword ptr [esp + 4]
// 004633d1  d918                 fstp dword ptr [eax]
// 004633d3  0fbf4902             movsx ecx, word ptr [ecx + 2]
// 004633d7  894c2404             mov dword ptr [esp + 4], ecx
// 004633db  db442404             fild dword ptr [esp + 4]
// 004633df  d95804               fstp dword ptr [eax + 4]
// 004633e2  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??0Vector2@G3D@@QAE@ABVVector2int16@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

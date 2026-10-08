// roc 2007-03 00463390  unit: seg_00460000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00463390
//
// 00463390  8bc1                 mov eax, ecx
// 00463392  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00463396  0fbf11               movsx edx, word ptr [ecx]
// 00463399  89542404             mov dword ptr [esp + 4], edx
// 0046339d  db442404             fild dword ptr [esp + 4]
// 004633a1  d918                 fstp dword ptr [eax]
// 004633a3  0fbf4902             movsx ecx, word ptr [ecx + 2]
// 004633a7  894c2404             mov dword ptr [esp + 4], ecx
// 004633ab  db442404             fild dword ptr [esp + 4]
// 004633af  d95804               fstp dword ptr [eax + 4]
// 004633b2  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??0Vector2@G3D@@QAE@ABVVector2int16@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

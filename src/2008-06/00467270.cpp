// roc 2008-06 00467270  unit: CSettingsDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467270
//
// 00467270  8bc1                 mov eax, ecx
// 00467272  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00467276  0fbf11               movsx edx, word ptr [ecx]
// 00467279  89542404             mov dword ptr [esp + 4], edx
// 0046727d  db442404             fild dword ptr [esp + 4]
// 00467281  d918                 fstp dword ptr [eax]
// 00467283  0fbf4902             movsx ecx, word ptr [ecx + 2]
// 00467287  894c2404             mov dword ptr [esp + 4], ecx
// 0046728b  db442404             fild dword ptr [esp + 4]
// 0046728f  d95804               fstp dword ptr [eax + 4]
// 00467292  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??0Vector2@G3D@@QAE@ABVVector2int16@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

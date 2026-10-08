// roc 2009-06 00469670  unit: CTaskSchedulerPaneView  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00469670
//
// 00469670  8bc1                 mov eax, ecx
// 00469672  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00469676  0fbf11               movsx edx, word ptr [ecx]
// 00469679  89542404             mov dword ptr [esp + 4], edx
// 0046967d  db442404             fild dword ptr [esp + 4]
// 00469681  d918                 fstp dword ptr [eax]
// 00469683  0fbf4902             movsx ecx, word ptr [ecx + 2]
// 00469687  894c2404             mov dword ptr [esp + 4], ecx
// 0046968b  db442404             fild dword ptr [esp + 4]
// 0046968f  d95804               fstp dword ptr [eax + 4]
// 00469692  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ??0Vector2@G3D@@QAE@ABVVector2int16@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

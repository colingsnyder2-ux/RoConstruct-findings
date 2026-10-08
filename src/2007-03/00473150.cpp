// roc 2007-03 00473150  unit: seg_00470000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473150
//
// 00473150  8bc1                 mov eax, ecx
// 00473152  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00473156  d901                 fld dword ptr [ecx]
// 00473158  d918                 fstp dword ptr [eax]
// 0047315a  d94104               fld dword ptr [ecx + 4]
// 0047315d  d95804               fstp dword ptr [eax + 4]
// 00473160  d94108               fld dword ptr [ecx + 8]
// 00473163  d95808               fstp dword ptr [eax + 8]
// 00473166  d9410c               fld dword ptr [ecx + 0xc]
// 00473169  d9580c               fstp dword ptr [eax + 0xc]
// 0047316c  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0Rect2D@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

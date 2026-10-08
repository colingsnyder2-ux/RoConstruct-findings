// roc 2007-03 0040e2d0  unit: seg_00400000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040e2d0
//
// 0040e2d0  8b442404             mov eax, dword ptr [esp + 4]
// 0040e2d4  d981fc000000         fld dword ptr [ecx + 0xfc]
// 0040e2da  d918                 fstp dword ptr [eax]
// 0040e2dc  d98100010000         fld dword ptr [ecx + 0x100]
// 0040e2e2  d95804               fstp dword ptr [eax + 4]
// 0040e2e5  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?getSize@GuiItem@RBX@@UBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

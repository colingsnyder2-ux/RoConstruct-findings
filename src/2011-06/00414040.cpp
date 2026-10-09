// roc 2011-06 00414040  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00414040
//
// 00414040  e85b731200           call 0x53b3a0
// 00414045  d900                 fld dword ptr [eax]
// 00414047  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041404b  d919                 fstp dword ptr [ecx]
// 0041404d  d94004               fld dword ptr [eax + 4]
// 00414050  8bc1                 mov eax, ecx
// 00414052  d95904               fstp dword ptr [ecx + 4]
// 00414055  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

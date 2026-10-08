// roc 2007-08 0040d1f0  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d1f0
//
// 0040d1f0  e87b430f00           call 0x501570
// 0040d1f5  d900                 fld dword ptr [eax]
// 0040d1f7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040d1fb  d919                 fstp dword ptr [ecx]
// 0040d1fd  d94004               fld dword ptr [eax + 4]
// 0040d200  8bc1                 mov eax, ecx
// 0040d202  d95904               fstp dword ptr [ecx + 4]
// 0040d205  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

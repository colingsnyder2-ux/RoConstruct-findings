// roc 2007-03 0040e270  unit: seg_00400000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040e270
//
// 0040e270  e86b6e0e00           call 0x4f50e0
// 0040e275  d900                 fld dword ptr [eax]
// 0040e277  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040e27b  d919                 fstp dword ptr [ecx]
// 0040e27d  d94004               fld dword ptr [eax + 4]
// 0040e280  8bc1                 mov eax, ecx
// 0040e282  d95904               fstp dword ptr [ecx + 4]
// 0040e285  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

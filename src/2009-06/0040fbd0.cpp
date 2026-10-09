// roc 2009-06 0040fbd0  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040fbd0
//
// 0040fbd0  e8bbcf1500           call 0x56cb90
// 0040fbd5  d900                 fld dword ptr [eax]
// 0040fbd7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040fbdb  d919                 fstp dword ptr [ecx]
// 0040fbdd  d94004               fld dword ptr [eax + 4]
// 0040fbe0  8bc1                 mov eax, ecx
// 0040fbe2  d95904               fstp dword ptr [ecx + 4]
// 0040fbe5  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

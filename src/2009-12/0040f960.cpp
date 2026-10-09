// roc 2009-12 0040f960  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f960
//
// 0040f960  e8fbc21d00           call 0x5ebc60
// 0040f965  d900                 fld dword ptr [eax]
// 0040f967  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040f96b  d919                 fstp dword ptr [ecx]
// 0040f96d  d94004               fld dword ptr [eax + 4]
// 0040f970  8bc1                 mov eax, ecx
// 0040f972  d95904               fstp dword ptr [ecx + 4]
// 0040f975  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

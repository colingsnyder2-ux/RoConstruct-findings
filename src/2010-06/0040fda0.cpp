// roc 2010-06 0040fda0  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040fda0
//
// 0040fda0  e8fbf41300           call 0x54f2a0
// 0040fda5  d900                 fld dword ptr [eax]
// 0040fda7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040fdab  d919                 fstp dword ptr [ecx]
// 0040fdad  d94004               fld dword ptr [eax + 4]
// 0040fdb0  8bc1                 mov eax, ecx
// 0040fdb2  d95904               fstp dword ptr [ecx + 4]
// 0040fdb5  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

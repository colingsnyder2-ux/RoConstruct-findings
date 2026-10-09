// roc 2008-06 00411810  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411810
//
// 00411810  e88b830f00           call 0x509ba0
// 00411815  d900                 fld dword ptr [eax]
// 00411817  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041181b  d919                 fstp dword ptr [ecx]
// 0041181d  d94004               fld dword ptr [eax + 4]
// 00411820  8bc1                 mov eax, ecx
// 00411822  d95904               fstp dword ptr [ecx + 4]
// 00411825  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@PBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

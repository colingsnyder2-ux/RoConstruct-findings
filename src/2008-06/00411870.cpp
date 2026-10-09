// roc 2008-06 00411870  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411870
//
// 00411870  8b442404             mov eax, dword ptr [esp + 4]
// 00411874  d9813c010000         fld dword ptr [ecx + 0x13c]
// 0041187a  d918                 fstp dword ptr [eax]
// 0041187c  d98140010000         fld dword ptr [ecx + 0x140]
// 00411882  d95804               fstp dword ptr [eax + 4]
// 00411885  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?getSize@GuiItem@RBX@@UBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp

// roc 2007-03 00552460  unit: seg_00550000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00552460
//
// 00552460  8b442404             mov eax, dword ptr [esp + 4]
// 00552464  d90584c08b00         fld dword ptr [0x8bc084]
// 0055246a  d918                 fstp dword ptr [eax]
// 0055246c  d90588c08b00         fld dword ptr [0x8bc088]
// 00552472  d95804               fstp dword ptr [eax + 4]
// 00552475  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?getSize@GuiRoot@RBX@@EBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

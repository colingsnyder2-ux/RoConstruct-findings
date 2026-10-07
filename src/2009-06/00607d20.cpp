// roc 2009-06 00607d20  unit: RBX::GuiRoot  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00607d20
//
// 00607d20  8b442404             mov eax, dword ptr [esp + 4]
// 00607d24  d905fcaea400         fld dword ptr [0xa4aefc]
// 00607d2a  d918                 fstp dword ptr [eax]
// 00607d2c  d90500afa400         fld dword ptr [0xa4af00]
// 00607d32  d95804               fstp dword ptr [eax + 4]
// 00607d35  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?getSize@GuiRoot@RBX@@EBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

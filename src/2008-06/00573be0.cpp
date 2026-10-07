// roc 2008-06 00573be0  unit: RBX::GuiRoot  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573be0
//
// 00573be0  8b442404             mov eax, dword ptr [esp + 4]
// 00573be4  d905784d9700         fld dword ptr [0x974d78]
// 00573bea  d918                 fstp dword ptr [eax]
// 00573bec  d9057c4d9700         fld dword ptr [0x974d7c]
// 00573bf2  d95804               fstp dword ptr [eax + 4]
// 00573bf5  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?getSize@GuiRoot@RBX@@EBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

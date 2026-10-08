// roc 2007-03 007728e0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007728e0
//
// 007728e0  b9d4c68b00           mov ecx, 0x8bc6d4
// 007728e5  e84641fbff           call 0x726a30
// 007728ea  68109c7700           push 0x779c10
// 007728ef  e8bfc8eaff           call 0x61f1b3
// 007728f4  59                   pop ecx
// 007728f5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

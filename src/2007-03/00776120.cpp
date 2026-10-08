// roc 2007-03 00776120  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776120
//
// 00776120  b9e4128c00           mov ecx, 0x8c12e4
// 00776125  e80609fbff           call 0x726a30
// 0077612a  68a0bf7700           push 0x77bfa0
// 0077612f  e87f90eaff           call 0x61f1b3
// 00776134  59                   pop ecx
// 00776135  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

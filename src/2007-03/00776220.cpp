// roc 2007-03 00776220  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776220
//
// 00776220  b950178c00           mov ecx, 0x8c1750
// 00776225  e8d631ebff           call 0x629400
// 0077622a  6820c07700           push 0x77c020
// 0077622f  e87f8feaff           call 0x61f1b3
// 00776234  59                   pop ecx
// 00776235  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

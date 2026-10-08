// roc 2007-03 00776320  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776320
//
// 00776320  b9e0178c00           mov ecx, 0x8c17e0
// 00776325  e836e2ecff           call 0x644560
// 0077632a  6840c07700           push 0x77c040
// 0077632f  e87f8eeaff           call 0x61f1b3
// 00776334  59                   pop ecx
// 00776335  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

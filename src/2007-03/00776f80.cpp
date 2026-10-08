// roc 2007-03 00776f80  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776f80
//
// 00776f80  b94c288c00           mov ecx, 0x8c284c
// 00776f85  e806aaf8ff           call 0x701990
// 00776f8a  68c0c17700           push 0x77c1c0
// 00776f8f  e81f82eaff           call 0x61f1b3
// 00776f94  59                   pop ecx
// 00776f95  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

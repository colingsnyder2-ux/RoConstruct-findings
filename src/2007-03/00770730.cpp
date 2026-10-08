// roc 2007-03 00770730  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770730
//
// 00770730  b9008d8b00           mov ecx, 0x8b8d00
// 00770735  e8f662fbff           call 0x726a30
// 0077073a  6800887700           push 0x778800
// 0077073f  e86feaeaff           call 0x61f1b3
// 00770744  59                   pop ecx
// 00770745  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

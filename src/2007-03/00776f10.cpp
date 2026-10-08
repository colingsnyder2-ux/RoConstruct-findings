// roc 2007-03 00776f10  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776f10
//
// 00776f10  b91c278c00           mov ecx, 0x8c271c
// 00776f15  e866e1f6ff           call 0x6e5080
// 00776f1a  6890c17700           push 0x77c190
// 00776f1f  e88f82eaff           call 0x61f1b3
// 00776f24  59                   pop ecx
// 00776f25  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

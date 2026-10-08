// roc 2007-03 00771f80  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771f80
//
// 00771f80  b9c8be8b00           mov ecx, 0x8bbec8
// 00771f85  e8a64afbff           call 0x726a30
// 00771f8a  6800997700           push 0x779900
// 00771f8f  e81fd2eaff           call 0x61f1b3
// 00771f94  59                   pop ecx
// 00771f95  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

// roc 2007-03 00776a40  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776a40
//
// 00776a40  b91c238c00           mov ecx, 0x8c231c
// 00776a45  e836d1f1ff           call 0x693b80
// 00776a4a  6850c17700           push 0x77c150
// 00776a4f  e85f87eaff           call 0x61f1b3
// 00776a54  59                   pop ecx
// 00776a55  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

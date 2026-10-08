// roc 2007-03 00776fa0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776fa0
//
// 00776fa0  b954288c00           mov ecx, 0x8c2854
// 00776fa5  e88c3cfcff           call 0x73ac36
// 00776faa  68d0c17700           push 0x77c1d0
// 00776faf  e8ff81eaff           call 0x61f1b3
// 00776fb4  59                   pop ecx
// 00776fb5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

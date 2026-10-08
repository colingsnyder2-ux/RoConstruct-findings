// roc 2007-03 00776fc0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776fc0
//
// 00776fc0  b968288c00           mov ecx, 0x8c2868
// 00776fc5  e866d9f8ff           call 0x704930
// 00776fca  68e0c17700           push 0x77c1e0
// 00776fcf  e8df81eaff           call 0x61f1b3
// 00776fd4  59                   pop ecx
// 00776fd5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

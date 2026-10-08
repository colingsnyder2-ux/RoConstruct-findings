// roc 2007-03 00771230  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771230
//
// 00771230  b9b09f8b00           mov ecx, 0x8b9fb0
// 00771235  e89636d1ff           call 0x4848d0
// 0077123a  68d0917700           push 0x7791d0
// 0077123f  e86fdfeaff           call 0x61f1b3
// 00771244  59                   pop ecx
// 00771245  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

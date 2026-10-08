// roc 2007-03 00771270  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771270
//
// 00771270  b920a08b00           mov ecx, 0x8ba020
// 00771275  e85636d1ff           call 0x4848d0
// 0077127a  6850917700           push 0x779150
// 0077127f  e82fdfeaff           call 0x61f1b3
// 00771284  59                   pop ecx
// 00771285  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

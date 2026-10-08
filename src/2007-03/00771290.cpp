// roc 2007-03 00771290  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771290
//
// 00771290  b940a08b00           mov ecx, 0x8ba040
// 00771295  e83636d1ff           call 0x4848d0
// 0077129a  6890917700           push 0x779190
// 0077129f  e80fdfeaff           call 0x61f1b3
// 007712a4  59                   pop ecx
// 007712a5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

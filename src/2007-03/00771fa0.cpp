// roc 2007-03 00771fa0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771fa0
//
// 00771fa0  b9d8be8b00           mov ecx, 0x8bbed8
// 00771fa5  e8864afbff           call 0x726a30
// 00771faa  6870997700           push 0x779970
// 00771faf  e8ffd1eaff           call 0x61f1b3
// 00771fb4  59                   pop ecx
// 00771fb5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

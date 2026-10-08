// roc 2007-03 007720b0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007720b0
//
// 007720b0  b908c08b00           mov ecx, 0x8bc008
// 007720b5  e87649fbff           call 0x726a30
// 007720ba  68009a7700           push 0x779a00
// 007720bf  e8efd0eaff           call 0x61f1b3
// 007720c4  59                   pop ecx
// 007720c5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

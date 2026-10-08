// roc 2007-03 007720e0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007720e0
//
// 007720e0  b98cc08b00           mov ecx, 0x8bc08c
// 007720e5  e88630d0ff           call 0x475170
// 007720ea  68209a7700           push 0x779a20
// 007720ef  e8bfd0eaff           call 0x61f1b3
// 007720f4  59                   pop ecx
// 007720f5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

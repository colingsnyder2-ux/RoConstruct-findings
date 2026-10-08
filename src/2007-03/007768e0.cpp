// roc 2007-03 007768e0  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007768e0
//
// 007768e0  b9681e8c00           mov ecx, 0x8c1e68
// 007768e5  e80643efff           call 0x66abf0
// 007768ea  6880c07700           push 0x77c080
// 007768ef  e8bf88eaff           call 0x61f1b3
// 007768f4  59                   pop ecx
// 007768f5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

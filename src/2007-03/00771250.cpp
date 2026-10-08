// roc 2007-03 00771250  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771250
//
// 00771250  b9d09f8b00           mov ecx, 0x8b9fd0
// 00771255  e87636d1ff           call 0x4848d0
// 0077125a  6810917700           push 0x779110
// 0077125f  e84fdfeaff           call 0x61f1b3
// 00771264  59                   pop ecx
// 00771265  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

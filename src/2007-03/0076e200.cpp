// roc 2007-03 0076e200  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e200
//
// 0076e200  b9d45f8b00           mov ecx, 0x8b5fd4
// 0076e205  e82688fbff           call 0x726a30
// 0076e20a  68507a7700           push 0x777a50
// 0076e20f  e89f0febff           call 0x61f1b3
// 0076e214  59                   pop ecx
// 0076e215  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

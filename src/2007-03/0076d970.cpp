// roc 2007-03 0076d970  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076d970
//
// 0076d970  b968548b00           mov ecx, 0x8b5468
// 0076d975  e8c6e1c9ff           call 0x40bb40
// 0076d97a  68a0737700           push 0x7773a0
// 0076d97f  e82f18ebff           call 0x61f1b3
// 0076d984  59                   pop ecx
// 0076d985  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

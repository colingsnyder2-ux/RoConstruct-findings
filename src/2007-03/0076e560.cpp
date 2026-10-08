// roc 2007-03 0076e560  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e560
//
// 0076e560  b9b0628b00           mov ecx, 0x8b62b0
// 0076e565  e8668ecdff           call 0x4473d0
// 0076e56a  68307d7700           push 0x777d30
// 0076e56f  e83f0cebff           call 0x61f1b3
// 0076e574  59                   pop ecx
// 0076e575  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

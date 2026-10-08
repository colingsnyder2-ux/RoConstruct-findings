// roc 2007-03 0076e640  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e640
//
// 0076e640  b930668b00           mov ecx, 0x8b6630
// 0076e645  e8964fccff           call 0x4335e0
// 0076e64a  68507e7700           push 0x777e50
// 0076e64f  e85f0bebff           call 0x61f1b3
// 0076e654  59                   pop ecx
// 0076e655  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??__E?oldCameraWorld@GuiRoot@RBX@@0VCoordinateFrame@G3D@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

// roc 2008-06 007f3aa0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3aa0
//
// 007f3aa0  6a20                 push 0x20
// 007f3aa2  6868058300           push 0x830568
// 007f3aa7  e8e404d6ff           call 0x553f90
// 007f3aac  83c408               add esp, 8
// 007f3aaf  a324539700           mov dword ptr [0x975324], eax
// 007f3ab4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R20@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

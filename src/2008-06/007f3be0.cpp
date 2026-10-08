// roc 2008-06 007f3be0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3be0
//
// 007f3be0  6a2d                 push 0x2d
// 007f3be2  68a0058300           push 0x8305a0
// 007f3be7  e8a403d6ff           call 0x553f90
// 007f3bec  83c408               add esp, 8
// 007f3bef  a38c539700           mov dword ptr [0x97538c], eax
// 007f3bf4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_hash@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

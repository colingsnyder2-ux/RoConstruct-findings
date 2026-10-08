// roc 2008-06 007f3a80  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3a80
//
// 007f3a80  6a1f                 push 0x1f
// 007f3a82  6864058300           push 0x830564
// 007f3a87  e80405d6ff           call 0x553f90
// 007f3a8c  83c408               add esp, 8
// 007f3a8f  a348539700           mov dword ptr [0x975348], eax
// 007f3a94  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R12@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

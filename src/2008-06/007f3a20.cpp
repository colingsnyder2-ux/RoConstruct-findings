// roc 2008-06 007f3a20  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3a20
//
// 007f3a20  6a1c                 push 0x1c
// 007f3a22  6858058300           push 0x830558
// 007f3a27  e86405d6ff           call 0x553f90
// 007f3a2c  83c408               add esp, 8
// 007f3a2f  a304539700           mov dword ptr [0x975304], eax
// 007f3a34  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R02@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2008-06 007f3a60  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3a60
//
// 007f3a60  6a1e                 push 0x1e
// 007f3a62  6860058300           push 0x830560
// 007f3a67  e82405d6ff           call 0x553f90
// 007f3a6c  83c408               add esp, 8
// 007f3a6f  a354539700           mov dword ptr [0x975354], eax
// 007f3a74  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R11@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

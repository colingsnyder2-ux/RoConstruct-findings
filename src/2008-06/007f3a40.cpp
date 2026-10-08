// roc 2008-06 007f3a40  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3a40
//
// 007f3a40  6a1d                 push 0x1d
// 007f3a42  685c058300           push 0x83055c
// 007f3a47  e84405d6ff           call 0x553f90
// 007f3a4c  83c408               add esp, 8
// 007f3a4f  a328539700           mov dword ptr [0x975328], eax
// 007f3a54  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R10@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

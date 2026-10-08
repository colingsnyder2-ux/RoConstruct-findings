// roc 2008-06 007f3a00  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3a00
//
// 007f3a00  6a1b                 push 0x1b
// 007f3a02  6854058300           push 0x830554
// 007f3a07  e88405d6ff           call 0x553f90
// 007f3a0c  83c408               add esp, 8
// 007f3a0f  a368539700           mov dword ptr [0x975368], eax
// 007f3a14  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R01@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

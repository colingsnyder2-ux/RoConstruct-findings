// roc 2008-06 007f3b40  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3b40
//
// 007f3b40  6a25                 push 0x25
// 007f3b42  688cad8000           push 0x80ad8c
// 007f3b47  e84404d6ff           call 0x553f90
// 007f3b4c  83c408               add esp, 8
// 007f3b4f  a340539700           mov dword ptr [0x975340], eax
// 007f3b54  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

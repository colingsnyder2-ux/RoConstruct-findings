// roc 2008-06 007f39e0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f39e0
//
// 007f39e0  6a1a                 push 0x1a
// 007f39e2  6850058300           push 0x830550
// 007f39e7  e8a405d6ff           call 0x553f90
// 007f39ec  83c408               add esp, 8
// 007f39ef  a350539700           mov dword ptr [0x975350], eax
// 007f39f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R00@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

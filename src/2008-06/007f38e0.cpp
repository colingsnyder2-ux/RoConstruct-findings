// roc 2008-06 007f38e0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f38e0
//
// 007f38e0  6a0b                 push 0xb
// 007f38e2  6830058300           push 0x830530
// 007f38e7  e8a406d6ff           call 0x553f90
// 007f38ec  83c408               add esp, 8
// 007f38ef  a358539700           mov dword ptr [0x975358], eax
// 007f38f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_External@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

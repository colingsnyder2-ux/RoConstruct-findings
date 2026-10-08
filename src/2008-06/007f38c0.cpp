// roc 2008-06 007f38c0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f38c0
//
// 007f38c0  6a0a                 push 0xa
// 007f38c2  6828058300           push 0x830528
// 007f38c7  e8c406d6ff           call 0x553f90
// 007f38cc  83c408               add esp, 8
// 007f38cf  a360539700           mov dword ptr [0x975360], eax
// 007f38d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_version@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

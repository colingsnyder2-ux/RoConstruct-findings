// roc 2008-06 007f3b60  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3b60
//
// 007f3b60  6a26                 push 0x26
// 007f3b62  687c058300           push 0x83057c
// 007f3b67  e82404d6ff           call 0x553f90
// 007f3b6c  83c408               add esp, 8
// 007f3b6f  a378539700           mov dword ptr [0x975378], eax
// 007f3b74  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_class@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

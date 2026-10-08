// roc 2008-06 007f3ba0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3ba0
//
// 007f3ba0  6a28                 push 0x28
// 007f3ba2  688c058300           push 0x83058c
// 007f3ba7  e8e403d6ff           call 0x553f90
// 007f3bac  83c408               add esp, 8
// 007f3baf  a30c539700           mov dword ptr [0x97530c], eax
// 007f3bb4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Properties@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

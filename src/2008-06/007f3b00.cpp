// roc 2008-06 007f3b00  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3b00
//
// 007f3b00  6a23                 push 0x23
// 007f3b02  6874058300           push 0x830574
// 007f3b07  e88404d6ff           call 0x553f90
// 007f3b0c  83c408               add esp, 8
// 007f3b0f  a36c539700           mov dword ptr [0x97536c], eax
// 007f3b14  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

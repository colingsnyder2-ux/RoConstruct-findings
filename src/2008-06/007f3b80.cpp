// roc 2008-06 007f3b80  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3b80
//
// 007f3b80  6a27                 push 0x27
// 007f3b82  6884058300           push 0x830584
// 007f3b87  e80404d6ff           call 0x553f90
// 007f3b8c  83c408               add esp, 8
// 007f3b8f  a35c539700           mov dword ptr [0x97535c], eax
// 007f3b94  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Item@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2008-06 007f3b20  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3b20
//
// 007f3b20  6a24                 push 0x24
// 007f3b22  6878058300           push 0x830578
// 007f3b27  e86404d6ff           call 0x553f90
// 007f3b2c  83c408               add esp, 8
// 007f3b2f  a33c539700           mov dword ptr [0x97533c], eax
// 007f3b34  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_G@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

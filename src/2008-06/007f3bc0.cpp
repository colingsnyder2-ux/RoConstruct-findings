// roc 2008-06 007f3bc0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3bc0
//
// 007f3bc0  6a29                 push 0x29
// 007f3bc2  6898058300           push 0x830598
// 007f3bc7  e8c403d6ff           call 0x553f90
// 007f3bcc  83c408               add esp, 8
// 007f3bcf  a344539700           mov dword ptr [0x975344], eax
// 007f3bd4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Feature@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2008-06 007f3c20  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3c20
//
// 007f3c20  6a30                 push 0x30
// 007f3c22  68a8058300           push 0x8305a8
// 007f3c27  e86403d6ff           call 0x553f90
// 007f3c2c  83c408               add esp, 8
// 007f3c2f  a37c539700           mov dword ptr [0x97537c], eax
// 007f3c34  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_mimeType@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

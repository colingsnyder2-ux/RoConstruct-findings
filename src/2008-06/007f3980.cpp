// roc 2008-06 007f3980  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3980
//
// 007f3980  6a17                 push 0x17
// 007f3982  6844058300           push 0x830544
// 007f3987  e80406d6ff           call 0x553f90
// 007f398c  83c408               add esp, 8
// 007f398f  a334539700           mov dword ptr [0x975334], eax
// 007f3994  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_X@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

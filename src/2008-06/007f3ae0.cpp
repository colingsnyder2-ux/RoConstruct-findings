// roc 2008-06 007f3ae0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3ae0
//
// 007f3ae0  6a22                 push 0x22
// 007f3ae2  6870058300           push 0x830570
// 007f3ae7  e8a404d6ff           call 0x553f90
// 007f3aec  83c408               add esp, 8
// 007f3aef  a308539700           mov dword ptr [0x975308], eax
// 007f3af4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R22@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

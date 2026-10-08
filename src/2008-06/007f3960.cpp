// roc 2008-06 007f3960  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3960
//
// 007f3960  6a15                 push 0x15
// 007f3962  683c058300           push 0x83053c
// 007f3967  e82406d6ff           call 0x553f90
// 007f396c  83c408               add esp, 8
// 007f396f  a364539700           mov dword ptr [0x975364], eax
// 007f3974  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Refs@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

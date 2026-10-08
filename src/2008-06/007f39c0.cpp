// roc 2008-06 007f39c0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f39c0
//
// 007f39c0  6a19                 push 0x19
// 007f39c2  684c058300           push 0x83054c
// 007f39c7  e8c405d6ff           call 0x553f90
// 007f39cc  83c408               add esp, 8
// 007f39cf  a318539700           mov dword ptr [0x975318], eax
// 007f39d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Z@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

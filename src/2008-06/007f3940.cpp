// roc 2008-06 007f3940  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3940
//
// 007f3940  6a0e                 push 0xe
// 007f3942  6868c98100           push 0x81c968
// 007f3947  e84406d6ff           call 0x553f90
// 007f394c  83c408               add esp, 8
// 007f394f  a338539700           mov dword ptr [0x975338], eax
// 007f3954  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_name@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

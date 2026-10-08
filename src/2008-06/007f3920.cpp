// roc 2008-06 007f3920  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3920
//
// 007f3920  6a0d                 push 0xd
// 007f3922  6850f68200           push 0x82f650
// 007f3927  e86406d6ff           call 0x553f90
// 007f392c  83c408               add esp, 8
// 007f392f  a34c539700           mov dword ptr [0x97534c], eax
// 007f3934  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_token@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

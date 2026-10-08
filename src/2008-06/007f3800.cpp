// roc 2008-06 007f3800  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3800
//
// 007f3800  6a03                 push 3
// 007f3802  68ec048300           push 0x8304ec
// 007f3807  e88407d6ff           call 0x553f90
// 007f380c  83c408               add esp, 8
// 007f380f  a370539700           mov dword ptr [0x975370], eax
// 007f3814  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_xsinil@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2008-06 007f3900  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3900
//
// 007f3900  6a0c                 push 0xc
// 007f3902  6850148200           push 0x821450
// 007f3907  e88406d6ff           call 0x553f90
// 007f390c  83c408               add esp, 8
// 007f390f  a314539700           mov dword ptr [0x975314], eax
// 007f3914  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_Ref@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

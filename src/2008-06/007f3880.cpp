// roc 2008-06 007f3880  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3880
//
// 007f3880  6a07                 push 7
// 007f3882  6814058300           push 0x830514
// 007f3887  e80407d6ff           call 0x553f90
// 007f388c  83c408               add esp, 8
// 007f388f  a310539700           mov dword ptr [0x975310], eax
// 007f3894  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_referent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2008-06 007f3820  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3820
//
// 007f3820  6a04                 push 4
// 007f3822  68f4048300           push 0x8304f4
// 007f3827  e86407d6ff           call 0x553f90
// 007f382c  83c408               add esp, 8
// 007f382f  a32c539700           mov dword ptr [0x97532c], eax
// 007f3834  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_xsitype@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

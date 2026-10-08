// roc 2008-06 007f37e0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f37e0
//
// 007f37e0  6a02                 push 2
// 007f37e2  68e8048300           push 0x8304e8
// 007f37e7  e8a407d6ff           call 0x553f90
// 007f37ec  83c408               add esp, 8
// 007f37ef  a384539700           mov dword ptr [0x975384], eax
// 007f37f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Evalue_IDREF_nil@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

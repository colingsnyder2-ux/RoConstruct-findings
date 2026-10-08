// roc 2008-06 007f37c0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f37c0
//
// 007f37c0  6a01                 push 1
// 007f37c2  68e0048300           push 0x8304e0
// 007f37c7  e8c407d6ff           call 0x553f90
// 007f37cc  83c408               add esp, 8
// 007f37cf  a31c539700           mov dword ptr [0x97531c], eax
// 007f37d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Evalue_IDREF_null@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

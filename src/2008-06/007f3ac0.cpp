// roc 2008-06 007f3ac0  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3ac0
//
// 007f3ac0  6a21                 push 0x21
// 007f3ac2  686c058300           push 0x83056c
// 007f3ac7  e8c404d6ff           call 0x553f90
// 007f3acc  83c408               add esp, 8
// 007f3acf  a320539700           mov dword ptr [0x975320], eax
// 007f3ad4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R21@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2008-06 007f3860  unit: seg_007f0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3860
//
// 007f3860  6a06                 push 6
// 007f3862  680c058300           push 0x83050c
// 007f3867  e82407d6ff           call 0x553f90
// 007f386c  83c408               add esp, 8
// 007f386f  a300539700           mov dword ptr [0x975300], eax
// 007f3874  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_root@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

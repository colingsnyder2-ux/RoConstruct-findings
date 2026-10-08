// roc 2007-08 00771560  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771560
//
// 00771560  6a04                 push 4
// 00771562  68948f7a00           push 0x7a8f94
// 00771567  e8d4b3dbff           call 0x52c940
// 0077156c  83c408               add esp, 8
// 0077156f  a38c228c00           mov dword ptr [0x8c228c], eax
// 00771574  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_xsitype@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

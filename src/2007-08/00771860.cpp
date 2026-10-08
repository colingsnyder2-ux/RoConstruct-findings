// roc 2007-08 00771860  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771860
//
// 00771860  6a23                 push 0x23
// 00771862  6818907a00           push 0x7a9018
// 00771867  e8d4b0dbff           call 0x52c940
// 0077186c  83c408               add esp, 8
// 0077186f  a3d0228c00           mov dword ptr [0x8c22d0], eax
// 00771874  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2007-08 00771760  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771760
//
// 00771760  6a1b                 push 0x1b
// 00771762  68f88f7a00           push 0x7a8ff8
// 00771767  e8d4b1dbff           call 0x52c940
// 0077176c  83c408               add esp, 8
// 0077176f  a3c8228c00           mov dword ptr [0x8c22c8], eax
// 00771774  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R01@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

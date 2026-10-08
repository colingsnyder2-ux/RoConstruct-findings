// roc 2007-08 00771920  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771920
//
// 00771920  6a29                 push 0x29
// 00771922  683c907a00           push 0x7a903c
// 00771927  e814b0dbff           call 0x52c940
// 0077192c  83c408               add esp, 8
// 0077192f  a3a4228c00           mov dword ptr [0x8c22a4], eax
// 00771934  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Feature@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2007-08 007717e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007717e0
//
// 007717e0  6a1f                 push 0x1f
// 007717e2  6808907a00           push 0x7a9008
// 007717e7  e854b1dbff           call 0x52c940
// 007717ec  83c408               add esp, 8
// 007717ef  a3a8228c00           mov dword ptr [0x8c22a8], eax
// 007717f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R12@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

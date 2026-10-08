// roc 2007-08 007716c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007716c0
//
// 007716c0  6a15                 push 0x15
// 007716c2  68e08f7a00           push 0x7a8fe0
// 007716c7  e874b2dbff           call 0x52c940
// 007716cc  83c408               add esp, 8
// 007716cf  a3c4228c00           mov dword ptr [0x8c22c4], eax
// 007716d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Refs@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

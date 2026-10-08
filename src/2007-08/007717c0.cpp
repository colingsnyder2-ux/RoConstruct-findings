// roc 2007-08 007717c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007717c0
//
// 007717c0  6a1e                 push 0x1e
// 007717c2  6804907a00           push 0x7a9004
// 007717c7  e874b1dbff           call 0x52c940
// 007717cc  83c408               add esp, 8
// 007717cf  a3b4228c00           mov dword ptr [0x8c22b4], eax
// 007717d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R11@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

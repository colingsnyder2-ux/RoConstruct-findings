// roc 2007-08 00771640  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771640
//
// 00771640  6a0b                 push 0xb
// 00771642  68cc8f7a00           push 0x7a8fcc
// 00771647  e8f4b2dbff           call 0x52c940
// 0077164c  83c408               add esp, 8
// 0077164f  a3b8228c00           mov dword ptr [0x8c22b8], eax
// 00771654  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_External@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

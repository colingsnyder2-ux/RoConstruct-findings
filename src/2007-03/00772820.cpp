// roc 2007-03 00772820  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772820
//
// 00772820  6a29                 push 0x29
// 00772822  68aca77a00           push 0x7aa7ac
// 00772827  e8b4b0dbff           call 0x52d8e0
// 0077282c  83c408               add esp, 8
// 0077282f  a330c68b00           mov dword ptr [0x8bc630], eax
// 00772834  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Feature@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

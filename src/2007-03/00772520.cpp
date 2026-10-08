// roc 2007-03 00772520  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772520
//
// 00772520  6a0a                 push 0xa
// 00772522  6808617800           push 0x786108
// 00772527  e8b4b3dbff           call 0x52d8e0
// 0077252c  83c408               add esp, 8
// 0077252f  a34cc68b00           mov dword ptr [0x8bc64c], eax
// 00772534  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_version@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2007-03 00772640  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772640
//
// 00772640  6a1a                 push 0x1a
// 00772642  6864a77a00           push 0x7aa764
// 00772647  e894b2dbff           call 0x52d8e0
// 0077264c  83c408               add esp, 8
// 0077264f  a33cc68b00           mov dword ptr [0x8bc63c], eax
// 00772654  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R00@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

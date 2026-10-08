// roc 2007-03 00772620  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772620
//
// 00772620  6a19                 push 0x19
// 00772622  6860a77a00           push 0x7aa760
// 00772627  e8b4b2dbff           call 0x52d8e0
// 0077262c  83c408               add esp, 8
// 0077262f  a300c68b00           mov dword ptr [0x8bc600], eax
// 00772634  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Z@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

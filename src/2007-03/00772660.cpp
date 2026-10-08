// roc 2007-03 00772660  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772660
//
// 00772660  6a1b                 push 0x1b
// 00772662  6868a77a00           push 0x7aa768
// 00772667  e874b2dbff           call 0x52d8e0
// 0077266c  83c408               add esp, 8
// 0077266f  a354c68b00           mov dword ptr [0x8bc654], eax
// 00772674  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R01@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

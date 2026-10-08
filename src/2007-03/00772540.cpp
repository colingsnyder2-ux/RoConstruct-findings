// roc 2007-03 00772540  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772540
//
// 00772540  6a0b                 push 0xb
// 00772542  683ca77a00           push 0x7aa73c
// 00772547  e894b3dbff           call 0x52d8e0
// 0077254c  83c408               add esp, 8
// 0077254f  a344c68b00           mov dword ptr [0x8bc644], eax
// 00772554  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_External@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

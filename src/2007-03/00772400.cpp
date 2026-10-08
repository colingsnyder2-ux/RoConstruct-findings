// roc 2007-03 00772400  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772400
//
// 00772400  6a01                 push 1
// 00772402  68f0a67a00           push 0x7aa6f0
// 00772407  e8d4b4dbff           call 0x52d8e0
// 0077240c  83c408               add esp, 8
// 0077240f  a304c68b00           mov dword ptr [0x8bc604], eax
// 00772414  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Evalue_IDREF_null@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

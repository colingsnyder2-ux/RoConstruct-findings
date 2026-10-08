// roc 2007-03 00772420  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772420
//
// 00772420  6a02                 push 2
// 00772422  68f8a67a00           push 0x7aa6f8
// 00772427  e8b4b4dbff           call 0x52d8e0
// 0077242c  83c408               add esp, 8
// 0077242f  a374c68b00           mov dword ptr [0x8bc674], eax
// 00772434  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Evalue_IDREF_nil@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

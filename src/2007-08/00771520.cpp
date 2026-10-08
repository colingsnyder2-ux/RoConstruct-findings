// roc 2007-08 00771520  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771520
//
// 00771520  6a02                 push 2
// 00771522  68888f7a00           push 0x7a8f88
// 00771527  e814b4dbff           call 0x52c940
// 0077152c  83c408               add esp, 8
// 0077152f  a3e8228c00           mov dword ptr [0x8c22e8], eax
// 00771534  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Evalue_IDREF_nil@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

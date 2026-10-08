// roc 2007-08 00771840  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771840
//
// 00771840  6a22                 push 0x22
// 00771842  6814907a00           push 0x7a9014
// 00771847  e8f4b0dbff           call 0x52c940
// 0077184c  83c408               add esp, 8
// 0077184f  a364228c00           mov dword ptr [0x8c2264], eax
// 00771854  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R22@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

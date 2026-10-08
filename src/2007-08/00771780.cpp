// roc 2007-08 00771780  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771780
//
// 00771780  6a1c                 push 0x1c
// 00771782  68fc8f7a00           push 0x7a8ffc
// 00771787  e8b4b1dbff           call 0x52c940
// 0077178c  83c408               add esp, 8
// 0077178f  a360228c00           mov dword ptr [0x8c2260], eax
// 00771794  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R02@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

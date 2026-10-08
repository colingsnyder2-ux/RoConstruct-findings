// roc 2007-08 00771880  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771880
//
// 00771880  6a24                 push 0x24
// 00771882  681c907a00           push 0x7a901c
// 00771887  e8b4b0dbff           call 0x52c940
// 0077188c  83c408               add esp, 8
// 0077188f  a39c228c00           mov dword ptr [0x8c229c], eax
// 00771894  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_G@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

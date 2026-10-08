// roc 2007-03 00772780  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772780
//
// 00772780  6a24                 push 0x24
// 00772782  688ca77a00           push 0x7aa78c
// 00772787  e854b1dbff           call 0x52d8e0
// 0077278c  83c408               add esp, 8
// 0077278f  a328c68b00           mov dword ptr [0x8bc628], eax
// 00772794  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_G@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

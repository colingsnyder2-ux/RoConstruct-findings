// roc 2007-03 007726e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007726e0
//
// 007726e0  6a1f                 push 0x1f
// 007726e2  6878a77a00           push 0x7aa778
// 007726e7  e8f4b1dbff           call 0x52d8e0
// 007726ec  83c408               add esp, 8
// 007726ef  a334c68b00           mov dword ptr [0x8bc634], eax
// 007726f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R12@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

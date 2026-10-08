// roc 2007-03 00772740  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772740
//
// 00772740  6a22                 push 0x22
// 00772742  6884a77a00           push 0x7aa784
// 00772747  e894b1dbff           call 0x52d8e0
// 0077274c  83c408               add esp, 8
// 0077274f  a3f0c58b00           mov dword ptr [0x8bc5f0], eax
// 00772754  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R22@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

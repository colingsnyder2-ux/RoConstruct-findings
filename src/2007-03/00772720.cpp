// roc 2007-03 00772720  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772720
//
// 00772720  6a21                 push 0x21
// 00772722  6880a77a00           push 0x7aa780
// 00772727  e8b4b1dbff           call 0x52d8e0
// 0077272c  83c408               add esp, 8
// 0077272f  a308c68b00           mov dword ptr [0x8bc608], eax
// 00772734  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R21@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

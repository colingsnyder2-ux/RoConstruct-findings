// roc 2007-08 00771680  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771680
//
// 00771680  6a0d                 push 0xd
// 00771682  68d88f7a00           push 0x7a8fd8
// 00771687  e8b4b2dbff           call 0x52c940
// 0077168c  83c408               add esp, 8
// 0077168f  a3ac228c00           mov dword ptr [0x8c22ac], eax
// 00771694  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_token@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

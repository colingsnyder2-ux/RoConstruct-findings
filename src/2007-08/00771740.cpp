// roc 2007-08 00771740  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771740
//
// 00771740  6a1a                 push 0x1a
// 00771742  68f48f7a00           push 0x7a8ff4
// 00771747  e8f4b1dbff           call 0x52c940
// 0077174c  83c408               add esp, 8
// 0077174f  a3b0228c00           mov dword ptr [0x8c22b0], eax
// 00771754  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R00@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

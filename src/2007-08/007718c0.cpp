// roc 2007-08 007718c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007718c0
//
// 007718c0  6a26                 push 0x26
// 007718c2  6820907a00           push 0x7a9020
// 007718c7  e874b0dbff           call 0x52c940
// 007718cc  83c408               add esp, 8
// 007718cf  a3dc228c00           mov dword ptr [0x8c22dc], eax
// 007718d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_class@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

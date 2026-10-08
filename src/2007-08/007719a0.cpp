// roc 2007-08 007719a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007719a0
//
// 007719a0  6a30                 push 0x30
// 007719a2  6854907a00           push 0x7a9054
// 007719a7  e894afdbff           call 0x52c940
// 007719ac  83c408               add esp, 8
// 007719af  a3e0228c00           mov dword ptr [0x8c22e0], eax
// 007719b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_mimeType@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2007-08 007718a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007718a0
//
// 007718a0  6a25                 push 0x25
// 007718a2  682c4a7800           push 0x784a2c
// 007718a7  e894b0dbff           call 0x52c940
// 007718ac  83c408               add esp, 8
// 007718af  a3a0228c00           mov dword ptr [0x8c22a0], eax
// 007718b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

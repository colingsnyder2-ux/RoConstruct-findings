// roc 2007-08 007717a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007717a0
//
// 007717a0  6a1d                 push 0x1d
// 007717a2  6800907a00           push 0x7a9000
// 007717a7  e894b1dbff           call 0x52c940
// 007717ac  83c408               add esp, 8
// 007717af  a384228c00           mov dword ptr [0x8c2284], eax
// 007717b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R10@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

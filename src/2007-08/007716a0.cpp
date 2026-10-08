// roc 2007-08 007716a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007716a0
//
// 007716a0  6a0e                 push 0xe
// 007716a2  6810617900           push 0x796110
// 007716a7  e894b2dbff           call 0x52c940
// 007716ac  83c408               add esp, 8
// 007716af  a398228c00           mov dword ptr [0x8c2298], eax
// 007716b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_name@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

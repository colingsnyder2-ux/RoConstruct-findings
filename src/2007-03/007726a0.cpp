// roc 2007-03 007726a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007726a0
//
// 007726a0  6a1d                 push 0x1d
// 007726a2  6870a77a00           push 0x7aa770
// 007726a7  e834b2dbff           call 0x52d8e0
// 007726ac  83c408               add esp, 8
// 007726af  a310c68b00           mov dword ptr [0x8bc610], eax
// 007726b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R10@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

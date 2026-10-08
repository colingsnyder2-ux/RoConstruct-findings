// roc 2007-08 007715e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007715e0
//
// 007715e0  6a08                 push 8
// 007715e2  68b88f7a00           push 0x7a8fb8
// 007715e7  e854b3dbff           call 0x52c940
// 007715ec  83c408               add esp, 8
// 007715ef  a388228c00           mov dword ptr [0x8c2288], eax
// 007715f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_DeleteItem@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

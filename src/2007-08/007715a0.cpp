// roc 2007-08 007715a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007715a0
//
// 007715a0  6a06                 push 6
// 007715a2  6878c97900           push 0x79c978
// 007715a7  e894b3dbff           call 0x52c940
// 007715ac  83c408               add esp, 8
// 007715af  a35c228c00           mov dword ptr [0x8c225c], eax
// 007715b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_root@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

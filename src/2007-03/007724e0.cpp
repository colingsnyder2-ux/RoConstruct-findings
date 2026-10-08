// roc 2007-03 007724e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007724e0
//
// 007724e0  6a08                 push 8
// 007724e2  6828a77a00           push 0x7aa728
// 007724e7  e8f4b3dbff           call 0x52d8e0
// 007724ec  83c408               add esp, 8
// 007724ef  a314c68b00           mov dword ptr [0x8bc614], eax
// 007724f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_DeleteItem@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

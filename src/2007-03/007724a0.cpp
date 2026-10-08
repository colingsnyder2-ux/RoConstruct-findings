// roc 2007-03 007724a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007724a0
//
// 007724a0  6a06                 push 6
// 007724a2  6800b97900           push 0x79b900
// 007724a7  e834b4dbff           call 0x52d8e0
// 007724ac  83c408               add esp, 8
// 007724af  a3e8c58b00           mov dword ptr [0x8bc5e8], eax
// 007724b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_root@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

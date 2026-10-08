// roc 2007-08 00771600  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771600
//
// 00771600  6a09                 push 9
// 00771602  68c48f7a00           push 0x7a8fc4
// 00771607  e834b3dbff           call 0x52c940
// 0077160c  83c408               add esp, 8
// 0077160f  a3d8228c00           mov dword ptr [0x8c22d8], eax
// 00771614  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_roblox@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

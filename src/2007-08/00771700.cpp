// roc 2007-08 00771700  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771700
//
// 00771700  6a18                 push 0x18
// 00771702  68ec8f7a00           push 0x7a8fec
// 00771707  e834b2dbff           call 0x52c940
// 0077170c  83c408               add esp, 8
// 0077170f  a3e4228c00           mov dword ptr [0x8c22e4], eax
// 00771714  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Y@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2007-08 00771900  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771900
//
// 00771900  6a28                 push 0x28
// 00771902  6830907a00           push 0x7a9030
// 00771907  e834b0dbff           call 0x52c940
// 0077190c  83c408               add esp, 8
// 0077190f  a368228c00           mov dword ptr [0x8c2268], eax
// 00771914  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Properties@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

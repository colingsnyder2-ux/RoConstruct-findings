// roc 2007-03 00772760  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772760
//
// 00772760  6a23                 push 0x23
// 00772762  6888a77a00           push 0x7aa788
// 00772767  e874b1dbff           call 0x52d8e0
// 0077276c  83c408               add esp, 8
// 0077276f  a35cc68b00           mov dword ptr [0x8bc65c], eax
// 00772774  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

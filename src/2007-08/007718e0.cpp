// roc 2007-08 007718e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007718e0
//
// 007718e0  6a27                 push 0x27
// 007718e2  6828907a00           push 0x7a9028
// 007718e7  e854b0dbff           call 0x52c940
// 007718ec  83c408               add esp, 8
// 007718ef  a3bc228c00           mov dword ptr [0x8c22bc], eax
// 007718f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Item@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

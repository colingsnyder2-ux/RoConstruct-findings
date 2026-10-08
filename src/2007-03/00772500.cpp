// roc 2007-03 00772500  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772500
//
// 00772500  6a09                 push 9
// 00772502  6834a77a00           push 0x7aa734
// 00772507  e8d4b3dbff           call 0x52d8e0
// 0077250c  83c408               add esp, 8
// 0077250f  a364c68b00           mov dword ptr [0x8bc664], eax
// 00772514  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_roblox@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

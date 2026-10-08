// roc 2007-03 00772580  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772580
//
// 00772580  6a0d                 push 0xd
// 00772582  6848a77a00           push 0x7aa748
// 00772587  e854b3dbff           call 0x52d8e0
// 0077258c  83c408               add esp, 8
// 0077258f  a338c68b00           mov dword ptr [0x8bc638], eax
// 00772594  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_token@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

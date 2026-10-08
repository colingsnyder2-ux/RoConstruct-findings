// roc 2007-03 00772440  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772440
//
// 00772440  6a03                 push 3
// 00772442  68fca67a00           push 0x7aa6fc
// 00772447  e894b4dbff           call 0x52d8e0
// 0077244c  83c408               add esp, 8
// 0077244f  a360c68b00           mov dword ptr [0x8bc660], eax
// 00772454  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_xsinil@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

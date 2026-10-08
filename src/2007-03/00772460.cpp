// roc 2007-03 00772460  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772460
//
// 00772460  6a04                 push 4
// 00772462  6804a77a00           push 0x7aa704
// 00772467  e874b4dbff           call 0x52d8e0
// 0077246c  83c408               add esp, 8
// 0077246f  a318c68b00           mov dword ptr [0x8bc618], eax
// 00772474  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_xsitype@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

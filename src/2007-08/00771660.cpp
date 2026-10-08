// roc 2007-08 00771660  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771660
//
// 00771660  6a0c                 push 0xc
// 00771662  68a8ac7900           push 0x79aca8
// 00771667  e8d4b2dbff           call 0x52c940
// 0077166c  83c408               add esp, 8
// 0077166f  a370228c00           mov dword ptr [0x8c2270], eax
// 00771674  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_Ref@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

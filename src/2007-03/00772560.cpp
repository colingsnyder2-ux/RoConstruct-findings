// roc 2007-03 00772560  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772560
//
// 00772560  6a0c                 push 0xc
// 00772562  68709e7900           push 0x799e70
// 00772567  e874b3dbff           call 0x52d8e0
// 0077256c  83c408               add esp, 8
// 0077256f  a3fcc58b00           mov dword ptr [0x8bc5fc], eax
// 00772574  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_Ref@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

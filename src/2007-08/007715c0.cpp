// roc 2007-08 007715c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007715c0
//
// 007715c0  6a07                 push 7
// 007715c2  68ac8f7a00           push 0x7a8fac
// 007715c7  e874b3dbff           call 0x52c940
// 007715cc  83c408               add esp, 8
// 007715cf  a36c228c00           mov dword ptr [0x8c226c], eax
// 007715d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_referent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

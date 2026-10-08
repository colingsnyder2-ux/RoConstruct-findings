// roc 2007-08 00771540  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771540
//
// 00771540  6a03                 push 3
// 00771542  688c8f7a00           push 0x7a8f8c
// 00771547  e8f4b3dbff           call 0x52c940
// 0077154c  83c408               add esp, 8
// 0077154f  a3d4228c00           mov dword ptr [0x8c22d4], eax
// 00771554  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_xsinil@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

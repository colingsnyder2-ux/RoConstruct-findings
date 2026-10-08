// roc 2007-08 00771620  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771620
//
// 00771620  6a0a                 push 0xa
// 00771622  6858707800           push 0x787058
// 00771627  e814b3dbff           call 0x52c940
// 0077162c  83c408               add esp, 8
// 0077162f  a3c0228c00           mov dword ptr [0x8c22c0], eax
// 00771634  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_version@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

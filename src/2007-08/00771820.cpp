// roc 2007-08 00771820  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771820
//
// 00771820  6a21                 push 0x21
// 00771822  6810907a00           push 0x7a9010
// 00771827  e814b1dbff           call 0x52c940
// 0077182c  83c408               add esp, 8
// 0077182f  a37c228c00           mov dword ptr [0x8c227c], eax
// 00771834  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R21@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

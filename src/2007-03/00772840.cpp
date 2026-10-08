// roc 2007-03 00772840  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772840
//
// 00772840  6a2c                 push 0x2c
// 00772842  68b4a77a00           push 0x7aa7b4
// 00772847  e894b0dbff           call 0x52d8e0
// 0077284c  83c408               add esp, 8
// 0077284f  a358c68b00           mov dword ptr [0x8bc658], eax
// 00772854  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_binary@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

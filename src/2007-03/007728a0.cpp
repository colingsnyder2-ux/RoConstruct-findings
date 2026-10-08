// roc 2007-03 007728a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007728a0
//
// 007728a0  6a30                 push 0x30
// 007728a2  68c4a77a00           push 0x7aa7c4
// 007728a7  e834b0dbff           call 0x52d8e0
// 007728ac  83c408               add esp, 8
// 007728af  a36cc68b00           mov dword ptr [0x8bc66c], eax
// 007728b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_mimeType@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2007-03 0040c8b0  unit: seg_00400000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040c8b0
//
// 0040c8b0  85c9                 test ecx, ecx
// 0040c8b2  7408                 je 0x40c8bc
// 0040c8b4  83c108               add ecx, 8
// 0040c8b7  e934c4ffff           jmp 0x408cf0
// 0040c8bc  33c9                 xor ecx, ecx
// 0040c8be  e92dc4ffff           jmp 0x408cf0
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??1XmlAttribute@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

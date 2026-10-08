// roc 2007-08 0040b3b0  unit: CBrowserView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b3b0
//
// 0040b3b0  85c9                 test ecx, ecx
// 0040b3b2  7408                 je 0x40b3bc
// 0040b3b4  83c108               add ecx, 8
// 0040b3b7  e964b70500           jmp 0x466b20
// 0040b3bc  33c9                 xor ecx, ecx
// 0040b3be  e95db70500           jmp 0x466b20
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??1XmlAttribute@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

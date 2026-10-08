// roc 2007-08 0055d3b0  unit: RBX::DataModel  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d3b0
//
// 0055d3b0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0055d3b3  85c0                 test eax, eax
// 0055d3b5  7414                 je 0x55d3cb
// 0055d3b7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055d3bb  eb03                 jmp 0x55d3c0
// 0055d3bd  8d4900               lea ecx, [ecx]
// 0055d3c0  394804               cmp dword ptr [eax + 4], ecx
// 0055d3c3  7408                 je 0x55d3cd
// 0055d3c5  8b00                 mov eax, dword ptr [eax]
// 0055d3c7  85c0                 test eax, eax
// 0055d3c9  75f5                 jne 0x55d3c0
// 0055d3cb  33c0                 xor eax, eax
// 0055d3cd  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QAEPAVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

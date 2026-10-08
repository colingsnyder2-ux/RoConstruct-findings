// roc 2007-03 0055eea0  unit: seg_00550000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055eea0
//
// 0055eea0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0055eea3  85c0                 test eax, eax
// 0055eea5  7414                 je 0x55eebb
// 0055eea7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055eeab  eb03                 jmp 0x55eeb0
// 0055eead  8d4900               lea ecx, [ecx]
// 0055eeb0  394804               cmp dword ptr [eax + 4], ecx
// 0055eeb3  7408                 je 0x55eebd
// 0055eeb5  8b00                 mov eax, dword ptr [eax]
// 0055eeb7  85c0                 test eax, eax
// 0055eeb9  75f5                 jne 0x55eeb0
// 0055eebb  33c0                 xor eax, eax
// 0055eebd  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QAEPAVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

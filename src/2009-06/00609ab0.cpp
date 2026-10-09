// roc 2009-06 00609ab0  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609ab0
//
// 00609ab0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00609ab3  85c0                 test eax, eax
// 00609ab5  7414                 je 0x609acb
// 00609ab7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00609abb  eb03                 jmp 0x609ac0
// 00609abd  8d4900               lea ecx, [ecx]
// 00609ac0  394808               cmp dword ptr [eax + 8], ecx
// 00609ac3  7408                 je 0x609acd
// 00609ac5  8b00                 mov eax, dword ptr [eax]
// 00609ac7  85c0                 test eax, eax
// 00609ac9  75f5                 jne 0x609ac0
// 00609acb  33c0                 xor eax, eax
// 00609acd  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QBEPBVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

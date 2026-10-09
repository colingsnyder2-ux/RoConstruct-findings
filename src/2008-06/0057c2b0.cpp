// roc 2008-06 0057c2b0  unit: RBX::VInstance::?$SignalDesc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c2b0
//
// 0057c2b0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0057c2b3  85c0                 test eax, eax
// 0057c2b5  7414                 je 0x57c2cb
// 0057c2b7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057c2bb  eb03                 jmp 0x57c2c0
// 0057c2bd  8d4900               lea ecx, [ecx]
// 0057c2c0  394808               cmp dword ptr [eax + 8], ecx
// 0057c2c3  7408                 je 0x57c2cd
// 0057c2c5  8b00                 mov eax, dword ptr [eax]
// 0057c2c7  85c0                 test eax, eax
// 0057c2c9  75f5                 jne 0x57c2c0
// 0057c2cb  33c0                 xor eax, eax
// 0057c2cd  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QBEPBVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

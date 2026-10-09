// roc 2010-06 005dfd10  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfd10
//
// 005dfd10  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005dfd13  85c0                 test eax, eax
// 005dfd15  7414                 je 0x5dfd2b
// 005dfd17  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dfd1b  eb03                 jmp 0x5dfd20
// 005dfd1d  8d4900               lea ecx, [ecx]
// 005dfd20  394808               cmp dword ptr [eax + 8], ecx
// 005dfd23  7408                 je 0x5dfd2d
// 005dfd25  8b00                 mov eax, dword ptr [eax]
// 005dfd27  85c0                 test eax, eax
// 005dfd29  75f5                 jne 0x5dfd20
// 005dfd2b  33c0                 xor eax, eax
// 005dfd2d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QBEPBVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

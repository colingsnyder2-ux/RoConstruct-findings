// roc 2009-12 00676e50  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00676e50
//
// 00676e50  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00676e53  85c0                 test eax, eax
// 00676e55  7414                 je 0x676e6b
// 00676e57  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00676e5b  eb03                 jmp 0x676e60
// 00676e5d  8d4900               lea ecx, [ecx]
// 00676e60  394808               cmp dword ptr [eax + 8], ecx
// 00676e63  7408                 je 0x676e6d
// 00676e65  8b00                 mov eax, dword ptr [eax]
// 00676e67  85c0                 test eax, eax
// 00676e69  75f5                 jne 0x676e60
// 00676e6b  33c0                 xor eax, eax
// 00676e6d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QBEPBVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

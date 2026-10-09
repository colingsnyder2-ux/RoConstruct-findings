// roc 2011-06 00602a50  unit: RBX::UnifiedWidget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602a50
//
// 00602a50  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00602a53  85c0                 test eax, eax
// 00602a55  7414                 je 0x602a6b
// 00602a57  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00602a5b  eb03                 jmp 0x602a60
// 00602a5d  8d4900               lea ecx, [ecx]
// 00602a60  394808               cmp dword ptr [eax + 8], ecx
// 00602a63  7408                 je 0x602a6d
// 00602a65  8b00                 mov eax, dword ptr [eax]
// 00602a67  85c0                 test eax, eax
// 00602a69  75f5                 jne 0x602a60
// 00602a6b  33c0                 xor eax, eax
// 00602a6d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QBEPBVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

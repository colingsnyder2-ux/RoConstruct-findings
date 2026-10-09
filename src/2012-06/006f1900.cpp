// roc 2012-06 006f1900  unit: RBX::DataModel  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1900
//
// 006f1900  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006f1903  85c0                 test eax, eax
// 006f1905  7414                 je 0x6f191b
// 006f1907  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f190b  eb03                 jmp 0x6f1910
// 006f190d  8d4900               lea ecx, [ecx]
// 006f1910  394808               cmp dword ptr [eax + 8], ecx
// 006f1913  7408                 je 0x6f191d
// 006f1915  8b00                 mov eax, dword ptr [eax]
// 006f1917  85c0                 test eax, eax
// 006f1919  75f5                 jne 0x6f1910
// 006f191b  33c0                 xor eax, eax
// 006f191d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findAttribute@XmlElement@@QBEPBVXmlAttribute@@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

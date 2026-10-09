// roc 2010-06 005dfc90  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfc90
//
// 005dfc90  8b4104               mov eax, dword ptr [ecx + 4]
// 005dfc93  85c0                 test eax, eax
// 005dfc95  7414                 je 0x5dfcab
// 005dfc97  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dfc9b  eb03                 jmp 0x5dfca0
// 005dfc9d  8d4900               lea ecx, [ecx]
// 005dfca0  394810               cmp dword ptr [eax + 0x10], ecx
// 005dfca3  7408                 je 0x5dfcad
// 005dfca5  8b00                 mov eax, dword ptr [eax]
// 005dfca7  85c0                 test eax, eax
// 005dfca9  75f5                 jne 0x5dfca0
// 005dfcab  33c0                 xor eax, eax
// 005dfcad  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

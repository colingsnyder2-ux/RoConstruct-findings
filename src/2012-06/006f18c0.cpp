// roc 2012-06 006f18c0  unit: RBX::DataModel  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f18c0
//
// 006f18c0  8b4104               mov eax, dword ptr [ecx + 4]
// 006f18c3  85c0                 test eax, eax
// 006f18c5  7414                 je 0x6f18db
// 006f18c7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f18cb  eb03                 jmp 0x6f18d0
// 006f18cd  8d4900               lea ecx, [ecx]
// 006f18d0  394810               cmp dword ptr [eax + 0x10], ecx
// 006f18d3  7408                 je 0x6f18dd
// 006f18d5  8b00                 mov eax, dword ptr [eax]
// 006f18d7  85c0                 test eax, eax
// 006f18d9  75f5                 jne 0x6f18d0
// 006f18db  33c0                 xor eax, eax
// 006f18dd  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

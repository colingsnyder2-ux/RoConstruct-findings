// roc 2009-12 00676e10  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00676e10
//
// 00676e10  8b4104               mov eax, dword ptr [ecx + 4]
// 00676e13  85c0                 test eax, eax
// 00676e15  7414                 je 0x676e2b
// 00676e17  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00676e1b  eb03                 jmp 0x676e20
// 00676e1d  8d4900               lea ecx, [ecx]
// 00676e20  394810               cmp dword ptr [eax + 0x10], ecx
// 00676e23  7408                 je 0x676e2d
// 00676e25  8b00                 mov eax, dword ptr [eax]
// 00676e27  85c0                 test eax, eax
// 00676e29  75f5                 jne 0x676e20
// 00676e2b  33c0                 xor eax, eax
// 00676e2d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

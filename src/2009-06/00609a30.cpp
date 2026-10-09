// roc 2009-06 00609a30  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609a30
//
// 00609a30  8b4104               mov eax, dword ptr [ecx + 4]
// 00609a33  85c0                 test eax, eax
// 00609a35  7414                 je 0x609a4b
// 00609a37  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00609a3b  eb03                 jmp 0x609a40
// 00609a3d  8d4900               lea ecx, [ecx]
// 00609a40  394810               cmp dword ptr [eax + 0x10], ecx
// 00609a43  7408                 je 0x609a4d
// 00609a45  8b00                 mov eax, dword ptr [eax]
// 00609a47  85c0                 test eax, eax
// 00609a49  75f5                 jne 0x609a40
// 00609a4b  33c0                 xor eax, eax
// 00609a4d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

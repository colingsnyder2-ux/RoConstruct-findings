// roc 2009-06 00609a50  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609a50
//
// 00609a50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00609a54  8b01                 mov eax, dword ptr [ecx]
// 00609a56  85c0                 test eax, eax
// 00609a58  7411                 je 0x609a6b
// 00609a5a  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00609a5d  8d4900               lea ecx, [ecx]
// 00609a60  394810               cmp dword ptr [eax + 0x10], ecx
// 00609a63  7408                 je 0x609a6d
// 00609a65  8b00                 mov eax, dword ptr [eax]
// 00609a67  85c0                 test eax, eax
// 00609a69  75f5                 jne 0x609a60
// 00609a6b  33c0                 xor eax, eax
// 00609a6d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

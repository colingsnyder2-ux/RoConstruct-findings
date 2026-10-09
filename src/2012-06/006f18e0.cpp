// roc 2012-06 006f18e0  unit: RBX::DataModel  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f18e0
//
// 006f18e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f18e4  8b01                 mov eax, dword ptr [ecx]
// 006f18e6  85c0                 test eax, eax
// 006f18e8  7411                 je 0x6f18fb
// 006f18ea  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006f18ed  8d4900               lea ecx, [ecx]
// 006f18f0  394810               cmp dword ptr [eax + 0x10], ecx
// 006f18f3  7408                 je 0x6f18fd
// 006f18f5  8b00                 mov eax, dword ptr [eax]
// 006f18f7  85c0                 test eax, eax
// 006f18f9  75f5                 jne 0x6f18f0
// 006f18fb  33c0                 xor eax, eax
// 006f18fd  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

// roc 2009-12 00676e30  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00676e30
//
// 00676e30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00676e34  8b01                 mov eax, dword ptr [ecx]
// 00676e36  85c0                 test eax, eax
// 00676e38  7411                 je 0x676e4b
// 00676e3a  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00676e3d  8d4900               lea ecx, [ecx]
// 00676e40  394810               cmp dword ptr [eax + 0x10], ecx
// 00676e43  7408                 je 0x676e4d
// 00676e45  8b00                 mov eax, dword ptr [eax]
// 00676e47  85c0                 test eax, eax
// 00676e49  75f5                 jne 0x676e40
// 00676e4b  33c0                 xor eax, eax
// 00676e4d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

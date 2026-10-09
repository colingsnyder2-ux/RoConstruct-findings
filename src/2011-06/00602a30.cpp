// roc 2011-06 00602a30  unit: RBX::UnifiedWidget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602a30
//
// 00602a30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00602a34  8b01                 mov eax, dword ptr [ecx]
// 00602a36  85c0                 test eax, eax
// 00602a38  7411                 je 0x602a4b
// 00602a3a  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00602a3d  8d4900               lea ecx, [ecx]
// 00602a40  394810               cmp dword ptr [eax + 0x10], ecx
// 00602a43  7408                 je 0x602a4d
// 00602a45  8b00                 mov eax, dword ptr [eax]
// 00602a47  85c0                 test eax, eax
// 00602a49  75f5                 jne 0x602a40
// 00602a4b  33c0                 xor eax, eax
// 00602a4d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

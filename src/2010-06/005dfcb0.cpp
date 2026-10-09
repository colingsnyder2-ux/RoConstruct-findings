// roc 2010-06 005dfcb0  unit: RBX::GlobalSettings  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfcb0
//
// 005dfcb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dfcb4  8b01                 mov eax, dword ptr [ecx]
// 005dfcb6  85c0                 test eax, eax
// 005dfcb8  7411                 je 0x5dfccb
// 005dfcba  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005dfcbd  8d4900               lea ecx, [ecx]
// 005dfcc0  394810               cmp dword ptr [eax + 0x10], ecx
// 005dfcc3  7408                 je 0x5dfccd
// 005dfcc5  8b00                 mov eax, dword ptr [eax]
// 005dfcc7  85c0                 test eax, eax
// 005dfcc9  75f5                 jne 0x5dfcc0
// 005dfccb  33c0                 xor eax, eax
// 005dfccd  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

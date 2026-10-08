// roc 2007-03 0055edb0  unit: seg_00550000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055edb0
//
// 0055edb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055edb4  8b01                 mov eax, dword ptr [ecx]
// 0055edb6  85c0                 test eax, eax
// 0055edb8  7411                 je 0x55edcb
// 0055edba  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055edbd  8d4900               lea ecx, [ecx]
// 0055edc0  39480c               cmp dword ptr [eax + 0xc], ecx
// 0055edc3  7408                 je 0x55edcd
// 0055edc5  8b00                 mov eax, dword ptr [eax]
// 0055edc7  85c0                 test eax, eax
// 0055edc9  75f5                 jne 0x55edc0
// 0055edcb  33c0                 xor eax, eax
// 0055edcd  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

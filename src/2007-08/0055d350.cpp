// roc 2007-08 0055d350  unit: RBX::DataModel  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d350
//
// 0055d350  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055d354  8b01                 mov eax, dword ptr [ecx]
// 0055d356  85c0                 test eax, eax
// 0055d358  7411                 je 0x55d36b
// 0055d35a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055d35d  8d4900               lea ecx, [ecx]
// 0055d360  39480c               cmp dword ptr [eax + 0xc], ecx
// 0055d363  7408                 je 0x55d36d
// 0055d365  8b00                 mov eax, dword ptr [eax]
// 0055d367  85c0                 test eax, eax
// 0055d369  75f5                 jne 0x55d360
// 0055d36b  33c0                 xor eax, eax
// 0055d36d  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

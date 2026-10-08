// roc 2007-03 0055ed90  unit: seg_00550000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055ed90
//
// 0055ed90  8b4104               mov eax, dword ptr [ecx + 4]
// 0055ed93  85c0                 test eax, eax
// 0055ed95  7414                 je 0x55edab
// 0055ed97  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055ed9b  eb03                 jmp 0x55eda0
// 0055ed9d  8d4900               lea ecx, [ecx]
// 0055eda0  39480c               cmp dword ptr [eax + 0xc], ecx
// 0055eda3  7408                 je 0x55edad
// 0055eda5  8b00                 mov eax, dword ptr [eax]
// 0055eda7  85c0                 test eax, eax
// 0055eda9  75f5                 jne 0x55eda0
// 0055edab  33c0                 xor eax, eax
// 0055edad  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2008-06 004a9850  unit: seg_004a0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9850
//
// 004a9850  8b11                 mov edx, dword ptr [ecx]
// 004a9852  8b442404             mov eax, dword ptr [esp + 4]
// 004a9856  3b10                 cmp edx, dword ptr [eax]
// 004a9858  750f                 jne 0x4a9869
// 004a985a  668b4904             mov cx, word ptr [ecx + 4]
// 004a985e  663b4804             cmp cx, word ptr [eax + 4]
// 004a9862  7505                 jne 0x4a9869
// 004a9864  33c0                 xor eax, eax
// 004a9866  c20400               ret 4
// 004a9869  b801000000           mov eax, 1
// 004a986e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??9SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

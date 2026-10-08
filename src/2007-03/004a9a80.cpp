// roc 2007-03 004a9a80  unit: seg_004a0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9a80
//
// 004a9a80  8b11                 mov edx, dword ptr [ecx]
// 004a9a82  8b442404             mov eax, dword ptr [esp + 4]
// 004a9a86  3b10                 cmp edx, dword ptr [eax]
// 004a9a88  750f                 jne 0x4a9a99
// 004a9a8a  668b4904             mov cx, word ptr [ecx + 4]
// 004a9a8e  663b4804             cmp cx, word ptr [eax + 4]
// 004a9a92  7505                 jne 0x4a9a99
// 004a9a94  33c0                 xor eax, eax
// 004a9a96  c20400               ret 4
// 004a9a99  b801000000           mov eax, 1
// 004a9a9e  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??9SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

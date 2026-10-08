// roc 2007-03 004a9ab0  unit: seg_004a0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9ab0
//
// 004a9ab0  8b01                 mov eax, dword ptr [ecx]
// 004a9ab2  56                   push esi
// 004a9ab3  8b742408             mov esi, dword ptr [esp + 8]
// 004a9ab7  8b16                 mov edx, dword ptr [esi]
// 004a9ab9  3bc2                 cmp eax, edx
// 004a9abb  7212                 jb 0x4a9acf
// 004a9abd  750a                 jne 0x4a9ac9
// 004a9abf  668b4104             mov ax, word ptr [ecx + 4]
// 004a9ac3  663b4604             cmp ax, word ptr [esi + 4]
// 004a9ac7  7206                 jb 0x4a9acf
// 004a9ac9  33c0                 xor eax, eax
// 004a9acb  5e                   pop esi
// 004a9acc  c20400               ret 4
// 004a9acf  b801000000           mov eax, 1
// 004a9ad4  5e                   pop esi
// 004a9ad5  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

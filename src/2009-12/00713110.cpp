// roc 2009-12 00713110  unit: RBX::VHint::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713110
//
// 00713110  8b01                 mov eax, dword ptr [ecx]
// 00713112  56                   push esi
// 00713113  8b742408             mov esi, dword ptr [esp + 8]
// 00713117  8b16                 mov edx, dword ptr [esi]
// 00713119  3bc2                 cmp eax, edx
// 0071311b  7212                 jb 0x71312f
// 0071311d  750a                 jne 0x713129
// 0071311f  668b4104             mov ax, word ptr [ecx + 4]
// 00713123  663b4604             cmp ax, word ptr [esi + 4]
// 00713127  7206                 jb 0x71312f
// 00713129  33c0                 xor eax, eax
// 0071312b  5e                   pop esi
// 0071312c  c20400               ret 4
// 0071312f  b801000000           mov eax, 1
// 00713134  5e                   pop esi
// 00713135  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

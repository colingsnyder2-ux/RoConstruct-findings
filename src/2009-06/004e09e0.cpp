// roc 2009-06 004e09e0  unit: RBX::Network::IdSerializer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e09e0
//
// 004e09e0  8b01                 mov eax, dword ptr [ecx]
// 004e09e2  56                   push esi
// 004e09e3  8b742408             mov esi, dword ptr [esp + 8]
// 004e09e7  8b16                 mov edx, dword ptr [esi]
// 004e09e9  3bc2                 cmp eax, edx
// 004e09eb  7212                 jb 0x4e09ff
// 004e09ed  750a                 jne 0x4e09f9
// 004e09ef  668b4104             mov ax, word ptr [ecx + 4]
// 004e09f3  663b4604             cmp ax, word ptr [esi + 4]
// 004e09f7  7206                 jb 0x4e09ff
// 004e09f9  33c0                 xor eax, eax
// 004e09fb  5e                   pop esi
// 004e09fc  c20400               ret 4
// 004e09ff  b801000000           mov eax, 1
// 004e0a04  5e                   pop esi
// 004e0a05  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

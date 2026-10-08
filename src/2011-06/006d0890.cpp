// roc 2011-06 006d0890  unit: seg_006d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0890
//
// 006d0890  8b01                 mov eax, dword ptr [ecx]
// 006d0892  56                   push esi
// 006d0893  8b742408             mov esi, dword ptr [esp + 8]
// 006d0897  8b16                 mov edx, dword ptr [esi]
// 006d0899  3bc2                 cmp eax, edx
// 006d089b  7212                 jb 0x6d08af
// 006d089d  750a                 jne 0x6d08a9
// 006d089f  668b4104             mov ax, word ptr [ecx + 4]
// 006d08a3  663b4604             cmp ax, word ptr [esi + 4]
// 006d08a7  7206                 jb 0x6d08af
// 006d08a9  33c0                 xor eax, eax
// 006d08ab  5e                   pop esi
// 006d08ac  c20400               ret 4
// 006d08af  b801000000           mov eax, 1
// 006d08b4  5e                   pop esi
// 006d08b5  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

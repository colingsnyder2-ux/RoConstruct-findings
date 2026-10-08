// roc 2008-06 004a9880  unit: seg_004a0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9880
//
// 004a9880  8b01                 mov eax, dword ptr [ecx]
// 004a9882  56                   push esi
// 004a9883  8b742408             mov esi, dword ptr [esp + 8]
// 004a9887  8b16                 mov edx, dword ptr [esi]
// 004a9889  3bc2                 cmp eax, edx
// 004a988b  7212                 jb 0x4a989f
// 004a988d  750a                 jne 0x4a9899
// 004a988f  668b4104             mov ax, word ptr [ecx + 4]
// 004a9893  663b4604             cmp ax, word ptr [esi + 4]
// 004a9897  7206                 jb 0x4a989f
// 004a9899  33c0                 xor eax, eax
// 004a989b  5e                   pop esi
// 004a989c  c20400               ret 4
// 004a989f  b801000000           mov eax, 1
// 004a98a4  5e                   pop esi
// 004a98a5  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

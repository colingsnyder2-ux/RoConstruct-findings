// roc 2010-06 004fdbb0  unit: RBX::Network::IdSerializer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fdbb0
//
// 004fdbb0  8b01                 mov eax, dword ptr [ecx]
// 004fdbb2  56                   push esi
// 004fdbb3  8b742408             mov esi, dword ptr [esp + 8]
// 004fdbb7  8b16                 mov edx, dword ptr [esi]
// 004fdbb9  3bc2                 cmp eax, edx
// 004fdbbb  7212                 jb 0x4fdbcf
// 004fdbbd  750a                 jne 0x4fdbc9
// 004fdbbf  668b4104             mov ax, word ptr [ecx + 4]
// 004fdbc3  663b4604             cmp ax, word ptr [esi + 4]
// 004fdbc7  7206                 jb 0x4fdbcf
// 004fdbc9  33c0                 xor eax, eax
// 004fdbcb  5e                   pop esi
// 004fdbcc  c20400               ret 4
// 004fdbcf  b801000000           mov eax, 1
// 004fdbd4  5e                   pop esi
// 004fdbd5  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

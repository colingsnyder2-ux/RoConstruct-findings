// roc 2012-06 007f6d40  unit: RBX::Humanoid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f6d40
//
// 007f6d40  8b01                 mov eax, dword ptr [ecx]
// 007f6d42  56                   push esi
// 007f6d43  8b742408             mov esi, dword ptr [esp + 8]
// 007f6d47  8b16                 mov edx, dword ptr [esi]
// 007f6d49  3bc2                 cmp eax, edx
// 007f6d4b  7212                 jb 0x7f6d5f
// 007f6d4d  750a                 jne 0x7f6d59
// 007f6d4f  668b4104             mov ax, word ptr [ecx + 4]
// 007f6d53  663b4604             cmp ax, word ptr [esi + 4]
// 007f6d57  7206                 jb 0x7f6d5f
// 007f6d59  33c0                 xor eax, eax
// 007f6d5b  5e                   pop esi
// 007f6d5c  c20400               ret 4
// 007f6d5f  b801000000           mov eax, 1
// 007f6d64  5e                   pop esi
// 007f6d65  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

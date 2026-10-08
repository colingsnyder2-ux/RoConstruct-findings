// roc 2007-08 004a34e0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a34e0
//
// 004a34e0  8b01                 mov eax, dword ptr [ecx]
// 004a34e2  56                   push esi
// 004a34e3  8b742408             mov esi, dword ptr [esp + 8]
// 004a34e7  8b16                 mov edx, dword ptr [esi]
// 004a34e9  3bc2                 cmp eax, edx
// 004a34eb  7212                 jb 0x4a34ff
// 004a34ed  750a                 jne 0x4a34f9
// 004a34ef  668b4104             mov ax, word ptr [ecx + 4]
// 004a34f3  663b4604             cmp ax, word ptr [esi + 4]
// 004a34f7  7206                 jb 0x4a34ff
// 004a34f9  33c0                 xor eax, eax
// 004a34fb  5e                   pop esi
// 004a34fc  c20400               ret 4
// 004a34ff  b801000000           mov eax, 1
// 004a3504  5e                   pop esi
// 004a3505  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MSystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

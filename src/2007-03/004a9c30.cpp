// roc 2007-03 004a9c30  unit: seg_004a0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9c30
//
// 004a9c30  803d74918b0000       cmp byte ptr [0x8b9174], 0
// 004a9c37  7442                 je 0x4a9c7b
// 004a9c39  8b01                 mov eax, dword ptr [ecx]
// 004a9c3b  56                   push esi
// 004a9c3c  8b742408             mov esi, dword ptr [esp + 8]
// 004a9c40  8b16                 mov edx, dword ptr [esi]
// 004a9c42  3bc2                 cmp eax, edx
// 004a9c44  722c                 jb 0x4a9c72
// 004a9c46  750c                 jne 0x4a9c54
// 004a9c48  57                   push edi
// 004a9c49  668b7904             mov di, word ptr [ecx + 4]
// 004a9c4d  663b7e04             cmp di, word ptr [esi + 4]
// 004a9c51  5f                   pop edi
// 004a9c52  721e                 jb 0x4a9c72
// 004a9c54  3bc2                 cmp eax, edx
// 004a9c56  7514                 jne 0x4a9c6c
// 004a9c58  668b4104             mov ax, word ptr [ecx + 4]
// 004a9c5c  663b4604             cmp ax, word ptr [esi + 4]
// 004a9c60  750a                 jne 0x4a9c6c
// 004a9c62  668b4908             mov cx, word ptr [ecx + 8]
// 004a9c66  663b4e08             cmp cx, word ptr [esi + 8]
// 004a9c6a  7206                 jb 0x4a9c72
// 004a9c6c  33c0                 xor eax, eax
// 004a9c6e  5e                   pop esi
// 004a9c6f  c20400               ret 4
// 004a9c72  b801000000           mov eax, 1
// 004a9c77  5e                   pop esi
// 004a9c78  c20400               ret 4
// 004a9c7b  8b442404             mov eax, dword ptr [esp + 4]
// 004a9c7f  668b5108             mov dx, word ptr [ecx + 8]
// 004a9c83  663b5008             cmp dx, word ptr [eax + 8]
// 004a9c87  1bc0                 sbb eax, eax
// 004a9c89  f7d8                 neg eax
// 004a9c8b  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MNetworkID@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

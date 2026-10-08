// roc 2007-08 004a3680  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3680
//
// 004a3680  803d0ce78b0000       cmp byte ptr [0x8be70c], 0
// 004a3687  7442                 je 0x4a36cb
// 004a3689  8b01                 mov eax, dword ptr [ecx]
// 004a368b  56                   push esi
// 004a368c  8b742408             mov esi, dword ptr [esp + 8]
// 004a3690  8b16                 mov edx, dword ptr [esi]
// 004a3692  3bc2                 cmp eax, edx
// 004a3694  722c                 jb 0x4a36c2
// 004a3696  750c                 jne 0x4a36a4
// 004a3698  57                   push edi
// 004a3699  668b7904             mov di, word ptr [ecx + 4]
// 004a369d  663b7e04             cmp di, word ptr [esi + 4]
// 004a36a1  5f                   pop edi
// 004a36a2  721e                 jb 0x4a36c2
// 004a36a4  3bc2                 cmp eax, edx
// 004a36a6  7514                 jne 0x4a36bc
// 004a36a8  668b4104             mov ax, word ptr [ecx + 4]
// 004a36ac  663b4604             cmp ax, word ptr [esi + 4]
// 004a36b0  750a                 jne 0x4a36bc
// 004a36b2  668b4908             mov cx, word ptr [ecx + 8]
// 004a36b6  663b4e08             cmp cx, word ptr [esi + 8]
// 004a36ba  7206                 jb 0x4a36c2
// 004a36bc  33c0                 xor eax, eax
// 004a36be  5e                   pop esi
// 004a36bf  c20400               ret 4
// 004a36c2  b801000000           mov eax, 1
// 004a36c7  5e                   pop esi
// 004a36c8  c20400               ret 4
// 004a36cb  8b442404             mov eax, dword ptr [esp + 4]
// 004a36cf  668b5108             mov dx, word ptr [ecx + 8]
// 004a36d3  663b5008             cmp dx, word ptr [eax + 8]
// 004a36d7  1bc0                 sbb eax, eax
// 004a36d9  f7d8                 neg eax
// 004a36db  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??MNetworkID@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

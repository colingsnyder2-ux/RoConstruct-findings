// roc 2007-08 004a3620  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3620
//
// 004a3620  803d0ce78b0000       cmp byte ptr [0x8be70c], 0
// 004a3627  7442                 je 0x4a366b
// 004a3629  8b01                 mov eax, dword ptr [ecx]
// 004a362b  56                   push esi
// 004a362c  8b742408             mov esi, dword ptr [esp + 8]
// 004a3630  8b16                 mov edx, dword ptr [esi]
// 004a3632  3bc2                 cmp eax, edx
// 004a3634  772c                 ja 0x4a3662
// 004a3636  750c                 jne 0x4a3644
// 004a3638  57                   push edi
// 004a3639  668b7904             mov di, word ptr [ecx + 4]
// 004a363d  663b7e04             cmp di, word ptr [esi + 4]
// 004a3641  5f                   pop edi
// 004a3642  771e                 ja 0x4a3662
// 004a3644  3bc2                 cmp eax, edx
// 004a3646  7514                 jne 0x4a365c
// 004a3648  668b4104             mov ax, word ptr [ecx + 4]
// 004a364c  663b4604             cmp ax, word ptr [esi + 4]
// 004a3650  750a                 jne 0x4a365c
// 004a3652  668b4908             mov cx, word ptr [ecx + 8]
// 004a3656  663b4e08             cmp cx, word ptr [esi + 8]
// 004a365a  7706                 ja 0x4a3662
// 004a365c  33c0                 xor eax, eax
// 004a365e  5e                   pop esi
// 004a365f  c20400               ret 4
// 004a3662  b801000000           mov eax, 1
// 004a3667  5e                   pop esi
// 004a3668  c20400               ret 4
// 004a366b  8b442404             mov eax, dword ptr [esp + 4]
// 004a366f  668b5108             mov dx, word ptr [ecx + 8]
// 004a3673  66395008             cmp word ptr [eax + 8], dx
// 004a3677  1bc0                 sbb eax, eax
// 004a3679  f7d8                 neg eax
// 004a367b  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??ONetworkID@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

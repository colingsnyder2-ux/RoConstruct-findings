// roc 2007-03 004a9bd0  unit: seg_004a0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9bd0
//
// 004a9bd0  803d74918b0000       cmp byte ptr [0x8b9174], 0
// 004a9bd7  7442                 je 0x4a9c1b
// 004a9bd9  8b01                 mov eax, dword ptr [ecx]
// 004a9bdb  56                   push esi
// 004a9bdc  8b742408             mov esi, dword ptr [esp + 8]
// 004a9be0  8b16                 mov edx, dword ptr [esi]
// 004a9be2  3bc2                 cmp eax, edx
// 004a9be4  772c                 ja 0x4a9c12
// 004a9be6  750c                 jne 0x4a9bf4
// 004a9be8  57                   push edi
// 004a9be9  668b7904             mov di, word ptr [ecx + 4]
// 004a9bed  663b7e04             cmp di, word ptr [esi + 4]
// 004a9bf1  5f                   pop edi
// 004a9bf2  771e                 ja 0x4a9c12
// 004a9bf4  3bc2                 cmp eax, edx
// 004a9bf6  7514                 jne 0x4a9c0c
// 004a9bf8  668b4104             mov ax, word ptr [ecx + 4]
// 004a9bfc  663b4604             cmp ax, word ptr [esi + 4]
// 004a9c00  750a                 jne 0x4a9c0c
// 004a9c02  668b4908             mov cx, word ptr [ecx + 8]
// 004a9c06  663b4e08             cmp cx, word ptr [esi + 8]
// 004a9c0a  7706                 ja 0x4a9c12
// 004a9c0c  33c0                 xor eax, eax
// 004a9c0e  5e                   pop esi
// 004a9c0f  c20400               ret 4
// 004a9c12  b801000000           mov eax, 1
// 004a9c17  5e                   pop esi
// 004a9c18  c20400               ret 4
// 004a9c1b  8b442404             mov eax, dword ptr [esp + 4]
// 004a9c1f  668b5108             mov dx, word ptr [ecx + 8]
// 004a9c23  66395008             cmp word ptr [eax + 8], dx
// 004a9c27  1bc0                 sbb eax, eax
// 004a9c29  f7d8                 neg eax
// 004a9c2b  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??ONetworkID@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

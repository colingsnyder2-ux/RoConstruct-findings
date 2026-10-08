// roc 2008-06 004a99e0  unit: seg_004a0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a99e0
//
// 004a99e0  803d0810970000       cmp byte ptr [0x971008], 0
// 004a99e7  742b                 je 0x4a9a14
// 004a99e9  8b11                 mov edx, dword ptr [ecx]
// 004a99eb  8b442404             mov eax, dword ptr [esp + 4]
// 004a99ef  3b10                 cmp edx, dword ptr [eax]
// 004a99f1  751c                 jne 0x4a9a0f
// 004a99f3  668b5104             mov dx, word ptr [ecx + 4]
// 004a99f7  663b5004             cmp dx, word ptr [eax + 4]
// 004a99fb  7512                 jne 0x4a9a0f
// 004a99fd  668b4908             mov cx, word ptr [ecx + 8]
// 004a9a01  663b4808             cmp cx, word ptr [eax + 8]
// 004a9a05  7508                 jne 0x4a9a0f
// 004a9a07  b801000000           mov eax, 1
// 004a9a0c  c20400               ret 4
// 004a9a0f  33c0                 xor eax, eax
// 004a9a11  c20400               ret 4
// 004a9a14  668b5108             mov dx, word ptr [ecx + 8]
// 004a9a18  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a9a1c  33c0                 xor eax, eax
// 004a9a1e  663b5108             cmp dx, word ptr [ecx + 8]
// 004a9a22  0f94c0               sete al
// 004a9a25  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8NetworkID@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

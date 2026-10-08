// roc 2007-03 004a9b80  unit: seg_004a0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9b80
//
// 004a9b80  803d74918b0000       cmp byte ptr [0x8b9174], 0
// 004a9b87  742b                 je 0x4a9bb4
// 004a9b89  8b11                 mov edx, dword ptr [ecx]
// 004a9b8b  8b442404             mov eax, dword ptr [esp + 4]
// 004a9b8f  3b10                 cmp edx, dword ptr [eax]
// 004a9b91  751c                 jne 0x4a9baf
// 004a9b93  668b5104             mov dx, word ptr [ecx + 4]
// 004a9b97  663b5004             cmp dx, word ptr [eax + 4]
// 004a9b9b  7512                 jne 0x4a9baf
// 004a9b9d  668b4908             mov cx, word ptr [ecx + 8]
// 004a9ba1  663b4808             cmp cx, word ptr [eax + 8]
// 004a9ba5  7508                 jne 0x4a9baf
// 004a9ba7  b801000000           mov eax, 1
// 004a9bac  c20400               ret 4
// 004a9baf  33c0                 xor eax, eax
// 004a9bb1  c20400               ret 4
// 004a9bb4  668b5108             mov dx, word ptr [ecx + 8]
// 004a9bb8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a9bbc  33c0                 xor eax, eax
// 004a9bbe  663b5108             cmp dx, word ptr [ecx + 8]
// 004a9bc2  0f94c0               sete al
// 004a9bc5  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??8NetworkID@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp

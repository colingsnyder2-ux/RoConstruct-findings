// roc 2012-06 0065e410  unit: seg_00650000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065e410
//
// 0065e410  8d8294000000         lea eax, [edx + 0x94]
// 0065e416  b91e010000           mov ecx, 0x11e
// 0065e41b  56                   push esi
// 0065e41c  8d642400             lea esp, [esp]
// 0065e420  33f6                 xor esi, esi
// 0065e422  668930               mov word ptr [eax], si
// 0065e425  83c004               add eax, 4
// 0065e428  83e901               sub ecx, 1
// 0065e42b  75f3                 jne 0x65e420
// 0065e42d  8d8288090000         lea eax, [edx + 0x988]
// 0065e433  b91e000000           mov ecx, 0x1e
// 0065e438  33f6                 xor esi, esi
// 0065e43a  668930               mov word ptr [eax], si
// 0065e43d  83c004               add eax, 4
// 0065e440  83e901               sub ecx, 1
// 0065e443  75f3                 jne 0x65e438
// 0065e445  8d827c0a0000         lea eax, [edx + 0xa7c]
// 0065e44b  b913000000           mov ecx, 0x13
// 0065e450  33f6                 xor esi, esi
// 0065e452  668930               mov word ptr [eax], si
// 0065e455  83c004               add eax, 4
// 0065e458  83e901               sub ecx, 1
// 0065e45b  75f3                 jne 0x65e450
// 0065e45d  b801000000           mov eax, 1
// 0065e462  66898294040000       mov word ptr [edx + 0x494], ax
// 0065e469  33c0                 xor eax, eax
// 0065e46b  8982ac160000         mov dword ptr [edx + 0x16ac], eax
// 0065e471  8982a8160000         mov dword ptr [edx + 0x16a8], eax
// 0065e477  8982b0160000         mov dword ptr [edx + 0x16b0], eax
// 0065e47d  8982a0160000         mov dword ptr [edx + 0x16a0], eax
// 0065e483  5e                   pop esi
// 0065e484  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

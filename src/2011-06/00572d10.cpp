// roc 2011-06 00572d10  unit: seg_00570000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00572d10
//
// 00572d10  8d8294000000         lea eax, [edx + 0x94]
// 00572d16  b91e010000           mov ecx, 0x11e
// 00572d1b  56                   push esi
// 00572d1c  8d642400             lea esp, [esp]
// 00572d20  33f6                 xor esi, esi
// 00572d22  668930               mov word ptr [eax], si
// 00572d25  83c004               add eax, 4
// 00572d28  83e901               sub ecx, 1
// 00572d2b  75f3                 jne 0x572d20
// 00572d2d  8d8288090000         lea eax, [edx + 0x988]
// 00572d33  b91e000000           mov ecx, 0x1e
// 00572d38  33f6                 xor esi, esi
// 00572d3a  668930               mov word ptr [eax], si
// 00572d3d  83c004               add eax, 4
// 00572d40  83e901               sub ecx, 1
// 00572d43  75f3                 jne 0x572d38
// 00572d45  8d827c0a0000         lea eax, [edx + 0xa7c]
// 00572d4b  b913000000           mov ecx, 0x13
// 00572d50  33f6                 xor esi, esi
// 00572d52  668930               mov word ptr [eax], si
// 00572d55  83c004               add eax, 4
// 00572d58  83e901               sub ecx, 1
// 00572d5b  75f3                 jne 0x572d50
// 00572d5d  b801000000           mov eax, 1
// 00572d62  66898294040000       mov word ptr [edx + 0x494], ax
// 00572d69  33c0                 xor eax, eax
// 00572d6b  8982ac160000         mov dword ptr [edx + 0x16ac], eax
// 00572d71  8982a8160000         mov dword ptr [edx + 0x16a8], eax
// 00572d77  8982b0160000         mov dword ptr [edx + 0x16b0], eax
// 00572d7d  8982a0160000         mov dword ptr [edx + 0x16a0], eax
// 00572d83  5e                   pop esi
// 00572d84  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

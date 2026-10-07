// roc 2010-06 0057c220  unit: seg_00570000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057c220
//
// 0057c220  8d8294000000         lea eax, [edx + 0x94]
// 0057c226  b91e010000           mov ecx, 0x11e
// 0057c22b  56                   push esi
// 0057c22c  8d642400             lea esp, [esp]
// 0057c230  33f6                 xor esi, esi
// 0057c232  668930               mov word ptr [eax], si
// 0057c235  83c004               add eax, 4
// 0057c238  83e901               sub ecx, 1
// 0057c23b  75f3                 jne 0x57c230
// 0057c23d  8d8288090000         lea eax, [edx + 0x988]
// 0057c243  b91e000000           mov ecx, 0x1e
// 0057c248  33f6                 xor esi, esi
// 0057c24a  668930               mov word ptr [eax], si
// 0057c24d  83c004               add eax, 4
// 0057c250  83e901               sub ecx, 1
// 0057c253  75f3                 jne 0x57c248
// 0057c255  8d827c0a0000         lea eax, [edx + 0xa7c]
// 0057c25b  b913000000           mov ecx, 0x13
// 0057c260  33f6                 xor esi, esi
// 0057c262  668930               mov word ptr [eax], si
// 0057c265  83c004               add eax, 4
// 0057c268  83e901               sub ecx, 1
// 0057c26b  75f3                 jne 0x57c260
// 0057c26d  b801000000           mov eax, 1
// 0057c272  66898294040000       mov word ptr [edx + 0x494], ax
// 0057c279  33c0                 xor eax, eax
// 0057c27b  8982ac160000         mov dword ptr [edx + 0x16ac], eax
// 0057c281  8982a8160000         mov dword ptr [edx + 0x16a8], eax
// 0057c287  8982b0160000         mov dword ptr [edx + 0x16b0], eax
// 0057c28d  8982a0160000         mov dword ptr [edx + 0x16a0], eax
// 0057c293  5e                   pop esi
// 0057c294  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

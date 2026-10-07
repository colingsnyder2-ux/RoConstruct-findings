// roc 2008-06 007a4190  unit: CXTIconHandle  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a4190
//
// 007a4190  8d8294000000         lea eax, [edx + 0x94]
// 007a4196  b91e010000           mov ecx, 0x11e
// 007a419b  56                   push esi
// 007a419c  8d642400             lea esp, [esp]
// 007a41a0  33f6                 xor esi, esi
// 007a41a2  668930               mov word ptr [eax], si
// 007a41a5  83c004               add eax, 4
// 007a41a8  83e901               sub ecx, 1
// 007a41ab  75f3                 jne 0x7a41a0
// 007a41ad  8d8288090000         lea eax, [edx + 0x988]
// 007a41b3  b91e000000           mov ecx, 0x1e
// 007a41b8  33f6                 xor esi, esi
// 007a41ba  668930               mov word ptr [eax], si
// 007a41bd  83c004               add eax, 4
// 007a41c0  83e901               sub ecx, 1
// 007a41c3  75f3                 jne 0x7a41b8
// 007a41c5  8d827c0a0000         lea eax, [edx + 0xa7c]
// 007a41cb  b913000000           mov ecx, 0x13
// 007a41d0  33f6                 xor esi, esi
// 007a41d2  668930               mov word ptr [eax], si
// 007a41d5  83c004               add eax, 4
// 007a41d8  83e901               sub ecx, 1
// 007a41db  75f3                 jne 0x7a41d0
// 007a41dd  b801000000           mov eax, 1
// 007a41e2  66898294040000       mov word ptr [edx + 0x494], ax
// 007a41e9  33c0                 xor eax, eax
// 007a41eb  8982ac160000         mov dword ptr [edx + 0x16ac], eax
// 007a41f1  8982a8160000         mov dword ptr [edx + 0x16a8], eax
// 007a41f7  8982b0160000         mov dword ptr [edx + 0x16b0], eax
// 007a41fd  8982a0160000         mov dword ptr [edx + 0x16a0], eax
// 007a4203  5e                   pop esi
// 007a4204  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

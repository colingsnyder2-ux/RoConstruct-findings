// roc 2009-12 0061a6c0  unit: seg_00610000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a6c0
//
// 0061a6c0  8d8294000000         lea eax, [edx + 0x94]
// 0061a6c6  b91e010000           mov ecx, 0x11e
// 0061a6cb  56                   push esi
// 0061a6cc  8d642400             lea esp, [esp]
// 0061a6d0  33f6                 xor esi, esi
// 0061a6d2  668930               mov word ptr [eax], si
// 0061a6d5  83c004               add eax, 4
// 0061a6d8  83e901               sub ecx, 1
// 0061a6db  75f3                 jne 0x61a6d0
// 0061a6dd  8d8288090000         lea eax, [edx + 0x988]
// 0061a6e3  b91e000000           mov ecx, 0x1e
// 0061a6e8  33f6                 xor esi, esi
// 0061a6ea  668930               mov word ptr [eax], si
// 0061a6ed  83c004               add eax, 4
// 0061a6f0  83e901               sub ecx, 1
// 0061a6f3  75f3                 jne 0x61a6e8
// 0061a6f5  8d827c0a0000         lea eax, [edx + 0xa7c]
// 0061a6fb  b913000000           mov ecx, 0x13
// 0061a700  33f6                 xor esi, esi
// 0061a702  668930               mov word ptr [eax], si
// 0061a705  83c004               add eax, 4
// 0061a708  83e901               sub ecx, 1
// 0061a70b  75f3                 jne 0x61a700
// 0061a70d  b801000000           mov eax, 1
// 0061a712  66898294040000       mov word ptr [edx + 0x494], ax
// 0061a719  33c0                 xor eax, eax
// 0061a71b  8982ac160000         mov dword ptr [edx + 0x16ac], eax
// 0061a721  8982a8160000         mov dword ptr [edx + 0x16a8], eax
// 0061a727  8982b0160000         mov dword ptr [edx + 0x16b0], eax
// 0061a72d  8982a0160000         mov dword ptr [edx + 0x16a0], eax
// 0061a733  5e                   pop esi
// 0061a734  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

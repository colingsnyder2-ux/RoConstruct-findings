// from server: 100% by auto
// roc 2009-06 00598690  unit: seg_00590000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598690
//
// 00598690  8d8294000000         lea eax, [edx + 0x94]
// 00598696  b91e010000           mov ecx, 0x11e
// 0059869b  56                   push esi
// 0059869c  8d642400             lea esp, [esp]
// 005986a0  33f6                 xor esi, esi
// 005986a2  668930               mov word ptr [eax], si
// 005986a5  83c004               add eax, 4
// 005986a8  83e901               sub ecx, 1
// 005986ab  75f3                 jne 0x5986a0
// 005986ad  8d8288090000         lea eax, [edx + 0x988]
// 005986b3  b91e000000           mov ecx, 0x1e
// 005986b8  33f6                 xor esi, esi
// 005986ba  668930               mov word ptr [eax], si
// 005986bd  83c004               add eax, 4
// 005986c0  83e901               sub ecx, 1
// 005986c3  75f3                 jne 0x5986b8
// 005986c5  8d827c0a0000         lea eax, [edx + 0xa7c]
// 005986cb  b913000000           mov ecx, 0x13
// 005986d0  33f6                 xor esi, esi
// 005986d2  668930               mov word ptr [eax], si
// 005986d5  83c004               add eax, 4
// 005986d8  83e901               sub ecx, 1
// 005986db  75f3                 jne 0x5986d0
// 005986dd  b801000000           mov eax, 1
// 005986e2  66898294040000       mov word ptr [edx + 0x494], ax
// 005986e9  33c0                 xor eax, eax
// 005986eb  8982ac160000         mov dword ptr [edx + 0x16ac], eax
// 005986f1  8982a8160000         mov dword ptr [edx + 0x16a8], eax
// 005986f7  8982b0160000         mov dword ptr [edx + 0x16b0], eax
// 005986fd  8982a0160000         mov dword ptr [edx + 0x16a0], eax
// 00598703  5e                   pop esi
// 00598704  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

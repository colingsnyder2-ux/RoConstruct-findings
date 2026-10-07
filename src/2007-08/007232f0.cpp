// roc 2007-08 007232f0  unit: CXTIconHandle  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007232f0
//
// 007232f0  56                   push esi
// 007232f1  8d8294000000         lea eax, [edx + 0x94]
// 007232f7  b91e010000           mov ecx, 0x11e
// 007232fc  33f6                 xor esi, esi
// 007232fe  8bff                 mov edi, edi
// 00723300  668930               mov word ptr [eax], si
// 00723303  83c004               add eax, 4
// 00723306  83e901               sub ecx, 1
// 00723309  75f5                 jne 0x723300
// 0072330b  8d8288090000         lea eax, [edx + 0x988]
// 00723311  b91e000000           mov ecx, 0x1e
// 00723316  668930               mov word ptr [eax], si
// 00723319  83c004               add eax, 4
// 0072331c  83e901               sub ecx, 1
// 0072331f  75f5                 jne 0x723316
// 00723321  8d827c0a0000         lea eax, [edx + 0xa7c]
// 00723327  b913000000           mov ecx, 0x13
// 0072332c  8d642400             lea esp, [esp]
// 00723330  668930               mov word ptr [eax], si
// 00723333  83c004               add eax, 4
// 00723336  83e901               sub ecx, 1
// 00723339  75f5                 jne 0x723330
// 0072333b  89b2ac160000         mov dword ptr [edx + 0x16ac], esi
// 00723341  89b2a8160000         mov dword ptr [edx + 0x16a8], esi
// 00723347  89b2b0160000         mov dword ptr [edx + 0x16b0], esi
// 0072334d  89b2a0160000         mov dword ptr [edx + 0x16a0], esi
// 00723353  66c782940400000100   mov word ptr [edx + 0x494], 1
// 0072335c  5e                   pop esi
// 0072335d  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

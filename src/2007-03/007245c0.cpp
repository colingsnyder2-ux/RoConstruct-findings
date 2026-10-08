// roc 2007-03 007245c0  unit: seg_00720000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007245c0
//
// 007245c0  56                   push esi
// 007245c1  8d8294000000         lea eax, [edx + 0x94]
// 007245c7  b91e010000           mov ecx, 0x11e
// 007245cc  33f6                 xor esi, esi
// 007245ce  8bff                 mov edi, edi
// 007245d0  668930               mov word ptr [eax], si
// 007245d3  83c004               add eax, 4
// 007245d6  83e901               sub ecx, 1
// 007245d9  75f5                 jne 0x7245d0
// 007245db  8d8288090000         lea eax, [edx + 0x988]
// 007245e1  b91e000000           mov ecx, 0x1e
// 007245e6  668930               mov word ptr [eax], si
// 007245e9  83c004               add eax, 4
// 007245ec  83e901               sub ecx, 1
// 007245ef  75f5                 jne 0x7245e6
// 007245f1  8d827c0a0000         lea eax, [edx + 0xa7c]
// 007245f7  b913000000           mov ecx, 0x13
// 007245fc  8d642400             lea esp, [esp]
// 00724600  668930               mov word ptr [eax], si
// 00724603  83c004               add eax, 4
// 00724606  83e901               sub ecx, 1
// 00724609  75f5                 jne 0x724600
// 0072460b  89b2ac160000         mov dword ptr [edx + 0x16ac], esi
// 00724611  89b2a8160000         mov dword ptr [edx + 0x16a8], esi
// 00724617  89b2b0160000         mov dword ptr [edx + 0x16b0], esi
// 0072461d  89b2a0160000         mov dword ptr [edx + 0x16a0], esi
// 00724623  66c782940400000100   mov word ptr [edx + 0x494], 1
// 0072462c  5e                   pop esi
// 0072462d  c3                   ret 
// library zlib-1.2.3/trees.c (function _init_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

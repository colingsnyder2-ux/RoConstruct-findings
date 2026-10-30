// roc 2007-03 00526820  unit: seg_00520000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526820
//
// 00526820  6a7f                 push 0x7f
// 00526822  b807000000           mov eax, 7
// 00526827  8bce                 mov ecx, esi
// 00526829  e842ffffff           call 0x526770
// 0052682e  83c404               add esp, 4
// 00526831  84c0                 test al, al
// 00526833  7501                 jne 0x526836
// 00526835  c3                   ret 
// 00526836  33c0                 xor eax, eax
// 00526838  894608               mov dword ptr [esi + 8], eax
// 0052683b  89460c               mov dword ptr [esi + 0xc], eax
// 0052683e  b001                 mov al, 1
// 00526840  c3                   ret 
// library jpeg-6b/jchuff.c (function _flush_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jchuff.c

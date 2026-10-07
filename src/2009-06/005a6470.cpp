// roc 2009-06 005a6470  unit: seg_005a0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a6470
//
// 005a6470  56                   push esi
// 005a6471  57                   push edi
// 005a6472  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a6476  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 005a647c  8b4808               mov ecx, dword ptr [eax + 8]
// 005a647f  8bb73c010000         mov esi, dword ptr [edi + 0x13c]
// 005a6485  57                   push edi
// 005a6486  ffd1                 call ecx
// 005a6488  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a648b  83c404               add esp, 4
// 005a648e  83e800               sub eax, 0
// 005a6491  b901000000           mov ecx, 1
// 005a6496  7429                 je 0x5a64c1
// 005a6498  2bc1                 sub eax, ecx
// 005a649a  7418                 je 0x5a64b4
// 005a649c  2bc1                 sub eax, ecx
// 005a649e  7534                 jne 0x5a64d4
// 005a64a0  3887b2000000         cmp byte ptr [edi + 0xb2], al
// 005a64a6  7429                 je 0x5a64d1
// 005a64a8  014e1c               add dword ptr [esi + 0x1c], ecx
// 005a64ab  014e14               add dword ptr [esi + 0x14], ecx
// 005a64ae  5f                   pop edi
// 005a64af  894e10               mov dword ptr [esi + 0x10], ecx
// 005a64b2  5e                   pop esi
// 005a64b3  c3                   ret 
// 005a64b4  014e14               add dword ptr [esi + 0x14], ecx
// 005a64b7  5f                   pop edi
// 005a64b8  c7461002000000       mov dword ptr [esi + 0x10], 2
// 005a64bf  5e                   pop esi
// 005a64c0  c3                   ret 
// 005a64c1  c7461002000000       mov dword ptr [esi + 0x10], 2
// 005a64c8  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 005a64cf  7503                 jne 0x5a64d4
// 005a64d1  014e1c               add dword ptr [esi + 0x1c], ecx
// 005a64d4  014e14               add dword ptr [esi + 0x14], ecx
// 005a64d7  5f                   pop edi
// 005a64d8  5e                   pop esi
// 005a64d9  c3                   ret 
// library jpeg-6b/jcmaster.c (function _finish_pass_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c

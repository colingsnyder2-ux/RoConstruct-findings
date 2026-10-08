// from server: 100% by auto
// roc 2008-06 0053c190  unit: seg_00530000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053c190
//
// 0053c190  56                   push esi
// 0053c191  57                   push edi
// 0053c192  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0053c196  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0053c19c  8b4808               mov ecx, dword ptr [eax + 8]
// 0053c19f  8bb73c010000         mov esi, dword ptr [edi + 0x13c]
// 0053c1a5  57                   push edi
// 0053c1a6  ffd1                 call ecx
// 0053c1a8  8b4610               mov eax, dword ptr [esi + 0x10]
// 0053c1ab  83c404               add esp, 4
// 0053c1ae  83e800               sub eax, 0
// 0053c1b1  b901000000           mov ecx, 1
// 0053c1b6  7429                 je 0x53c1e1
// 0053c1b8  2bc1                 sub eax, ecx
// 0053c1ba  7418                 je 0x53c1d4
// 0053c1bc  2bc1                 sub eax, ecx
// 0053c1be  7534                 jne 0x53c1f4
// 0053c1c0  3887b2000000         cmp byte ptr [edi + 0xb2], al
// 0053c1c6  7429                 je 0x53c1f1
// 0053c1c8  014e1c               add dword ptr [esi + 0x1c], ecx
// 0053c1cb  014e14               add dword ptr [esi + 0x14], ecx
// 0053c1ce  5f                   pop edi
// 0053c1cf  894e10               mov dword ptr [esi + 0x10], ecx
// 0053c1d2  5e                   pop esi
// 0053c1d3  c3                   ret 
// 0053c1d4  014e14               add dword ptr [esi + 0x14], ecx
// 0053c1d7  5f                   pop edi
// 0053c1d8  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0053c1df  5e                   pop esi
// 0053c1e0  c3                   ret 
// 0053c1e1  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0053c1e8  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 0053c1ef  7503                 jne 0x53c1f4
// 0053c1f1  014e1c               add dword ptr [esi + 0x1c], ecx
// 0053c1f4  014e14               add dword ptr [esi + 0x14], ecx
// 0053c1f7  5f                   pop edi
// 0053c1f8  5e                   pop esi
// 0053c1f9  c3                   ret 
// library jpeg-6b/jcmaster.c (function _finish_pass_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c

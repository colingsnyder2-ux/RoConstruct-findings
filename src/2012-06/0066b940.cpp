// from server: 100% by auto
// roc 2012-06 0066b940  unit: seg_00660000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066b940
//
// 0066b940  56                   push esi
// 0066b941  57                   push edi
// 0066b942  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066b946  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0066b94c  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b94f  8bb73c010000         mov esi, dword ptr [edi + 0x13c]
// 0066b955  57                   push edi
// 0066b956  ffd1                 call ecx
// 0066b958  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066b95b  83c404               add esp, 4
// 0066b95e  83e800               sub eax, 0
// 0066b961  b901000000           mov ecx, 1
// 0066b966  7429                 je 0x66b991
// 0066b968  2bc1                 sub eax, ecx
// 0066b96a  7418                 je 0x66b984
// 0066b96c  2bc1                 sub eax, ecx
// 0066b96e  7534                 jne 0x66b9a4
// 0066b970  3887b2000000         cmp byte ptr [edi + 0xb2], al
// 0066b976  7429                 je 0x66b9a1
// 0066b978  014e1c               add dword ptr [esi + 0x1c], ecx
// 0066b97b  014e14               add dword ptr [esi + 0x14], ecx
// 0066b97e  5f                   pop edi
// 0066b97f  894e10               mov dword ptr [esi + 0x10], ecx
// 0066b982  5e                   pop esi
// 0066b983  c3                   ret 
// 0066b984  014e14               add dword ptr [esi + 0x14], ecx
// 0066b987  5f                   pop edi
// 0066b988  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0066b98f  5e                   pop esi
// 0066b990  c3                   ret 
// 0066b991  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0066b998  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 0066b99f  7503                 jne 0x66b9a4
// 0066b9a1  014e1c               add dword ptr [esi + 0x1c], ecx
// 0066b9a4  014e14               add dword ptr [esi + 0x14], ecx
// 0066b9a7  5f                   pop edi
// 0066b9a8  5e                   pop esi
// 0066b9a9  c3                   ret 
// library jpeg-6b/jcmaster.c (function _finish_pass_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c

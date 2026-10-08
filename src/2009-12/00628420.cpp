// roc 2009-12 00628420  unit: seg_00620000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00628420
//
// 00628420  56                   push esi
// 00628421  57                   push edi
// 00628422  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00628426  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0062842c  8b4808               mov ecx, dword ptr [eax + 8]
// 0062842f  8bb73c010000         mov esi, dword ptr [edi + 0x13c]
// 00628435  57                   push edi
// 00628436  ffd1                 call ecx
// 00628438  8b4610               mov eax, dword ptr [esi + 0x10]
// 0062843b  83c404               add esp, 4
// 0062843e  83e800               sub eax, 0
// 00628441  b901000000           mov ecx, 1
// 00628446  7429                 je 0x628471
// 00628448  2bc1                 sub eax, ecx
// 0062844a  7418                 je 0x628464
// 0062844c  2bc1                 sub eax, ecx
// 0062844e  7534                 jne 0x628484
// 00628450  3887b2000000         cmp byte ptr [edi + 0xb2], al
// 00628456  7429                 je 0x628481
// 00628458  014e1c               add dword ptr [esi + 0x1c], ecx
// 0062845b  014e14               add dword ptr [esi + 0x14], ecx
// 0062845e  5f                   pop edi
// 0062845f  894e10               mov dword ptr [esi + 0x10], ecx
// 00628462  5e                   pop esi
// 00628463  c3                   ret 
// 00628464  014e14               add dword ptr [esi + 0x14], ecx
// 00628467  5f                   pop edi
// 00628468  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0062846f  5e                   pop esi
// 00628470  c3                   ret 
// 00628471  c7461002000000       mov dword ptr [esi + 0x10], 2
// 00628478  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 0062847f  7503                 jne 0x628484
// 00628481  014e1c               add dword ptr [esi + 0x1c], ecx
// 00628484  014e14               add dword ptr [esi + 0x14], ecx
// 00628487  5f                   pop edi
// 00628488  5e                   pop esi
// 00628489  c3                   ret 
// library jpeg-6b/jcmaster.c (function _finish_pass_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c

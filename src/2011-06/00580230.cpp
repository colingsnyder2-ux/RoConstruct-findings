// roc 2011-06 00580230  unit: seg_00580000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00580230
//
// 00580230  56                   push esi
// 00580231  57                   push edi
// 00580232  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00580236  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0058023c  8b4808               mov ecx, dword ptr [eax + 8]
// 0058023f  8bb73c010000         mov esi, dword ptr [edi + 0x13c]
// 00580245  57                   push edi
// 00580246  ffd1                 call ecx
// 00580248  8b4610               mov eax, dword ptr [esi + 0x10]
// 0058024b  83c404               add esp, 4
// 0058024e  83e800               sub eax, 0
// 00580251  b901000000           mov ecx, 1
// 00580256  7429                 je 0x580281
// 00580258  2bc1                 sub eax, ecx
// 0058025a  7418                 je 0x580274
// 0058025c  2bc1                 sub eax, ecx
// 0058025e  7534                 jne 0x580294
// 00580260  3887b2000000         cmp byte ptr [edi + 0xb2], al
// 00580266  7429                 je 0x580291
// 00580268  014e1c               add dword ptr [esi + 0x1c], ecx
// 0058026b  014e14               add dword ptr [esi + 0x14], ecx
// 0058026e  5f                   pop edi
// 0058026f  894e10               mov dword ptr [esi + 0x10], ecx
// 00580272  5e                   pop esi
// 00580273  c3                   ret 
// 00580274  014e14               add dword ptr [esi + 0x14], ecx
// 00580277  5f                   pop edi
// 00580278  c7461002000000       mov dword ptr [esi + 0x10], 2
// 0058027f  5e                   pop esi
// 00580280  c3                   ret 
// 00580281  c7461002000000       mov dword ptr [esi + 0x10], 2
// 00580288  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 0058028f  7503                 jne 0x580294
// 00580291  014e1c               add dword ptr [esi + 0x1c], ecx
// 00580294  014e14               add dword ptr [esi + 0x14], ecx
// 00580297  5f                   pop edi
// 00580298  5e                   pop esi
// 00580299  c3                   ret 
// library jpeg-6b/jcmaster.c (function _finish_pass_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c

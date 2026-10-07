// roc 2010-06 00589f80  unit: seg_00580000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589f80
//
// 00589f80  56                   push esi
// 00589f81  57                   push edi
// 00589f82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00589f86  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 00589f8c  8b4808               mov ecx, dword ptr [eax + 8]
// 00589f8f  8bb73c010000         mov esi, dword ptr [edi + 0x13c]
// 00589f95  57                   push edi
// 00589f96  ffd1                 call ecx
// 00589f98  8b4610               mov eax, dword ptr [esi + 0x10]
// 00589f9b  83c404               add esp, 4
// 00589f9e  83e800               sub eax, 0
// 00589fa1  b901000000           mov ecx, 1
// 00589fa6  7429                 je 0x589fd1
// 00589fa8  2bc1                 sub eax, ecx
// 00589faa  7418                 je 0x589fc4
// 00589fac  2bc1                 sub eax, ecx
// 00589fae  7534                 jne 0x589fe4
// 00589fb0  3887b2000000         cmp byte ptr [edi + 0xb2], al
// 00589fb6  7429                 je 0x589fe1
// 00589fb8  014e1c               add dword ptr [esi + 0x1c], ecx
// 00589fbb  014e14               add dword ptr [esi + 0x14], ecx
// 00589fbe  5f                   pop edi
// 00589fbf  894e10               mov dword ptr [esi + 0x10], ecx
// 00589fc2  5e                   pop esi
// 00589fc3  c3                   ret 
// 00589fc4  014e14               add dword ptr [esi + 0x14], ecx
// 00589fc7  5f                   pop edi
// 00589fc8  c7461002000000       mov dword ptr [esi + 0x10], 2
// 00589fcf  5e                   pop esi
// 00589fd0  c3                   ret 
// 00589fd1  c7461002000000       mov dword ptr [esi + 0x10], 2
// 00589fd8  80bfb200000000       cmp byte ptr [edi + 0xb2], 0
// 00589fdf  7503                 jne 0x589fe4
// 00589fe1  014e1c               add dword ptr [esi + 0x1c], ecx
// 00589fe4  014e14               add dword ptr [esi + 0x14], ecx
// 00589fe7  5f                   pop edi
// 00589fe8  5e                   pop esi
// 00589fe9  c3                   ret 
// library jpeg-6b/jcmaster.c (function _finish_pass_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c

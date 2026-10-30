// from server: 100% by auto
// roc 2008-06 00537720  unit: seg_00530000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537720
//
// 00537720  8b442404             mov eax, dword ptr [esp + 4]
// 00537724  56                   push esi
// 00537725  8bb048010000         mov esi, dword ptr [eax + 0x148]
// 0053772b  c7460800000000       mov dword ptr [esi + 8], 0
// 00537732  8b8848010000         mov ecx, dword ptr [eax + 0x148]
// 00537738  ba01000000           mov edx, 1
// 0053773d  3990e4000000         cmp dword ptr [eax + 0xe4], edx
// 00537743  7e05                 jle 0x53774a
// 00537745  895114               mov dword ptr [ecx + 0x14], edx
// 00537748  eb20                 jmp 0x53776a
// 0053774a  53                   push ebx
// 0053774b  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 00537751  2bda                 sub ebx, edx
// 00537753  395908               cmp dword ptr [ecx + 8], ebx
// 00537756  8b98e8000000         mov ebx, dword ptr [eax + 0xe8]
// 0053775c  7305                 jae 0x537763
// 0053775e  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 00537761  eb03                 jmp 0x537766
// 00537763  8b5b48               mov ebx, dword ptr [ebx + 0x48]
// 00537766  895914               mov dword ptr [ecx + 0x14], ebx
// 00537769  5b                   pop ebx
// 0053776a  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 00537771  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 00537778  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053777c  83e900               sub ecx, 0
// 0053777f  7462                 je 0x5377e3
// 00537781  83e902               sub ecx, 2
// 00537784  743b                 je 0x5377c1
// 00537786  2bca                 sub ecx, edx
// 00537788  7415                 je 0x53779f
// 0053778a  8b08                 mov ecx, dword ptr [eax]
// 0053778c  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00537793  8b10                 mov edx, dword ptr [eax]
// 00537795  50                   push eax
// 00537796  8b02                 mov eax, dword ptr [edx]
// 00537798  ffd0                 call eax
// 0053779a  83c404               add esp, 4
// 0053779d  5e                   pop esi
// 0053779e  c3                   ret 
// 0053779f  837e4000             cmp dword ptr [esi + 0x40], 0
// 005377a3  7513                 jne 0x5377b8
// 005377a5  8b08                 mov ecx, dword ptr [eax]
// 005377a7  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005377ae  8b10                 mov edx, dword ptr [eax]
// 005377b0  50                   push eax
// 005377b1  8b02                 mov eax, dword ptr [edx]
// 005377b3  ffd0                 call eax
// 005377b5  83c404               add esp, 4
// 005377b8  c7460410755300       mov dword ptr [esi + 4], 0x537510
// 005377bf  5e                   pop esi
// 005377c0  c3                   ret 
// 005377c1  837e4000             cmp dword ptr [esi + 0x40], 0
// 005377c5  7513                 jne 0x5377da
// 005377c7  8b08                 mov ecx, dword ptr [eax]
// 005377c9  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005377d0  8b10                 mov edx, dword ptr [eax]
// 005377d2  50                   push eax
// 005377d3  8b02                 mov eax, dword ptr [edx]
// 005377d5  ffd0                 call eax
// 005377d7  83c404               add esp, 4
// 005377da  c7460420735300       mov dword ptr [esi + 4], 0x537320
// 005377e1  5e                   pop esi
// 005377e2  c3                   ret 
// 005377e3  837e4000             cmp dword ptr [esi + 0x40], 0
// 005377e7  7413                 je 0x5377fc
// 005377e9  8b08                 mov ecx, dword ptr [eax]
// 005377eb  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005377f2  8b10                 mov edx, dword ptr [eax]
// 005377f4  50                   push eax
// 005377f5  8b02                 mov eax, dword ptr [edx]
// 005377f7  ffd0                 call eax
// 005377f9  83c404               add esp, 4
// 005377fc  c7460490705300       mov dword ptr [esi + 4], 0x537090
// 00537803  5e                   pop esi
// 00537804  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_pass_coef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c

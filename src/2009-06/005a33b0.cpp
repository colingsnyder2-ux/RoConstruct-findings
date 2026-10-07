// roc 2009-06 005a33b0  unit: seg_005a0000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a33b0
//
// 005a33b0  83ec10               sub esp, 0x10
// 005a33b3  56                   push esi
// 005a33b4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a33b8  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 005a33be  89442410             mov dword ptr [esp + 0x10], eax
// 005a33c2  e8d9f7ffff           call 0x5a2ba0
// 005a33c7  33c0                 xor eax, eax
// 005a33c9  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 005a33cf  8944240c             mov dword ptr [esp + 0xc], eax
// 005a33d3  0f94c1               sete cl
// 005a33d6  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 005a33dc  884c2418             mov byte ptr [esp + 0x18], cl
// 005a33e0  89442408             mov dword ptr [esp + 8], eax
// 005a33e4  0f8e84000000         jle 0x5a346e
// 005a33ea  53                   push ebx
// 005a33eb  8d86e8000000         lea eax, [esi + 0xe8]
// 005a33f1  55                   push ebp
// 005a33f2  8944240c             mov dword ptr [esp + 0xc], eax
// 005a33f6  57                   push edi
// 005a33f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a33fb  8b02                 mov eax, dword ptr [edx]
// 005a33fd  84c9                 test cl, cl
// 005a33ff  740e                 je 0x5a340f
// 005a3401  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 005a3408  754b                 jne 0x5a3455
// 005a340a  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005a340d  eb03                 jmp 0x5a3412
// 005a340f  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005a3412  807c2c1800           cmp byte ptr [esp + ebp + 0x18], 0
// 005a3417  8d5c2c18             lea ebx, [esp + ebp + 0x18]
// 005a341b  7538                 jne 0x5a3455
// 005a341d  8d7cae58             lea edi, [esi + ebp*4 + 0x58]
// 005a3421  84c9                 test cl, cl
// 005a3423  7504                 jne 0x5a3429
// 005a3425  8d7cae68             lea edi, [esi + ebp*4 + 0x68]
// 005a3429  833f00               cmp dword ptr [edi], 0
// 005a342c  750b                 jne 0x5a3439
// 005a342e  56                   push esi
// 005a342f  e86cbcfdff           call 0x57f0a0
// 005a3434  83c404               add esp, 4
// 005a3437  8907                 mov dword ptr [edi], eax
// 005a3439  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a343d  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 005a3441  8b17                 mov edx, dword ptr [edi]
// 005a3443  51                   push ecx
// 005a3444  52                   push edx
// 005a3445  56                   push esi
// 005a3446  e895f0ffff           call 0x5a24e0
// 005a344b  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 005a344f  83c40c               add esp, 0xc
// 005a3452  c60301               mov byte ptr [ebx], 1
// 005a3455  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a3459  8344241004           add dword ptr [esp + 0x10], 4
// 005a345e  40                   inc eax
// 005a345f  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005a3465  89442414             mov dword ptr [esp + 0x14], eax
// 005a3469  7c8c                 jl 0x5a33f7
// 005a346b  5f                   pop edi
// 005a346c  5d                   pop ebp
// 005a346d  5b                   pop ebx
// 005a346e  5e                   pop esi
// 005a346f  83c410               add esp, 0x10
// 005a3472  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_gather_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c

// roc 2009-12 006253e0  unit: seg_00620000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006253e0
//
// 006253e0  83ec10               sub esp, 0x10
// 006253e3  56                   push esi
// 006253e4  8b742418             mov esi, dword ptr [esp + 0x18]
// 006253e8  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 006253ee  89442410             mov dword ptr [esp + 0x10], eax
// 006253f2  e8d9f7ffff           call 0x624bd0
// 006253f7  33c0                 xor eax, eax
// 006253f9  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 006253ff  8944240c             mov dword ptr [esp + 0xc], eax
// 00625403  0f94c1               sete cl
// 00625406  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0062540c  884c2418             mov byte ptr [esp + 0x18], cl
// 00625410  89442408             mov dword ptr [esp + 8], eax
// 00625414  0f8e84000000         jle 0x62549e
// 0062541a  53                   push ebx
// 0062541b  8d86e8000000         lea eax, [esi + 0xe8]
// 00625421  55                   push ebp
// 00625422  8944240c             mov dword ptr [esp + 0xc], eax
// 00625426  57                   push edi
// 00625427  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062542b  8b02                 mov eax, dword ptr [edx]
// 0062542d  84c9                 test cl, cl
// 0062542f  740e                 je 0x62543f
// 00625431  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 00625438  754b                 jne 0x625485
// 0062543a  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0062543d  eb03                 jmp 0x625442
// 0062543f  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00625442  807c2c1800           cmp byte ptr [esp + ebp + 0x18], 0
// 00625447  8d5c2c18             lea ebx, [esp + ebp + 0x18]
// 0062544b  7538                 jne 0x625485
// 0062544d  8d7cae58             lea edi, [esi + ebp*4 + 0x58]
// 00625451  84c9                 test cl, cl
// 00625453  7504                 jne 0x625459
// 00625455  8d7cae68             lea edi, [esi + ebp*4 + 0x68]
// 00625459  833f00               cmp dword ptr [edi], 0
// 0062545c  750b                 jne 0x625469
// 0062545e  56                   push esi
// 0062545f  e81cbafdff           call 0x600e80
// 00625464  83c404               add esp, 4
// 00625467  8907                 mov dword ptr [edi], eax
// 00625469  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062546d  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 00625471  8b17                 mov edx, dword ptr [edi]
// 00625473  51                   push ecx
// 00625474  52                   push edx
// 00625475  56                   push esi
// 00625476  e895f0ffff           call 0x624510
// 0062547b  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 0062547f  83c40c               add esp, 0xc
// 00625482  c60301               mov byte ptr [ebx], 1
// 00625485  8b442414             mov eax, dword ptr [esp + 0x14]
// 00625489  8344241004           add dword ptr [esp + 0x10], 4
// 0062548e  40                   inc eax
// 0062548f  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00625495  89442414             mov dword ptr [esp + 0x14], eax
// 00625499  7c8c                 jl 0x625427
// 0062549b  5f                   pop edi
// 0062549c  5d                   pop ebp
// 0062549d  5b                   pop ebx
// 0062549e  5e                   pop esi
// 0062549f  83c410               add esp, 0x10
// 006254a2  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_gather_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c

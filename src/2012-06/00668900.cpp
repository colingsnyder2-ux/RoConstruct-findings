// from server: 100% by auto
// roc 2012-06 00668900  unit: seg_00660000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00668900
//
// 00668900  83ec10               sub esp, 0x10
// 00668903  56                   push esi
// 00668904  8b742418             mov esi, dword ptr [esp + 0x18]
// 00668908  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0066890e  89442410             mov dword ptr [esp + 0x10], eax
// 00668912  e8d9f7ffff           call 0x6680f0
// 00668917  33c0                 xor eax, eax
// 00668919  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 0066891f  8944240c             mov dword ptr [esp + 0xc], eax
// 00668923  0f94c1               sete cl
// 00668926  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0066892c  884c2418             mov byte ptr [esp + 0x18], cl
// 00668930  89442408             mov dword ptr [esp + 8], eax
// 00668934  0f8e84000000         jle 0x6689be
// 0066893a  53                   push ebx
// 0066893b  8d86e8000000         lea eax, [esi + 0xe8]
// 00668941  55                   push ebp
// 00668942  8944240c             mov dword ptr [esp + 0xc], eax
// 00668946  57                   push edi
// 00668947  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066894b  8b02                 mov eax, dword ptr [edx]
// 0066894d  84c9                 test cl, cl
// 0066894f  740e                 je 0x66895f
// 00668951  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 00668958  754b                 jne 0x6689a5
// 0066895a  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0066895d  eb03                 jmp 0x668962
// 0066895f  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00668962  807c2c1800           cmp byte ptr [esp + ebp + 0x18], 0
// 00668967  8d5c2c18             lea ebx, [esp + ebp + 0x18]
// 0066896b  7538                 jne 0x6689a5
// 0066896d  8d7cae58             lea edi, [esi + ebp*4 + 0x58]
// 00668971  84c9                 test cl, cl
// 00668973  7504                 jne 0x668979
// 00668975  8d7cae68             lea edi, [esi + ebp*4 + 0x68]
// 00668979  833f00               cmp dword ptr [edi], 0
// 0066897c  750b                 jne 0x668989
// 0066897e  56                   push esi
// 0066897f  e80cabfeff           call 0x653490
// 00668984  83c404               add esp, 4
// 00668987  8907                 mov dword ptr [edi], eax
// 00668989  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066898d  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 00668991  8b17                 mov edx, dword ptr [edi]
// 00668993  51                   push ecx
// 00668994  52                   push edx
// 00668995  56                   push esi
// 00668996  e895f0ffff           call 0x667a30
// 0066899b  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 0066899f  83c40c               add esp, 0xc
// 006689a2  c60301               mov byte ptr [ebx], 1
// 006689a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 006689a9  8344241004           add dword ptr [esp + 0x10], 4
// 006689ae  40                   inc eax
// 006689af  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 006689b5  89442414             mov dword ptr [esp + 0x14], eax
// 006689b9  7c8c                 jl 0x668947
// 006689bb  5f                   pop edi
// 006689bc  5d                   pop ebp
// 006689bd  5b                   pop ebx
// 006689be  5e                   pop esi
// 006689bf  83c410               add esp, 0x10
// 006689c2  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_gather_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c

// roc 2011-06 0046d430  unit: CRobloxControlColorSelector  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d430
//
// 0046d430  55                   push ebp
// 0046d431  8bec                 mov ebp, esp
// 0046d433  6aff                 push -1
// 0046d435  6841389d00           push 0x9d3841
// 0046d43a  64a100000000         mov eax, dword ptr fs:[0]
// 0046d440  50                   push eax
// 0046d441  64892500000000       mov dword ptr fs:[0], esp
// 0046d448  83ec0c               sub esp, 0xc
// 0046d44b  53                   push ebx
// 0046d44c  56                   push esi
// 0046d44d  8b7508               mov esi, dword ptr [ebp + 8]
// 0046d450  57                   push edi
// 0046d451  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0046d454  33db                 xor ebx, ebx
// 0046d456  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046d459  8975ec               mov dword ptr [ebp - 0x14], esi
// 0046d45c  895dfc               mov dword ptr [ebp - 4], ebx
// 0046d45f  90                   nop 
// 0046d460  3bfb                 cmp edi, ebx
// 0046d462  7657                 jbe 0x46d4bb
// 0046d464  89750c               mov dword ptr [ebp + 0xc], esi
// 0046d467  8975e8               mov dword ptr [ebp - 0x18], esi
// 0046d46a  c645fc01             mov byte ptr [ebp - 4], 1
// 0046d46e  3bf3                 cmp esi, ebx
// 0046d470  741a                 je 0x46d48c
// 0046d472  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0046d475  8b08                 mov ecx, dword ptr [eax]
// 0046d477  890e                 mov dword ptr [esi], ecx
// 0046d479  8b5004               mov edx, dword ptr [eax + 4]
// 0046d47c  83c008               add eax, 8
// 0046d47f  50                   push eax
// 0046d480  8d4e08               lea ecx, [esi + 8]
// 0046d483  895604               mov dword ptr [esi + 4], edx
// 0046d486  ff15e42da400         call dword ptr [0xa42de4]
// 0046d48c  4f                   dec edi
// 0046d48d  83c60c               add esi, 0xc
// 0046d490  885dfc               mov byte ptr [ebp - 4], bl
// 0046d493  897508               mov dword ptr [ebp + 8], esi
// 0046d496  ebc8                 jmp 0x46d460
// 0046d498  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0046d49b  8b7d08               mov edi, dword ptr [ebp + 8]
// 0046d49e  3bf7                 cmp esi, edi
// 0046d4a0  7410                 je 0x46d4b2
// 0046d4a2  8d4e08               lea ecx, [esi + 8]
// 0046d4a5  ff15082ea400         call dword ptr [0xa42e08]
// 0046d4ab  83c60c               add esi, 0xc
// 0046d4ae  3bf7                 cmp esi, edi
// 0046d4b0  75f0                 jne 0x46d4a2
// 0046d4b2  33db                 xor ebx, ebx
// 0046d4b4  53                   push ebx
// 0046d4b5  53                   push ebx
// 0046d4b6  e8f1db3900           call 0x80b0ac
// 0046d4bb  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046d4be  5f                   pop edi
// 0046d4bf  5e                   pop esi
// 0046d4c0  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d4c7  5b                   pop ebx
// 0046d4c8  8be5                 mov esp, ebp
// 0046d4ca  5d                   pop ebp
// 0046d4cb  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_fill_n@PAUColorEntry@@IU1@V?$allocator@UColorEntry@@@std@@@std@@YAXPAUColorEntry@@IABU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
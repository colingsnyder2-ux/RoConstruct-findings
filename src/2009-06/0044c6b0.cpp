// roc 2009-06 0044c6b0  unit: CRobloxControlColorSelector  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c6b0
//
// 0044c6b0  55                   push ebp
// 0044c6b1  8bec                 mov ebp, esp
// 0044c6b3  6aff                 push -1
// 0044c6b5  68910d8500           push 0x850d91
// 0044c6ba  64a100000000         mov eax, dword ptr fs:[0]
// 0044c6c0  50                   push eax
// 0044c6c1  64892500000000       mov dword ptr fs:[0], esp
// 0044c6c8  83ec0c               sub esp, 0xc
// 0044c6cb  53                   push ebx
// 0044c6cc  56                   push esi
// 0044c6cd  8b7508               mov esi, dword ptr [ebp + 8]
// 0044c6d0  57                   push edi
// 0044c6d1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0044c6d4  33db                 xor ebx, ebx
// 0044c6d6  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044c6d9  8975ec               mov dword ptr [ebp - 0x14], esi
// 0044c6dc  895dfc               mov dword ptr [ebp - 4], ebx
// 0044c6df  90                   nop 
// 0044c6e0  3bfb                 cmp edi, ebx
// 0044c6e2  7657                 jbe 0x44c73b
// 0044c6e4  89750c               mov dword ptr [ebp + 0xc], esi
// 0044c6e7  8975e8               mov dword ptr [ebp - 0x18], esi
// 0044c6ea  c645fc01             mov byte ptr [ebp - 4], 1
// 0044c6ee  3bf3                 cmp esi, ebx
// 0044c6f0  741a                 je 0x44c70c
// 0044c6f2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0044c6f5  8b08                 mov ecx, dword ptr [eax]
// 0044c6f7  890e                 mov dword ptr [esi], ecx
// 0044c6f9  8b5004               mov edx, dword ptr [eax + 4]
// 0044c6fc  83c008               add eax, 8
// 0044c6ff  50                   push eax
// 0044c700  8d4e08               lea ecx, [esi + 8]
// 0044c703  895604               mov dword ptr [esi + 4], edx
// 0044c706  ff15e4fc8900         call dword ptr [0x89fce4]
// 0044c70c  4f                   dec edi
// 0044c70d  83c60c               add esi, 0xc
// 0044c710  885dfc               mov byte ptr [ebp - 4], bl
// 0044c713  897508               mov dword ptr [ebp + 8], esi
// 0044c716  ebc8                 jmp 0x44c6e0
// 0044c718  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0044c71b  8b7d08               mov edi, dword ptr [ebp + 8]
// 0044c71e  3bf7                 cmp esi, edi
// 0044c720  7410                 je 0x44c732
// 0044c722  8d4e08               lea ecx, [esi + 8]
// 0044c725  ff1510fd8900         call dword ptr [0x89fd10]
// 0044c72b  83c60c               add esi, 0xc
// 0044c72e  3bf7                 cmp esi, edi
// 0044c730  75f0                 jne 0x44c722
// 0044c732  33db                 xor ebx, ebx
// 0044c734  53                   push ebx
// 0044c735  53                   push ebx
// 0044c736  e80fd32c00           call 0x719a4a
// 0044c73b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044c73e  5f                   pop edi
// 0044c73f  5e                   pop esi
// 0044c740  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c747  5b                   pop ebx
// 0044c748  8be5                 mov esp, ebp
// 0044c74a  5d                   pop ebp
// 0044c74b  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_fill_n@PAUColorEntry@@IU1@V?$allocator@UColorEntry@@@std@@@std@@YAXPAUColorEntry@@IABU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
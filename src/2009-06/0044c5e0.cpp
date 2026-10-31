// roc 2009-06 0044c5e0  unit: CRobloxControlColorSelector  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c5e0
//
// 0044c5e0  55                   push ebp
// 0044c5e1  8bec                 mov ebp, esp
// 0044c5e3  6aff                 push -1
// 0044c5e5  68710d8500           push 0x850d71
// 0044c5ea  64a100000000         mov eax, dword ptr fs:[0]
// 0044c5f0  50                   push eax
// 0044c5f1  64892500000000       mov dword ptr fs:[0], esp
// 0044c5f8  83ec0c               sub esp, 0xc
// 0044c5fb  53                   push ebx
// 0044c5fc  56                   push esi
// 0044c5fd  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0044c600  57                   push edi
// 0044c601  8b7d08               mov edi, dword ptr [ebp + 8]
// 0044c604  33db                 xor ebx, ebx
// 0044c606  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044c609  8975ec               mov dword ptr [ebp - 0x14], esi
// 0044c60c  895dfc               mov dword ptr [ebp - 4], ebx
// 0044c60f  90                   nop 
// 0044c610  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0044c613  7456                 je 0x44c66b
// 0044c615  897508               mov dword ptr [ebp + 8], esi
// 0044c618  8975e8               mov dword ptr [ebp - 0x18], esi
// 0044c61b  c645fc01             mov byte ptr [ebp - 4], 1
// 0044c61f  3bf3                 cmp esi, ebx
// 0044c621  7417                 je 0x44c63a
// 0044c623  8b07                 mov eax, dword ptr [edi]
// 0044c625  8906                 mov dword ptr [esi], eax
// 0044c627  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044c62a  8d5708               lea edx, [edi + 8]
// 0044c62d  894e04               mov dword ptr [esi + 4], ecx
// 0044c630  52                   push edx
// 0044c631  8d4e08               lea ecx, [esi + 8]
// 0044c634  ff15e4fc8900         call dword ptr [0x89fce4]
// 0044c63a  83c60c               add esi, 0xc
// 0044c63d  885dfc               mov byte ptr [ebp - 4], bl
// 0044c640  897510               mov dword ptr [ebp + 0x10], esi
// 0044c643  83c70c               add edi, 0xc
// 0044c646  ebc8                 jmp 0x44c610
// 0044c648  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0044c64b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0044c64e  3bf7                 cmp esi, edi
// 0044c650  7410                 je 0x44c662
// 0044c652  8d4e08               lea ecx, [esi + 8]
// 0044c655  ff1510fd8900         call dword ptr [0x89fd10]
// 0044c65b  83c60c               add esi, 0xc
// 0044c65e  3bf7                 cmp esi, edi
// 0044c660  75f0                 jne 0x44c652
// 0044c662  33db                 xor ebx, ebx
// 0044c664  53                   push ebx
// 0044c665  53                   push ebx
// 0044c666  e8dfd32c00           call 0x719a4a
// 0044c66b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044c66e  5f                   pop edi
// 0044c66f  8bc6                 mov eax, esi
// 0044c671  5e                   pop esi
// 0044c672  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c679  5b                   pop ebx
// 0044c67a  8be5                 mov esp, ebp
// 0044c67c  5d                   pop ebp
// 0044c67d  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_copy@PBUColorEntry@@PAU1@V?$allocator@UColorEntry@@@std@@@std@@YAPAUColorEntry@@PBU1@0PAU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
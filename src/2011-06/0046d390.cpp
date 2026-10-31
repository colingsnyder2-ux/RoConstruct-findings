// roc 2011-06 0046d390  unit: CRobloxControlColorSelector  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d390
//
// 0046d390  55                   push ebp
// 0046d391  8bec                 mov ebp, esp
// 0046d393  6aff                 push -1
// 0046d395  6821389d00           push 0x9d3821
// 0046d39a  64a100000000         mov eax, dword ptr fs:[0]
// 0046d3a0  50                   push eax
// 0046d3a1  64892500000000       mov dword ptr fs:[0], esp
// 0046d3a8  83ec0c               sub esp, 0xc
// 0046d3ab  53                   push ebx
// 0046d3ac  56                   push esi
// 0046d3ad  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0046d3b0  57                   push edi
// 0046d3b1  8b7d08               mov edi, dword ptr [ebp + 8]
// 0046d3b4  33db                 xor ebx, ebx
// 0046d3b6  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046d3b9  8975ec               mov dword ptr [ebp - 0x14], esi
// 0046d3bc  895dfc               mov dword ptr [ebp - 4], ebx
// 0046d3bf  90                   nop 
// 0046d3c0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0046d3c3  7456                 je 0x46d41b
// 0046d3c5  897508               mov dword ptr [ebp + 8], esi
// 0046d3c8  8975e8               mov dword ptr [ebp - 0x18], esi
// 0046d3cb  c645fc01             mov byte ptr [ebp - 4], 1
// 0046d3cf  3bf3                 cmp esi, ebx
// 0046d3d1  7417                 je 0x46d3ea
// 0046d3d3  8b07                 mov eax, dword ptr [edi]
// 0046d3d5  8906                 mov dword ptr [esi], eax
// 0046d3d7  8b4f04               mov ecx, dword ptr [edi + 4]
// 0046d3da  8d5708               lea edx, [edi + 8]
// 0046d3dd  894e04               mov dword ptr [esi + 4], ecx
// 0046d3e0  52                   push edx
// 0046d3e1  8d4e08               lea ecx, [esi + 8]
// 0046d3e4  ff15e42da400         call dword ptr [0xa42de4]
// 0046d3ea  83c60c               add esi, 0xc
// 0046d3ed  885dfc               mov byte ptr [ebp - 4], bl
// 0046d3f0  897510               mov dword ptr [ebp + 0x10], esi
// 0046d3f3  83c70c               add edi, 0xc
// 0046d3f6  ebc8                 jmp 0x46d3c0
// 0046d3f8  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0046d3fb  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0046d3fe  3bf7                 cmp esi, edi
// 0046d400  7410                 je 0x46d412
// 0046d402  8d4e08               lea ecx, [esi + 8]
// 0046d405  ff15082ea400         call dword ptr [0xa42e08]
// 0046d40b  83c60c               add esi, 0xc
// 0046d40e  3bf7                 cmp esi, edi
// 0046d410  75f0                 jne 0x46d402
// 0046d412  33db                 xor ebx, ebx
// 0046d414  53                   push ebx
// 0046d415  53                   push ebx
// 0046d416  e891dc3900           call 0x80b0ac
// 0046d41b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046d41e  5f                   pop edi
// 0046d41f  8bc6                 mov eax, esi
// 0046d421  5e                   pop esi
// 0046d422  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d429  5b                   pop ebx
// 0046d42a  8be5                 mov esp, ebp
// 0046d42c  5d                   pop ebp
// 0046d42d  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_copy@PBUColorEntry@@PAU1@V?$allocator@UColorEntry@@@std@@@std@@YAPAUColorEntry@@PBU1@0PAU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
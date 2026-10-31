// roc 2012-06 004782a0  unit: CRobloxControlColorSelector  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004782a0
//
// 004782a0  55                   push ebp
// 004782a1  8bec                 mov ebp, esp
// 004782a3  6aff                 push -1
// 004782a5  68710daa00           push 0xaa0d71
// 004782aa  64a100000000         mov eax, dword ptr fs:[0]
// 004782b0  50                   push eax
// 004782b1  64892500000000       mov dword ptr fs:[0], esp
// 004782b8  83ec0c               sub esp, 0xc
// 004782bb  53                   push ebx
// 004782bc  56                   push esi
// 004782bd  8b7510               mov esi, dword ptr [ebp + 0x10]
// 004782c0  57                   push edi
// 004782c1  8b7d08               mov edi, dword ptr [ebp + 8]
// 004782c4  33db                 xor ebx, ebx
// 004782c6  8965f0               mov dword ptr [ebp - 0x10], esp
// 004782c9  8975ec               mov dword ptr [ebp - 0x14], esi
// 004782cc  895dfc               mov dword ptr [ebp - 4], ebx
// 004782cf  90                   nop 
// 004782d0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 004782d3  7456                 je 0x47832b
// 004782d5  897508               mov dword ptr [ebp + 8], esi
// 004782d8  8975e8               mov dword ptr [ebp - 0x18], esi
// 004782db  c645fc01             mov byte ptr [ebp - 4], 1
// 004782df  3bf3                 cmp esi, ebx
// 004782e1  7417                 je 0x4782fa
// 004782e3  8b07                 mov eax, dword ptr [edi]
// 004782e5  8906                 mov dword ptr [esi], eax
// 004782e7  8b4f04               mov ecx, dword ptr [edi + 4]
// 004782ea  8d5708               lea edx, [edi + 8]
// 004782ed  894e04               mov dword ptr [esi + 4], ecx
// 004782f0  52                   push edx
// 004782f1  8d4e08               lea ecx, [esi + 8]
// 004782f4  ff158047b200         call dword ptr [0xb24780]
// 004782fa  83c60c               add esi, 0xc
// 004782fd  885dfc               mov byte ptr [ebp - 4], bl
// 00478300  897510               mov dword ptr [ebp + 0x10], esi
// 00478303  83c70c               add edi, 0xc
// 00478306  ebc8                 jmp 0x4782d0
// 00478308  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0047830b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0047830e  3bf7                 cmp esi, edi
// 00478310  7410                 je 0x478322
// 00478312  8d4e08               lea ecx, [esi + 8]
// 00478315  ff15d047b200         call dword ptr [0xb247d0]
// 0047831b  83c60c               add esi, 0xc
// 0047831e  3bf7                 cmp esi, edi
// 00478320  75f0                 jne 0x478312
// 00478322  33db                 xor ebx, ebx
// 00478324  53                   push ebx
// 00478325  53                   push ebx
// 00478326  e819ae5000           call 0x983144
// 0047832b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0047832e  5f                   pop edi
// 0047832f  8bc6                 mov eax, esi
// 00478331  5e                   pop esi
// 00478332  64890d00000000       mov dword ptr fs:[0], ecx
// 00478339  5b                   pop ebx
// 0047833a  8be5                 mov esp, ebp
// 0047833c  5d                   pop ebp
// 0047833d  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_copy@PBUColorEntry@@PAU1@V?$allocator@UColorEntry@@@std@@@std@@YAPAUColorEntry@@PBU1@0PAU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
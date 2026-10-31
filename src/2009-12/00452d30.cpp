// roc 2009-12 00452d30  unit: CRobloxControlColorSelector  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452d30
//
// 00452d30  55                   push ebp
// 00452d31  8bec                 mov ebp, esp
// 00452d33  6aff                 push -1
// 00452d35  68d1b49200           push 0x92b4d1
// 00452d3a  64a100000000         mov eax, dword ptr fs:[0]
// 00452d40  50                   push eax
// 00452d41  64892500000000       mov dword ptr fs:[0], esp
// 00452d48  83ec0c               sub esp, 0xc
// 00452d4b  53                   push ebx
// 00452d4c  56                   push esi
// 00452d4d  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00452d50  57                   push edi
// 00452d51  8b7d08               mov edi, dword ptr [ebp + 8]
// 00452d54  33db                 xor ebx, ebx
// 00452d56  8965f0               mov dword ptr [ebp - 0x10], esp
// 00452d59  8975ec               mov dword ptr [ebp - 0x14], esi
// 00452d5c  895dfc               mov dword ptr [ebp - 4], ebx
// 00452d5f  90                   nop 
// 00452d60  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 00452d63  7456                 je 0x452dbb
// 00452d65  897508               mov dword ptr [ebp + 8], esi
// 00452d68  8975e8               mov dword ptr [ebp - 0x18], esi
// 00452d6b  c645fc01             mov byte ptr [ebp - 4], 1
// 00452d6f  3bf3                 cmp esi, ebx
// 00452d71  7417                 je 0x452d8a
// 00452d73  8b07                 mov eax, dword ptr [edi]
// 00452d75  8906                 mov dword ptr [esi], eax
// 00452d77  8b4f04               mov ecx, dword ptr [edi + 4]
// 00452d7a  8d5708               lea edx, [edi + 8]
// 00452d7d  894e04               mov dword ptr [esi + 4], ecx
// 00452d80  52                   push edx
// 00452d81  8d4e08               lea ecx, [esi + 8]
// 00452d84  ff1594de9800         call dword ptr [0x98de94]
// 00452d8a  83c60c               add esi, 0xc
// 00452d8d  885dfc               mov byte ptr [ebp - 4], bl
// 00452d90  897510               mov dword ptr [ebp + 0x10], esi
// 00452d93  83c70c               add edi, 0xc
// 00452d96  ebc8                 jmp 0x452d60
// 00452d98  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00452d9b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00452d9e  3bf7                 cmp esi, edi
// 00452da0  7410                 je 0x452db2
// 00452da2  8d4e08               lea ecx, [esi + 8]
// 00452da5  ff15c0de9800         call dword ptr [0x98dec0]
// 00452dab  83c60c               add esi, 0xc
// 00452dae  3bf7                 cmp esi, edi
// 00452db0  75f0                 jne 0x452da2
// 00452db2  33db                 xor ebx, ebx
// 00452db4  53                   push ebx
// 00452db5  53                   push ebx
// 00452db6  e8bd1a3a00           call 0x7f4878
// 00452dbb  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00452dbe  5f                   pop edi
// 00452dbf  8bc6                 mov eax, esi
// 00452dc1  5e                   pop esi
// 00452dc2  64890d00000000       mov dword ptr fs:[0], ecx
// 00452dc9  5b                   pop ebx
// 00452dca  8be5                 mov esp, ebp
// 00452dcc  5d                   pop ebp
// 00452dcd  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_copy@PBUColorEntry@@PAU1@V?$allocator@UColorEntry@@@std@@@std@@YAPAUColorEntry@@PBU1@0PAU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
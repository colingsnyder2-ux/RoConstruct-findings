// roc 2012-06 00478340  unit: CRobloxControlColorSelector  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00478340
//
// 00478340  55                   push ebp
// 00478341  8bec                 mov ebp, esp
// 00478343  6aff                 push -1
// 00478345  68910daa00           push 0xaa0d91
// 0047834a  64a100000000         mov eax, dword ptr fs:[0]
// 00478350  50                   push eax
// 00478351  64892500000000       mov dword ptr fs:[0], esp
// 00478358  83ec0c               sub esp, 0xc
// 0047835b  53                   push ebx
// 0047835c  56                   push esi
// 0047835d  8b7508               mov esi, dword ptr [ebp + 8]
// 00478360  57                   push edi
// 00478361  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00478364  33db                 xor ebx, ebx
// 00478366  8965f0               mov dword ptr [ebp - 0x10], esp
// 00478369  8975ec               mov dword ptr [ebp - 0x14], esi
// 0047836c  895dfc               mov dword ptr [ebp - 4], ebx
// 0047836f  90                   nop 
// 00478370  3bfb                 cmp edi, ebx
// 00478372  7657                 jbe 0x4783cb
// 00478374  89750c               mov dword ptr [ebp + 0xc], esi
// 00478377  8975e8               mov dword ptr [ebp - 0x18], esi
// 0047837a  c645fc01             mov byte ptr [ebp - 4], 1
// 0047837e  3bf3                 cmp esi, ebx
// 00478380  741a                 je 0x47839c
// 00478382  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00478385  8b08                 mov ecx, dword ptr [eax]
// 00478387  890e                 mov dword ptr [esi], ecx
// 00478389  8b5004               mov edx, dword ptr [eax + 4]
// 0047838c  83c008               add eax, 8
// 0047838f  50                   push eax
// 00478390  8d4e08               lea ecx, [esi + 8]
// 00478393  895604               mov dword ptr [esi + 4], edx
// 00478396  ff158047b200         call dword ptr [0xb24780]
// 0047839c  4f                   dec edi
// 0047839d  83c60c               add esi, 0xc
// 004783a0  885dfc               mov byte ptr [ebp - 4], bl
// 004783a3  897508               mov dword ptr [ebp + 8], esi
// 004783a6  ebc8                 jmp 0x478370
// 004783a8  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004783ab  8b7d08               mov edi, dword ptr [ebp + 8]
// 004783ae  3bf7                 cmp esi, edi
// 004783b0  7410                 je 0x4783c2
// 004783b2  8d4e08               lea ecx, [esi + 8]
// 004783b5  ff15d047b200         call dword ptr [0xb247d0]
// 004783bb  83c60c               add esi, 0xc
// 004783be  3bf7                 cmp esi, edi
// 004783c0  75f0                 jne 0x4783b2
// 004783c2  33db                 xor ebx, ebx
// 004783c4  53                   push ebx
// 004783c5  53                   push ebx
// 004783c6  e879ad5000           call 0x983144
// 004783cb  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004783ce  5f                   pop edi
// 004783cf  5e                   pop esi
// 004783d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004783d7  5b                   pop ebx
// 004783d8  8be5                 mov esp, ebp
// 004783da  5d                   pop ebp
// 004783db  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_fill_n@PAUColorEntry@@IU1@V?$allocator@UColorEntry@@@std@@@std@@YAXPAUColorEntry@@IABU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
// roc 2009-12 00453bd0  unit: CRobloxControlMaterialSelector  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453bd0
//
// 00453bd0  55                   push ebp
// 00453bd1  8bec                 mov ebp, esp
// 00453bd3  6aff                 push -1
// 00453bd5  6851b59200           push 0x92b551
// 00453bda  64a100000000         mov eax, dword ptr fs:[0]
// 00453be0  50                   push eax
// 00453be1  64892500000000       mov dword ptr fs:[0], esp
// 00453be8  83ec0c               sub esp, 0xc
// 00453beb  53                   push ebx
// 00453bec  56                   push esi
// 00453bed  8b7508               mov esi, dword ptr [ebp + 8]
// 00453bf0  57                   push edi
// 00453bf1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00453bf4  33db                 xor ebx, ebx
// 00453bf6  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453bf9  8975ec               mov dword ptr [ebp - 0x14], esi
// 00453bfc  895dfc               mov dword ptr [ebp - 4], ebx
// 00453bff  90                   nop 
// 00453c00  3bfb                 cmp edi, ebx
// 00453c02  7657                 jbe 0x453c5b
// 00453c04  89750c               mov dword ptr [ebp + 0xc], esi
// 00453c07  8975e8               mov dword ptr [ebp - 0x18], esi
// 00453c0a  c645fc01             mov byte ptr [ebp - 4], 1
// 00453c0e  3bf3                 cmp esi, ebx
// 00453c10  741a                 je 0x453c2c
// 00453c12  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00453c15  8b08                 mov ecx, dword ptr [eax]
// 00453c17  890e                 mov dword ptr [esi], ecx
// 00453c19  8b5004               mov edx, dword ptr [eax + 4]
// 00453c1c  83c008               add eax, 8
// 00453c1f  50                   push eax
// 00453c20  8d4e08               lea ecx, [esi + 8]
// 00453c23  895604               mov dword ptr [esi + 4], edx
// 00453c26  ff1594de9800         call dword ptr [0x98de94]
// 00453c2c  4f                   dec edi
// 00453c2d  83c60c               add esi, 0xc
// 00453c30  885dfc               mov byte ptr [ebp - 4], bl
// 00453c33  897508               mov dword ptr [ebp + 8], esi
// 00453c36  ebc8                 jmp 0x453c00
// 00453c38  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00453c3b  8b7d08               mov edi, dword ptr [ebp + 8]
// 00453c3e  3bf7                 cmp esi, edi
// 00453c40  7410                 je 0x453c52
// 00453c42  8d4e08               lea ecx, [esi + 8]
// 00453c45  ff15c0de9800         call dword ptr [0x98dec0]
// 00453c4b  83c60c               add esi, 0xc
// 00453c4e  3bf7                 cmp esi, edi
// 00453c50  75f0                 jne 0x453c42
// 00453c52  33db                 xor ebx, ebx
// 00453c54  53                   push ebx
// 00453c55  53                   push ebx
// 00453c56  e81d0c3a00           call 0x7f4878
// 00453c5b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00453c5e  5f                   pop edi
// 00453c5f  5e                   pop esi
// 00453c60  64890d00000000       mov dword ptr fs:[0], ecx
// 00453c67  5b                   pop ebx
// 00453c68  8be5                 mov esp, ebp
// 00453c6a  5d                   pop ebp
// 00453c6b  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_fill_n@PAUColorEntry@@IU1@V?$allocator@UColorEntry@@@std@@@std@@YAXPAUColorEntry@@IABU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp
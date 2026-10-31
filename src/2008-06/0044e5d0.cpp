// from server: 100% by colin
// roc 2008-06 0044e5d0  unit: CRobloxControlColorSelector  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044e5d0
//
// 0044e5d0  55                   push ebp
// 0044e5d1  8bec                 mov ebp, esp
// 0044e5d3  6aff                 push -1
// 0044e5d5  6841157c00           push 0x7c1541
// 0044e5da  64a100000000         mov eax, dword ptr fs:[0]
// 0044e5e0  50                   push eax
// 0044e5e1  64892500000000       mov dword ptr fs:[0], esp
// 0044e5e8  83ec0c               sub esp, 0xc
// 0044e5eb  53                   push ebx
// 0044e5ec  56                   push esi
// 0044e5ed  8b7508               mov esi, dword ptr [ebp + 8]
// 0044e5f0  57                   push edi
// 0044e5f1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0044e5f4  33db                 xor ebx, ebx
// 0044e5f6  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044e5f9  8975ec               mov dword ptr [ebp - 0x14], esi
// 0044e5fc  895dfc               mov dword ptr [ebp - 4], ebx
// 0044e5ff  90                   nop 
// 0044e600  3bfb                 cmp edi, ebx
// 0044e602  7657                 jbe 0x44e65b
// 0044e604  89750c               mov dword ptr [ebp + 0xc], esi
// 0044e607  8975e8               mov dword ptr [ebp - 0x18], esi
// 0044e60a  c645fc01             mov byte ptr [ebp - 4], 1
// 0044e60e  3bf3                 cmp esi, ebx
// 0044e610  741a                 je 0x44e62c
// 0044e612  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0044e615  8b08                 mov ecx, dword ptr [eax]
// 0044e617  890e                 mov dword ptr [esi], ecx
// 0044e619  8b5004               mov edx, dword ptr [eax + 4]
// 0044e61c  83c008               add eax, 8
// 0044e61f  50                   push eax
// 0044e620  8d4e08               lea ecx, [esi + 8]
// 0044e623  895604               mov dword ptr [esi + 4], edx
// 0044e626  ff15d43e8000         call dword ptr [0x803ed4]
// 0044e62c  4f                   dec edi
// 0044e62d  83c60c               add esi, 0xc
// 0044e630  885dfc               mov byte ptr [ebp - 4], bl
// 0044e633  897508               mov dword ptr [ebp + 8], esi
// 0044e636  ebc8                 jmp 0x44e600
// 0044e638  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0044e63b  8b7d08               mov edi, dword ptr [ebp + 8]
// 0044e63e  3bf7                 cmp esi, edi
// 0044e640  7410                 je 0x44e652
// 0044e642  8d4e08               lea ecx, [esi + 8]
// 0044e645  ff15143f8000         call dword ptr [0x803f14]
// 0044e64b  83c60c               add esi, 0xc
// 0044e64e  3bf7                 cmp esi, edi
// 0044e650  75f0                 jne 0x44e642
// 0044e652  33db                 xor ebx, ebx
// 0044e654  53                   push ebx
// 0044e655  53                   push ebx
// 0044e656  e8312f2500           call 0x6a158c
// 0044e65b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044e65e  5f                   pop edi
// 0044e65f  5e                   pop esi
// 0044e660  64890d00000000       mov dword ptr fs:[0], ecx
// 0044e667  5b                   pop ebx
// 0044e668  8be5                 mov esp, ebp
// 0044e66a  5d                   pop ebp
// 0044e66b  c3                   ret 

// from server: 80% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp

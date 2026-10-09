// roc 2007-03 0066e4f0  unit: seg_00660000  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066e4f0
//
// 0066e4f0  53                   push ebx
// 0066e4f1  56                   push esi
// 0066e4f2  57                   push edi
// 0066e4f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066e4f7  33db                 xor ebx, ebx
// 0066e4f9  3bfb                 cmp edi, ebx
// 0066e4fb  8bf1                 mov esi, ecx
// 0066e4fd  7d05                 jge 0x66e504
// 0066e4ff  e8aafefaff           call 0x61e3ae
// 0066e504  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066e508  3bc3                 cmp eax, ebx
// 0066e50a  7c03                 jl 0x66e50f
// 0066e50c  894610               mov dword ptr [esi + 0x10], eax
// 0066e50f  3bfb                 cmp edi, ebx
// 0066e511  751f                 jne 0x66e532
// 0066e513  8b4604               mov eax, dword ptr [esi + 4]
// 0066e516  3bc3                 cmp eax, ebx
// 0066e518  740c                 je 0x66e526
// 0066e51a  50                   push eax
// 0066e51b  e894fefaff           call 0x61e3b4
// 0066e520  83c404               add esp, 4
// 0066e523  895e04               mov dword ptr [esi + 4], ebx
// 0066e526  5f                   pop edi
// 0066e527  895e0c               mov dword ptr [esi + 0xc], ebx
// 0066e52a  895e08               mov dword ptr [esi + 8], ebx
// 0066e52d  5e                   pop esi
// 0066e52e  5b                   pop ebx
// 0066e52f  c20800               ret 8
// 0066e532  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066e535  3bcb                 cmp ecx, ebx
// 0066e537  55                   push ebp
// 0066e538  7530                 jne 0x66e56a
// 0066e53a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0066e53d  3bfd                 cmp edi, ebp
// 0066e53f  7e02                 jle 0x66e543
// 0066e541  8bef                 mov ebp, edi
// 0066e543  8bdd                 mov ebx, ebp
// 0066e545  c1e304               shl ebx, 4
// 0066e548  53                   push ebx
// 0066e549  e872fefaff           call 0x61e3c0
// 0066e54e  53                   push ebx
// 0066e54f  6a00                 push 0
// 0066e551  50                   push eax
// 0066e552  894604               mov dword ptr [esi + 4], eax
// 0066e555  e8c20afbff           call 0x61f01c
// 0066e55a  83c410               add esp, 0x10
// 0066e55d  896e0c               mov dword ptr [esi + 0xc], ebp
// 0066e560  5d                   pop ebp
// 0066e561  897e08               mov dword ptr [esi + 8], edi
// 0066e564  5f                   pop edi
// 0066e565  5e                   pop esi
// 0066e566  5b                   pop ebx
// 0066e567  c20800               ret 8
// 0066e56a  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0066e56d  3bfd                 cmp edi, ebp
// 0066e56f  7f2c                 jg 0x66e59d
// 0066e571  8b4608               mov eax, dword ptr [esi + 8]
// 0066e574  3bf8                 cmp edi, eax
// 0066e576  0f8eb3000000         jle 0x66e62f
// 0066e57c  8bd7                 mov edx, edi
// 0066e57e  2bd0                 sub edx, eax
// 0066e580  c1e204               shl edx, 4
// 0066e583  52                   push edx
// 0066e584  c1e004               shl eax, 4
// 0066e587  03c1                 add eax, ecx
// 0066e589  53                   push ebx
// 0066e58a  50                   push eax
// 0066e58b  e88c0afbff           call 0x61f01c
// 0066e590  83c40c               add esp, 0xc
// 0066e593  5d                   pop ebp
// 0066e594  897e08               mov dword ptr [esi + 8], edi
// 0066e597  5f                   pop edi
// 0066e598  5e                   pop esi
// 0066e599  5b                   pop ebx
// 0066e59a  c20800               ret 8
// 0066e59d  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066e5a0  3bc3                 cmp eax, ebx
// 0066e5a2  7524                 jne 0x66e5c8
// 0066e5a4  8b4608               mov eax, dword ptr [esi + 8]
// 0066e5a7  99                   cdq 
// 0066e5a8  83e207               and edx, 7
// 0066e5ab  03c2                 add eax, edx
// 0066e5ad  c1f803               sar eax, 3
// 0066e5b0  83f804               cmp eax, 4
// 0066e5b3  7d07                 jge 0x66e5bc
// 0066e5b5  b804000000           mov eax, 4
// 0066e5ba  eb0c                 jmp 0x66e5c8
// 0066e5bc  3d00040000           cmp eax, 0x400
// 0066e5c1  7e05                 jle 0x66e5c8
// 0066e5c3  b800040000           mov eax, 0x400
// 0066e5c8  8d1c28               lea ebx, [eax + ebp]
// 0066e5cb  3bfb                 cmp edi, ebx
// 0066e5cd  7d06                 jge 0x66e5d5
// 0066e5cf  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066e5d3  eb06                 jmp 0x66e5db
// 0066e5d5  897c2414             mov dword ptr [esp + 0x14], edi
// 0066e5d9  8bdf                 mov ebx, edi
// 0066e5db  3bdd                 cmp ebx, ebp
// 0066e5dd  7d05                 jge 0x66e5e4
// 0066e5df  e8cafdfaff           call 0x61e3ae
// 0066e5e4  c1e304               shl ebx, 4
// 0066e5e7  53                   push ebx
// 0066e5e8  e8d3fdfaff           call 0x61e3c0
// 0066e5ed  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066e5f0  8be8                 mov ebp, eax
// 0066e5f2  8b4608               mov eax, dword ptr [esi + 8]
// 0066e5f5  c1e004               shl eax, 4
// 0066e5f8  50                   push eax
// 0066e5f9  51                   push ecx
// 0066e5fa  53                   push ebx
// 0066e5fb  55                   push ebp
// 0066e5fc  e88f32d9ff           call 0x401890
// 0066e601  8b4608               mov eax, dword ptr [esi + 8]
// 0066e604  8bd7                 mov edx, edi
// 0066e606  2bd0                 sub edx, eax
// 0066e608  c1e204               shl edx, 4
// 0066e60b  52                   push edx
// 0066e60c  c1e004               shl eax, 4
// 0066e60f  03c5                 add eax, ebp
// 0066e611  6a00                 push 0
// 0066e613  50                   push eax
// 0066e614  e8030afbff           call 0x61f01c
// 0066e619  8b4604               mov eax, dword ptr [esi + 4]
// 0066e61c  50                   push eax
// 0066e61d  e892fdfaff           call 0x61e3b4
// 0066e622  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0066e626  83c424               add esp, 0x24
// 0066e629  896e04               mov dword ptr [esi + 4], ebp
// 0066e62c  894e0c               mov dword ptr [esi + 0xc], ecx
// 0066e62f  5d                   pop ebp
// 0066e630  897e08               mov dword ptr [esi + 8], edi
// 0066e633  5f                   pop edi
// 0066e634  5e                   pop esi
// 0066e635  5b                   pop ebx
// 0066e636  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetSize@?$CArray@UtagRECT@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp

// from server: 100% by auto
// roc 2008-06 006d93b0  unit: CXTPReportRecordItemVariant  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d93b0
//
// 006d93b0  55                   push ebp
// 006d93b1  8bec                 mov ebp, esp
// 006d93b3  6aff                 push -1
// 006d93b5  68901f7e00           push 0x7e1f90
// 006d93ba  64a100000000         mov eax, dword ptr fs:[0]
// 006d93c0  50                   push eax
// 006d93c1  83ec20               sub esp, 0x20
// 006d93c4  53                   push ebx
// 006d93c5  56                   push esi
// 006d93c6  57                   push edi
// 006d93c7  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006d93cc  33c5                 xor eax, ebp
// 006d93ce  50                   push eax
// 006d93cf  8d45f4               lea eax, [ebp - 0xc]
// 006d93d2  64a300000000         mov dword ptr fs:[0], eax
// 006d93d8  8965f0               mov dword ptr [ebp - 0x10], esp
// 006d93db  8bf1                 mov esi, ecx
// 006d93dd  8b4508               mov eax, dword ptr [ebp + 8]
// 006d93e0  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006d93e3  51                   push ecx
// 006d93e4  8bce                 mov ecx, esi
// 006d93e6  e815ecfeff           call 0x6c8000
// 006d93eb  33ff                 xor edi, edi
// 006d93ed  397824               cmp dword ptr [eax + 0x24], edi
// 006d93f0  747c                 je 0x6d946e
// 006d93f2  83c67c               add esi, 0x7c
// 006d93f5  56                   push esi
// 006d93f6  8d4dd4               lea ecx, [ebp - 0x2c]
// 006d93f9  e8d02e0e00           call 0x7bc2ce
// 006d93fe  8d4de4               lea ecx, [ebp - 0x1c]
// 006d9401  897dfc               mov dword ptr [ebp - 4], edi
// 006d9404  e8092d0e00           call 0x7bc112
// 006d9409  6a01                 push 1
// 006d940b  8d55d4               lea edx, [ebp - 0x2c]
// 006d940e  6a03                 push 3
// 006d9410  52                   push edx
// 006d9411  c645fc02             mov byte ptr [ebp - 4], 2
// 006d9415  e826fafeff           call 0x6c8e40
// 006d941a  83c40c               add esp, 0xc
// 006d941d  897dfc               mov dword ptr [ebp - 4], edi
// 006d9420  e8db2c0e00           call 0x7bc100
// 006d9425  8b75dc               mov esi, dword ptr [ebp - 0x24]
// 006d9428  8d45d4               lea eax, [ebp - 0x2c]
// 006d942b  50                   push eax
// 006d942c  ff151c298000         call dword ptr [0x80291c]
// 006d9432  8bc6                 mov eax, esi
// 006d9434  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006d9437  64890d00000000       mov dword ptr fs:[0], ecx
// 006d943e  59                   pop ecx
// 006d943f  5f                   pop edi
// 006d9440  5e                   pop esi
// 006d9441  5b                   pop ebx
// 006d9442  8be5                 mov esp, ebp
// 006d9444  5d                   pop ebp
// 006d9445  c20400               ret 4
// 006d9448  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006d944b  894de8               mov dword ptr [ebp - 0x18], ecx
// 006d944e  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d9455  b85b946d00           mov eax, 0x6d945b
// 006d945a  c3                   ret 
// 006d945b  c645fc00             mov byte ptr [ebp - 4], 0
// 006d945f  e89c2c0e00           call 0x7bc100
// 006d9464  8d55d4               lea edx, [ebp - 0x2c]
// 006d9467  52                   push edx
// 006d9468  ff151c298000         call dword ptr [0x80291c]
// 006d946e  83c8ff               or eax, 0xffffffff
// 006d9471  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006d9474  64890d00000000       mov dword ptr fs:[0], ecx
// 006d947b  59                   pop ecx
// 006d947c  5f                   pop edi
// 006d947d  5e                   pop esi
// 006d947e  5b                   pop ebx
// 006d947f  8be5                 mov esp, ebp
// 006d9481  5d                   pop ebp
// 006d9482  c20400               ret 4

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp

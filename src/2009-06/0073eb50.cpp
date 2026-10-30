// roc 2009-06 0073eb50  unit: CRobloxReportView  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073eb50
//
// 0073eb50  83ec08               sub esp, 8
// 0073eb53  53                   push ebx
// 0073eb54  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0073eb58  57                   push edi
// 0073eb59  8bf9                 mov edi, ecx
// 0073eb5b  85db                 test ebx, ebx
// 0073eb5d  0f8408010000         je 0x73ec6b
// 0073eb63  55                   push ebp
// 0073eb64  bd01000000           mov ebp, 1
// 0073eb69  56                   push esi
// 0073eb6a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0073eb6e  396b14               cmp dword ptr [ebx + 0x14], ebp
// 0073eb71  751e                 jne 0x73eb91
// 0073eb73  8b07                 mov eax, dword ptr [edi]
// 0073eb75  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0073eb7b  ffd2                 call edx
// 0073eb7d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0073eb83  e828330100           call 0x751eb0
// 0073eb88  85c0                 test eax, eax
// 0073eb8a  7505                 jne 0x73eb91
// 0073eb8c  896b10               mov dword ptr [ebx + 0x10], ebp
// 0073eb8f  eb5d                 jmp 0x73ebee
// 0073eb91  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0073eb94  3b4768               cmp eax, dword ptr [edi + 0x68]
// 0073eb97  7534                 jne 0x73ebcd
// 0073eb99  83c0ff               add eax, -1
// 0073eb9c  0f88d1000000         js 0x73ec73
// 0073eba2  3b4768               cmp eax, dword ptr [edi + 0x68]
// 0073eba5  0f8dc8000000         jge 0x73ec73
// 0073ebab  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0073ebae  8b17                 mov edx, dword ptr [edi]
// 0073ebb0  8d2c81               lea ebp, [ecx + eax*4]
// 0073ebb3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0073ebb9  8bcf                 mov ecx, edi
// 0073ebbb  ffd0                 call eax
// 0073ebbd  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0073ebc3  e8e8320100           call 0x751eb0
// 0073ebc8  394500               cmp dword ptr [ebp], eax
// 0073ebcb  731a                 jae 0x73ebe7
// 0073ebcd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0073ebd0  3b4f68               cmp ecx, dword ptr [edi + 0x68]
// 0073ebd3  7619                 jbe 0x73ebee
// 0073ebd5  8b17                 mov edx, dword ptr [edi]
// 0073ebd7  8b82b0010000         mov eax, dword ptr [edx + 0x1b0]
// 0073ebdd  53                   push ebx
// 0073ebde  56                   push esi
// 0073ebdf  8bcf                 mov ecx, edi
// 0073ebe1  ffd0                 call eax
// 0073ebe3  85c0                 test eax, eax
// 0073ebe5  7507                 jne 0x73ebee
// 0073ebe7  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 0073ebee  8b16                 mov edx, dword ptr [esi]
// 0073ebf0  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0073ebf3  6a08                 push 8
// 0073ebf5  8bce                 mov ecx, esi
// 0073ebf7  ffd0                 call eax
// 0073ebf9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0073ebfc  8b1d58e18900         mov ebx, dword ptr [0x89e158]
// 0073ec02  6a5a                 push 0x5a
// 0073ec04  51                   push ecx
// 0073ec05  ffd3                 call ebx
// 0073ec07  8b5608               mov edx, dword ptr [esi + 8]
// 0073ec0a  6a58                 push 0x58
// 0073ec0c  52                   push edx
// 0073ec0d  8be8                 mov ebp, eax
// 0073ec0f  ffd3                 call ebx
// 0073ec11  8b16                 mov edx, dword ptr [esi]
// 0073ec13  8b5248               mov edx, dword ptr [edx + 0x48]
// 0073ec16  55                   push ebp
// 0073ec17  50                   push eax
// 0073ec18  8d442418             lea eax, [esp + 0x18]
// 0073ec1c  50                   push eax
// 0073ec1d  8bce                 mov ecx, esi
// 0073ec1f  ffd2                 call edx
// 0073ec21  8b06                 mov eax, dword ptr [esi]
// 0073ec23  8b5050               mov edx, dword ptr [eax + 0x50]
// 0073ec26  6a64                 push 0x64
// 0073ec28  6a64                 push 0x64
// 0073ec2a  8d4c2418             lea ecx, [esp + 0x18]
// 0073ec2e  51                   push ecx
// 0073ec2f  8bce                 mov ecx, esi
// 0073ec31  ffd2                 call edx
// 0073ec33  6a00                 push 0
// 0073ec35  6a00                 push 0
// 0073ec37  8d442418             lea eax, [esp + 0x18]
// 0073ec3b  50                   push eax
// 0073ec3c  8bce                 mov ecx, esi
// 0073ec3e  e8afd41000           call 0x84c0f2
// 0073ec43  8b17                 mov edx, dword ptr [edi]
// 0073ec45  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0073ec4b  8bcf                 mov ecx, edi
// 0073ec4d  ffd0                 call eax
// 0073ec4f  8bc8                 mov ecx, eax
// 0073ec51  e88cd21000           call 0x84bee2
// 0073ec56  a900200000           test eax, 0x2000
// 0073ec5b  740c                 je 0x73ec69
// 0073ec5d  6800010000           push 0x100
// 0073ec62  8bce                 mov ecx, esi
// 0073ec64  e8abacfdff           call 0x719914
// 0073ec69  5e                   pop esi
// 0073ec6a  5d                   pop ebp
// 0073ec6b  5f                   pop edi
// 0073ec6c  5b                   pop ebx
// 0073ec6d  83c408               add esp, 8
// 0073ec70  c20800               ret 8
// 0073ec73  e86ca0fdff           call 0x718ce4
// copied from an identical function in another client (function ?OnPrepareDC@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
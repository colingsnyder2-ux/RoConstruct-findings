// roc 2011-06 0082f540  unit: CRobloxReportView  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082f540
//
// 0082f540  83ec08               sub esp, 8
// 0082f543  53                   push ebx
// 0082f544  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0082f548  57                   push edi
// 0082f549  8bf9                 mov edi, ecx
// 0082f54b  85db                 test ebx, ebx
// 0082f54d  0f8408010000         je 0x82f65b
// 0082f553  55                   push ebp
// 0082f554  bd01000000           mov ebp, 1
// 0082f559  56                   push esi
// 0082f55a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0082f55e  396b14               cmp dword ptr [ebx + 0x14], ebp
// 0082f561  751e                 jne 0x82f581
// 0082f563  8b07                 mov eax, dword ptr [edi]
// 0082f565  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0082f56b  ffd2                 call edx
// 0082f56d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0082f573  e8683b0100           call 0x8430e0
// 0082f578  85c0                 test eax, eax
// 0082f57a  7505                 jne 0x82f581
// 0082f57c  896b10               mov dword ptr [ebx + 0x10], ebp
// 0082f57f  eb5d                 jmp 0x82f5de
// 0082f581  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0082f584  3b4768               cmp eax, dword ptr [edi + 0x68]
// 0082f587  7534                 jne 0x82f5bd
// 0082f589  83c0ff               add eax, -1
// 0082f58c  0f88d1000000         js 0x82f663
// 0082f592  3b4768               cmp eax, dword ptr [edi + 0x68]
// 0082f595  0f8dc8000000         jge 0x82f663
// 0082f59b  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0082f59e  8b17                 mov edx, dword ptr [edi]
// 0082f5a0  8d2c81               lea ebp, [ecx + eax*4]
// 0082f5a3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0082f5a9  8bcf                 mov ecx, edi
// 0082f5ab  ffd0                 call eax
// 0082f5ad  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0082f5b3  e8283b0100           call 0x8430e0
// 0082f5b8  394500               cmp dword ptr [ebp], eax
// 0082f5bb  731a                 jae 0x82f5d7
// 0082f5bd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0082f5c0  3b4f68               cmp ecx, dword ptr [edi + 0x68]
// 0082f5c3  7619                 jbe 0x82f5de
// 0082f5c5  8b17                 mov edx, dword ptr [edi]
// 0082f5c7  8b82b0010000         mov eax, dword ptr [edx + 0x1b0]
// 0082f5cd  53                   push ebx
// 0082f5ce  56                   push esi
// 0082f5cf  8bcf                 mov ecx, edi
// 0082f5d1  ffd0                 call eax
// 0082f5d3  85c0                 test eax, eax
// 0082f5d5  7507                 jne 0x82f5de
// 0082f5d7  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 0082f5de  8b16                 mov edx, dword ptr [esi]
// 0082f5e0  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0082f5e3  6a08                 push 8
// 0082f5e5  8bce                 mov ecx, esi
// 0082f5e7  ffd0                 call eax
// 0082f5e9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0082f5ec  8b1d7401a400         mov ebx, dword ptr [0xa40174]
// 0082f5f2  6a5a                 push 0x5a
// 0082f5f4  51                   push ecx
// 0082f5f5  ffd3                 call ebx
// 0082f5f7  8b5608               mov edx, dword ptr [esi + 8]
// 0082f5fa  6a58                 push 0x58
// 0082f5fc  52                   push edx
// 0082f5fd  8be8                 mov ebp, eax
// 0082f5ff  ffd3                 call ebx
// 0082f601  8b16                 mov edx, dword ptr [esi]
// 0082f603  8b5248               mov edx, dword ptr [edx + 0x48]
// 0082f606  55                   push ebp
// 0082f607  50                   push eax
// 0082f608  8d442418             lea eax, [esp + 0x18]
// 0082f60c  50                   push eax
// 0082f60d  8bce                 mov ecx, esi
// 0082f60f  ffd2                 call edx
// 0082f611  8b06                 mov eax, dword ptr [esi]
// 0082f613  8b5050               mov edx, dword ptr [eax + 0x50]
// 0082f616  6a64                 push 0x64
// 0082f618  6a64                 push 0x64
// 0082f61a  8d4c2418             lea ecx, [esp + 0x18]
// 0082f61e  51                   push ecx
// 0082f61f  8bce                 mov ecx, esi
// 0082f621  ffd2                 call edx
// 0082f623  6a00                 push 0
// 0082f625  6a00                 push 0
// 0082f627  8d442418             lea eax, [esp + 0x18]
// 0082f62b  50                   push eax
// 0082f62c  8bce                 mov ecx, esi
// 0082f62e  e87dd11900           call 0x9cc7b0
// 0082f633  8b17                 mov edx, dword ptr [edi]
// 0082f635  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0082f63b  8bcf                 mov ecx, edi
// 0082f63d  ffd0                 call eax
// 0082f63f  8bc8                 mov ecx, eax
// 0082f641  e8d8cf1900           call 0x9cc61e
// 0082f646  a900200000           test eax, 0x2000
// 0082f64b  740c                 je 0x82f659
// 0082f64d  6800010000           push 0x100
// 0082f652  8bce                 mov ecx, esi
// 0082f654  e81db9fdff           call 0x80af76
// 0082f659  5e                   pop esi
// 0082f65a  5d                   pop ebp
// 0082f65b  5f                   pop edi
// 0082f65c  5b                   pop ebx
// 0082f65d  83c408               add esp, 8
// 0082f660  c20800               ret 8
// 0082f663  e8a2acfdff           call 0x80a30a
// copied from an identical function in another client (function ?OnPrepareDC@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
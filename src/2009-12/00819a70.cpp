// roc 2009-12 00819a70  unit: CRobloxReportView  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819a70
//
// 00819a70  83ec08               sub esp, 8
// 00819a73  53                   push ebx
// 00819a74  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00819a78  57                   push edi
// 00819a79  8bf9                 mov edi, ecx
// 00819a7b  85db                 test ebx, ebx
// 00819a7d  0f8408010000         je 0x819b8b
// 00819a83  55                   push ebp
// 00819a84  bd01000000           mov ebp, 1
// 00819a89  56                   push esi
// 00819a8a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00819a8e  396b14               cmp dword ptr [ebx + 0x14], ebp
// 00819a91  751e                 jne 0x819ab1
// 00819a93  8b07                 mov eax, dword ptr [edi]
// 00819a95  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00819a9b  ffd2                 call edx
// 00819a9d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00819aa3  e878310100           call 0x82cc20
// 00819aa8  85c0                 test eax, eax
// 00819aaa  7505                 jne 0x819ab1
// 00819aac  896b10               mov dword ptr [ebx + 0x10], ebp
// 00819aaf  eb5d                 jmp 0x819b0e
// 00819ab1  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00819ab4  3b4768               cmp eax, dword ptr [edi + 0x68]
// 00819ab7  7534                 jne 0x819aed
// 00819ab9  83c0ff               add eax, -1
// 00819abc  0f88d1000000         js 0x819b93
// 00819ac2  3b4768               cmp eax, dword ptr [edi + 0x68]
// 00819ac5  0f8dc8000000         jge 0x819b93
// 00819acb  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 00819ace  8b17                 mov edx, dword ptr [edi]
// 00819ad0  8d2c81               lea ebp, [ecx + eax*4]
// 00819ad3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819ad9  8bcf                 mov ecx, edi
// 00819adb  ffd0                 call eax
// 00819add  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00819ae3  e838310100           call 0x82cc20
// 00819ae8  394500               cmp dword ptr [ebp], eax
// 00819aeb  731a                 jae 0x819b07
// 00819aed  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00819af0  3b4f68               cmp ecx, dword ptr [edi + 0x68]
// 00819af3  7619                 jbe 0x819b0e
// 00819af5  8b17                 mov edx, dword ptr [edi]
// 00819af7  8b82b0010000         mov eax, dword ptr [edx + 0x1b0]
// 00819afd  53                   push ebx
// 00819afe  56                   push esi
// 00819aff  8bcf                 mov ecx, edi
// 00819b01  ffd0                 call eax
// 00819b03  85c0                 test eax, eax
// 00819b05  7507                 jne 0x819b0e
// 00819b07  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 00819b0e  8b16                 mov edx, dword ptr [esi]
// 00819b10  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00819b13  6a08                 push 8
// 00819b15  8bce                 mov ecx, esi
// 00819b17  ffd0                 call eax
// 00819b19  8b4e08               mov ecx, dword ptr [esi + 8]
// 00819b1c  8b1d64b19800         mov ebx, dword ptr [0x98b164]
// 00819b22  6a5a                 push 0x5a
// 00819b24  51                   push ecx
// 00819b25  ffd3                 call ebx
// 00819b27  8b5608               mov edx, dword ptr [esi + 8]
// 00819b2a  6a58                 push 0x58
// 00819b2c  52                   push edx
// 00819b2d  8be8                 mov ebp, eax
// 00819b2f  ffd3                 call ebx
// 00819b31  8b16                 mov edx, dword ptr [esi]
// 00819b33  8b5248               mov edx, dword ptr [edx + 0x48]
// 00819b36  55                   push ebp
// 00819b37  50                   push eax
// 00819b38  8d442418             lea eax, [esp + 0x18]
// 00819b3c  50                   push eax
// 00819b3d  8bce                 mov ecx, esi
// 00819b3f  ffd2                 call edx
// 00819b41  8b06                 mov eax, dword ptr [esi]
// 00819b43  8b5050               mov edx, dword ptr [eax + 0x50]
// 00819b46  6a64                 push 0x64
// 00819b48  6a64                 push 0x64
// 00819b4a  8d4c2418             lea ecx, [esp + 0x18]
// 00819b4e  51                   push ecx
// 00819b4f  8bce                 mov ecx, esi
// 00819b51  ffd2                 call edx
// 00819b53  6a00                 push 0
// 00819b55  6a00                 push 0
// 00819b57  8d442418             lea eax, [esp + 0x18]
// 00819b5b  50                   push eax
// 00819b5c  8bce                 mov ecx, esi
// 00819b5e  e8fbca1000           call 0x92665e
// 00819b63  8b17                 mov edx, dword ptr [edi]
// 00819b65  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819b6b  8bcf                 mov ecx, edi
// 00819b6d  ffd0                 call eax
// 00819b6f  8bc8                 mov ecx, eax
// 00819b71  e802c91000           call 0x926478
// 00819b76  a900200000           test eax, 0x2000
// 00819b7b  740c                 je 0x819b89
// 00819b7d  6800010000           push 0x100
// 00819b82  8bce                 mov ecx, esi
// 00819b84  e8bfabfdff           call 0x7f4748
// 00819b89  5e                   pop esi
// 00819b8a  5d                   pop ebp
// 00819b8b  5f                   pop edi
// 00819b8c  5b                   pop ebx
// 00819b8d  83c408               add esp, 8
// 00819b90  c20800               ret 8
// 00819b93  e8749ffdff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnPrepareDC@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
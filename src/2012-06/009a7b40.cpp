// roc 2012-06 009a7b40  unit: CRobloxReportView  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a7b40
//
// 009a7b40  83ec08               sub esp, 8
// 009a7b43  53                   push ebx
// 009a7b44  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009a7b48  57                   push edi
// 009a7b49  8bf9                 mov edi, ecx
// 009a7b4b  85db                 test ebx, ebx
// 009a7b4d  0f8408010000         je 0x9a7c5b
// 009a7b53  55                   push ebp
// 009a7b54  bd01000000           mov ebp, 1
// 009a7b59  56                   push esi
// 009a7b5a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009a7b5e  396b14               cmp dword ptr [ebx + 0x14], ebp
// 009a7b61  751e                 jne 0x9a7b81
// 009a7b63  8b07                 mov eax, dword ptr [edi]
// 009a7b65  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 009a7b6b  ffd2                 call edx
// 009a7b6d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 009a7b73  e8f8300100           call 0x9bac70
// 009a7b78  85c0                 test eax, eax
// 009a7b7a  7505                 jne 0x9a7b81
// 009a7b7c  896b10               mov dword ptr [ebx + 0x10], ebp
// 009a7b7f  eb5d                 jmp 0x9a7bde
// 009a7b81  8b4314               mov eax, dword ptr [ebx + 0x14]
// 009a7b84  3b4768               cmp eax, dword ptr [edi + 0x68]
// 009a7b87  7534                 jne 0x9a7bbd
// 009a7b89  83c0ff               add eax, -1
// 009a7b8c  0f88d1000000         js 0x9a7c63
// 009a7b92  3b4768               cmp eax, dword ptr [edi + 0x68]
// 009a7b95  0f8dc8000000         jge 0x9a7c63
// 009a7b9b  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 009a7b9e  8b17                 mov edx, dword ptr [edi]
// 009a7ba0  8d2c81               lea ebp, [ecx + eax*4]
// 009a7ba3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a7ba9  8bcf                 mov ecx, edi
// 009a7bab  ffd0                 call eax
// 009a7bad  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 009a7bb3  e8b8300100           call 0x9bac70
// 009a7bb8  394500               cmp dword ptr [ebp], eax
// 009a7bbb  731a                 jae 0x9a7bd7
// 009a7bbd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 009a7bc0  3b4f68               cmp ecx, dword ptr [edi + 0x68]
// 009a7bc3  7619                 jbe 0x9a7bde
// 009a7bc5  8b17                 mov edx, dword ptr [edi]
// 009a7bc7  8b82b0010000         mov eax, dword ptr [edx + 0x1b0]
// 009a7bcd  53                   push ebx
// 009a7bce  56                   push esi
// 009a7bcf  8bcf                 mov ecx, edi
// 009a7bd1  ffd0                 call eax
// 009a7bd3  85c0                 test eax, eax
// 009a7bd5  7507                 jne 0x9a7bde
// 009a7bd7  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 009a7bde  8b16                 mov edx, dword ptr [esi]
// 009a7be0  8b423c               mov eax, dword ptr [edx + 0x3c]
// 009a7be3  6a08                 push 8
// 009a7be5  8bce                 mov ecx, esi
// 009a7be7  ffd0                 call eax
// 009a7be9  8b4e08               mov ecx, dword ptr [esi + 8]
// 009a7bec  8b1d4821b200         mov ebx, dword ptr [0xb22148]
// 009a7bf2  6a5a                 push 0x5a
// 009a7bf4  51                   push ecx
// 009a7bf5  ffd3                 call ebx
// 009a7bf7  8b5608               mov edx, dword ptr [esi + 8]
// 009a7bfa  6a58                 push 0x58
// 009a7bfc  52                   push edx
// 009a7bfd  8be8                 mov ebp, eax
// 009a7bff  ffd3                 call ebx
// 009a7c01  8b16                 mov edx, dword ptr [esi]
// 009a7c03  8b5248               mov edx, dword ptr [edx + 0x48]
// 009a7c06  55                   push ebp
// 009a7c07  50                   push eax
// 009a7c08  8d442418             lea eax, [esp + 0x18]
// 009a7c0c  50                   push eax
// 009a7c0d  8bce                 mov ecx, esi
// 009a7c0f  ffd2                 call edx
// 009a7c11  8b06                 mov eax, dword ptr [esi]
// 009a7c13  8b5050               mov edx, dword ptr [eax + 0x50]
// 009a7c16  6a64                 push 0x64
// 009a7c18  6a64                 push 0x64
// 009a7c1a  8d4c2418             lea ecx, [esp + 0x18]
// 009a7c1e  51                   push ecx
// 009a7c1f  8bce                 mov ecx, esi
// 009a7c21  ffd2                 call edx
// 009a7c23  6a00                 push 0
// 009a7c25  6a00                 push 0
// 009a7c27  8d442418             lea eax, [esp + 0x18]
// 009a7c2b  50                   push eax
// 009a7c2c  8bce                 mov ecx, esi
// 009a7c2e  e8371b0f00           call 0xa9976a
// 009a7c33  8b17                 mov edx, dword ptr [edi]
// 009a7c35  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a7c3b  8bcf                 mov ecx, edi
// 009a7c3d  ffd0                 call eax
// 009a7c3f  8bc8                 mov ecx, eax
// 009a7c41  e892190f00           call 0xa995d8
// 009a7c46  a900200000           test eax, 0x2000
// 009a7c4b  740c                 je 0x9a7c59
// 009a7c4d  6800010000           push 0x100
// 009a7c52  8bce                 mov ecx, esi
// 009a7c54  e8afb3fdff           call 0x983008
// 009a7c59  5e                   pop esi
// 009a7c5a  5d                   pop ebp
// 009a7c5b  5f                   pop edi
// 009a7c5c  5b                   pop ebx
// 009a7c5d  83c408               add esp, 8
// 009a7c60  c20800               ret 8
// 009a7c63  e858a7fdff           call 0x9823c0
// copied from an identical function in another client (function ?OnPrepareDC@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
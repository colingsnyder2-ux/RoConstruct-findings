// roc 2010-06 007cdb50  unit: CRobloxReportView  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cdb50
//
// 007cdb50  83ec08               sub esp, 8
// 007cdb53  53                   push ebx
// 007cdb54  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007cdb58  57                   push edi
// 007cdb59  8bf9                 mov edi, ecx
// 007cdb5b  85db                 test ebx, ebx
// 007cdb5d  0f8408010000         je 0x7cdc6b
// 007cdb63  55                   push ebp
// 007cdb64  bd01000000           mov ebp, 1
// 007cdb69  56                   push esi
// 007cdb6a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007cdb6e  396b14               cmp dword ptr [ebx + 0x14], ebp
// 007cdb71  751e                 jne 0x7cdb91
// 007cdb73  8b07                 mov eax, dword ptr [edi]
// 007cdb75  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 007cdb7b  ffd2                 call edx
// 007cdb7d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 007cdb83  e8f83b0100           call 0x7e1780
// 007cdb88  85c0                 test eax, eax
// 007cdb8a  7505                 jne 0x7cdb91
// 007cdb8c  896b10               mov dword ptr [ebx + 0x10], ebp
// 007cdb8f  eb5d                 jmp 0x7cdbee
// 007cdb91  8b4314               mov eax, dword ptr [ebx + 0x14]
// 007cdb94  3b4768               cmp eax, dword ptr [edi + 0x68]
// 007cdb97  7534                 jne 0x7cdbcd
// 007cdb99  83c0ff               add eax, -1
// 007cdb9c  0f88d1000000         js 0x7cdc73
// 007cdba2  3b4768               cmp eax, dword ptr [edi + 0x68]
// 007cdba5  0f8dc8000000         jge 0x7cdc73
// 007cdbab  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 007cdbae  8b17                 mov edx, dword ptr [edi]
// 007cdbb0  8d2c81               lea ebp, [ecx + eax*4]
// 007cdbb3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007cdbb9  8bcf                 mov ecx, edi
// 007cdbbb  ffd0                 call eax
// 007cdbbd  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 007cdbc3  e8b83b0100           call 0x7e1780
// 007cdbc8  394500               cmp dword ptr [ebp], eax
// 007cdbcb  731a                 jae 0x7cdbe7
// 007cdbcd  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 007cdbd0  3b4f68               cmp ecx, dword ptr [edi + 0x68]
// 007cdbd3  7619                 jbe 0x7cdbee
// 007cdbd5  8b17                 mov edx, dword ptr [edi]
// 007cdbd7  8b82b0010000         mov eax, dword ptr [edx + 0x1b0]
// 007cdbdd  53                   push ebx
// 007cdbde  56                   push esi
// 007cdbdf  8bcf                 mov ecx, edi
// 007cdbe1  ffd0                 call eax
// 007cdbe3  85c0                 test eax, eax
// 007cdbe5  7507                 jne 0x7cdbee
// 007cdbe7  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 007cdbee  8b16                 mov edx, dword ptr [esi]
// 007cdbf0  8b423c               mov eax, dword ptr [edx + 0x3c]
// 007cdbf3  6a08                 push 8
// 007cdbf5  8bce                 mov ecx, esi
// 007cdbf7  ffd0                 call eax
// 007cdbf9  8b4e08               mov ecx, dword ptr [esi + 8]
// 007cdbfc  8b1db4a09e00         mov ebx, dword ptr [0x9ea0b4]
// 007cdc02  6a5a                 push 0x5a
// 007cdc04  51                   push ecx
// 007cdc05  ffd3                 call ebx
// 007cdc07  8b5608               mov edx, dword ptr [esi + 8]
// 007cdc0a  6a58                 push 0x58
// 007cdc0c  52                   push edx
// 007cdc0d  8be8                 mov ebp, eax
// 007cdc0f  ffd3                 call ebx
// 007cdc11  8b16                 mov edx, dword ptr [esi]
// 007cdc13  8b5248               mov edx, dword ptr [edx + 0x48]
// 007cdc16  55                   push ebp
// 007cdc17  50                   push eax
// 007cdc18  8d442418             lea eax, [esp + 0x18]
// 007cdc1c  50                   push eax
// 007cdc1d  8bce                 mov ecx, esi
// 007cdc1f  ffd2                 call edx
// 007cdc21  8b06                 mov eax, dword ptr [esi]
// 007cdc23  8b5050               mov edx, dword ptr [eax + 0x50]
// 007cdc26  6a64                 push 0x64
// 007cdc28  6a64                 push 0x64
// 007cdc2a  8d4c2418             lea ecx, [esp + 0x18]
// 007cdc2e  51                   push ecx
// 007cdc2f  8bce                 mov ecx, esi
// 007cdc31  ffd2                 call edx
// 007cdc33  6a00                 push 0
// 007cdc35  6a00                 push 0
// 007cdc37  8d442418             lea eax, [esp + 0x18]
// 007cdc3b  50                   push eax
// 007cdc3c  8bce                 mov ecx, esi
// 007cdc3e  e857f31a00           call 0x97cf9a
// 007cdc43  8b17                 mov edx, dword ptr [edi]
// 007cdc45  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007cdc4b  8bcf                 mov ecx, edi
// 007cdc4d  ffd0                 call eax
// 007cdc4f  8bc8                 mov ecx, eax
// 007cdc51  e88ef11a00           call 0x97cde4
// 007cdc56  a900200000           test eax, 0x2000
// 007cdc5b  740c                 je 0x7cdc69
// 007cdc5d  6800010000           push 0x100
// 007cdc62  8bce                 mov ecx, esi
// 007cdc64  e819acfdff           call 0x7a8882
// 007cdc69  5e                   pop esi
// 007cdc6a  5d                   pop ebp
// 007cdc6b  5f                   pop edi
// 007cdc6c  5b                   pop ebx
// 007cdc6d  83c408               add esp, 8
// 007cdc70  c20800               ret 8
// 007cdc73  e8d49ffdff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnPrepareDC@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
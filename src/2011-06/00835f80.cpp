// roc 2011-06 00835f80  unit: CXTPReportControl  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00835f80
//
// 00835f80  6aff                 push -1
// 00835f82  683845a000           push 0xa04538
// 00835f87  64a100000000         mov eax, dword ptr fs:[0]
// 00835f8d  50                   push eax
// 00835f8e  83ec1c               sub esp, 0x1c
// 00835f91  53                   push ebx
// 00835f92  55                   push ebp
// 00835f93  56                   push esi
// 00835f94  57                   push edi
// 00835f95  a12058c900           mov eax, dword ptr [0xc95820]
// 00835f9a  33c4                 xor eax, esp
// 00835f9c  50                   push eax
// 00835f9d  8d442430             lea eax, [esp + 0x30]
// 00835fa1  64a300000000         mov dword ptr fs:[0], eax
// 00835fa7  894c2420             mov dword ptr [esp + 0x20], ecx
// 00835fab  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00835faf  e8bcc70000           call 0x842770
// 00835fb4  8b742440             mov esi, dword ptr [esp + 0x40]
// 00835fb8  33db                 xor ebx, ebx
// 00835fba  3bf3                 cmp esi, ebx
// 00835fbc  7455                 je 0x836013
// 00835fbe  395e28               cmp dword ptr [esi + 0x28], ebx
// 00835fc1  7450                 je 0x836013
// 00835fc3  8b06                 mov eax, dword ptr [esi]
// 00835fc5  8b5070               mov edx, dword ptr [eax + 0x70]
// 00835fc8  68404dac00           push 0xac4d40
// 00835fcd  8bce                 mov ecx, esi
// 00835fcf  ffd2                 call edx
// 00835fd1  8bf8                 mov edi, eax
// 00835fd3  897c2424             mov dword ptr [esp + 0x24], edi
// 00835fd7  8d442418             lea eax, [esp + 0x18]
// 00835fdb  50                   push eax
// 00835fdc  68a8b5a500           push 0xa5b5a8
// 00835fe1  56                   push esi
// 00835fe2  895c2444             mov dword ptr [esp + 0x44], ebx
// 00835fe6  895c2424             mov dword ptr [esp + 0x24], ebx
// 00835fea  e8319f0200           call 0x85ff20
// 00835fef  83c40c               add esp, 0xc
// 00835ff2  8bce                 mov ecx, esi
// 00835ff4  e8e7af0200           call 0x860fe0
// 00835ff9  837c241801           cmp dword ptr [esp + 0x18], 1
// 00835ffe  742b                 je 0x83602b
// 00836000  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00836008  3bfb                 cmp edi, ebx
// 0083600a  7407                 je 0x836013
// 0083600c  8bcf                 mov ecx, edi
// 0083600e  e8c745fdff           call 0x80a5da
// 00836013  33c0                 xor eax, eax
// 00836015  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00836019  64890d00000000       mov dword ptr fs:[0], ecx
// 00836020  59                   pop ecx
// 00836021  5f                   pop edi
// 00836022  5e                   pop esi
// 00836023  5d                   pop ebp
// 00836024  5b                   pop ebx
// 00836025  83c428               add esp, 0x28
// 00836028  c20800               ret 8
// 0083602b  8b17                 mov edx, dword ptr [edi]
// 0083602d  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00836033  68384dac00           push 0xac4d38
// 00836038  8bcf                 mov ecx, edi
// 0083603a  ffd0                 call eax
// 0083603c  8be8                 mov ebp, eax
// 0083603e  896c2428             mov dword ptr [esp + 0x28], ebp
// 00836042  8b5500               mov edx, dword ptr [ebp]
// 00836045  8b4204               mov eax, dword ptr [edx + 4]
// 00836048  6a01                 push 1
// 0083604a  53                   push ebx
// 0083604b  8bcd                 mov ecx, ebp
// 0083604d  c644244001           mov byte ptr [esp + 0x40], 1
// 00836052  ffd0                 call eax
// 00836054  8944241c             mov dword ptr [esp + 0x1c], eax
// 00836058  3bc3                 cmp eax, ebx
// 0083605a  0f84ae000000         je 0x83610e
// 00836060  8b5500               mov edx, dword ptr [ebp]
// 00836063  8b5208               mov edx, dword ptr [edx + 8]
// 00836066  8d44241c             lea eax, [esp + 0x1c]
// 0083606a  50                   push eax
// 0083606b  8bcd                 mov ecx, ebp
// 0083606d  ffd2                 call edx
// 0083606f  8bf0                 mov esi, eax
// 00836071  8974242c             mov dword ptr [esp + 0x2c], esi
// 00836075  c644243802           mov byte ptr [esp + 0x38], 2
// 0083607a  895c2440             mov dword ptr [esp + 0x40], ebx
// 0083607e  e89da80000           call 0x840920
// 00836083  8b16                 mov edx, dword ptr [esi]
// 00836085  8b5264               mov edx, dword ptr [edx + 0x64]
// 00836088  50                   push eax
// 00836089  8d442444             lea eax, [esp + 0x44]
// 0083608d  50                   push eax
// 0083608e  8bce                 mov ecx, esi
// 00836090  ffd2                 call edx
// 00836092  85c0                 test eax, eax
// 00836094  740c                 je 0x8360a2
// 00836096  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0083609a  8b01                 mov eax, dword ptr [ecx]
// 0083609c  8b5060               mov edx, dword ptr [eax + 0x60]
// 0083609f  56                   push esi
// 008360a0  ffd2                 call edx
// 008360a2  8b442440             mov eax, dword ptr [esp + 0x40]
// 008360a6  3bc3                 cmp eax, ebx
// 008360a8  0f8488000000         je 0x836136
// 008360ae  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008360b2  89442414             mov dword ptr [esp + 0x14], eax
// 008360b6  8b01                 mov eax, dword ptr [ecx]
// 008360b8  8b8000020000         mov eax, dword ptr [eax + 0x200]
// 008360be  8d542414             lea edx, [esp + 0x14]
// 008360c2  52                   push edx
// 008360c3  ffd0                 call eax
// 008360c5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008360c9  8bf8                 mov edi, eax
// 008360cb  3bfb                 cmp edi, ebx
// 008360cd  7506                 jne 0x8360d5
// 008360cf  394c2414             cmp dword ptr [esp + 0x14], ecx
// 008360d3  7411                 je 0x8360e6
// 008360d5  3bcb                 cmp ecx, ebx
// 008360d7  7409                 je 0x8360e2
// 008360d9  e8fc44fdff           call 0x80a5da
// 008360de  895c2440             mov dword ptr [esp + 0x40], ebx
// 008360e2  3bfb                 cmp edi, ebx
// 008360e4  750e                 jne 0x8360f4
// 008360e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008360ea  51                   push ecx
// 008360eb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008360ef  e87ccb0000           call 0x842c70
// 008360f4  8bce                 mov ecx, esi
// 008360f6  c644243801           mov byte ptr [esp + 0x38], 1
// 008360fb  e8da44fdff           call 0x80a5da
// 00836100  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00836104  0f8556ffffff         jne 0x836060
// 0083610a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0083610e  8b5500               mov edx, dword ptr [ebp]
// 00836111  8b02                 mov eax, dword ptr [edx]
// 00836113  6a01                 push 1
// 00836115  8bcd                 mov ecx, ebp
// 00836117  885c243c             mov byte ptr [esp + 0x3c], bl
// 0083611b  ffd0                 call eax
// 0083611d  8bcf                 mov ecx, edi
// 0083611f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00836127  e8ae44fdff           call 0x80a5da
// 0083612c  b801000000           mov eax, 1
// 00836131  e9dffeffff           jmp 0x836015
// 00836136  53                   push ebx
// 00836137  6a06                 push 6
// 00836139  e8964afdff           call 0x80abd4
// copied from an identical function in another client (function ?_ReadRecodsFromData@CXTPReportControl@@MAEHPAVCXTPPropExchange@@AAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp
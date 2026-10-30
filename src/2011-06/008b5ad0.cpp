// roc 2011-06 008b5ad0  unit: CXTPReportInplaceEdit  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b5ad0
//
// 008b5ad0  6aff                 push -1
// 008b5ad2  687bb6a000           push 0xa0b67b
// 008b5ad7  64a100000000         mov eax, dword ptr fs:[0]
// 008b5add  50                   push eax
// 008b5ade  83ec18               sub esp, 0x18
// 008b5ae1  53                   push ebx
// 008b5ae2  55                   push ebp
// 008b5ae3  56                   push esi
// 008b5ae4  57                   push edi
// 008b5ae5  a12058c900           mov eax, dword ptr [0xc95820]
// 008b5aea  33c4                 xor eax, esp
// 008b5aec  50                   push eax
// 008b5aed  8d44242c             lea eax, [esp + 0x2c]
// 008b5af1  64a300000000         mov dword ptr fs:[0], eax
// 008b5af7  8be9                 mov ebp, ecx
// 008b5af9  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008b5afc  85c9                 test ecx, ecx
// 008b5afe  0f84f9010000         je 0x8b5cfd
// 008b5b04  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008b5b08  83f809               cmp eax, 9
// 008b5b0b  0f84ec010000         je 0x8b5cfd
// 008b5b11  83f81b               cmp eax, 0x1b
// 008b5b14  0f84dc010000         je 0x8b5cf6
// 008b5b1a  83f80d               cmp eax, 0xd
// 008b5b1d  0f84d3010000         je 0x8b5cf6
// 008b5b23  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 008b5b26  85c9                 test ecx, ecx
// 008b5b28  0f84bf010000         je 0x8b5ced
// 008b5b2e  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008b5b31  85c0                 test eax, eax
// 008b5b33  0f84b4010000         je 0x8b5ced
// 008b5b39  50                   push eax
// 008b5b3a  e8d19ff8ff           call 0x83fb10
// 008b5b3f  83782400             cmp dword ptr [eax + 0x24], 0
// 008b5b43  0f84a4010000         je 0x8b5ced
// 008b5b49  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008b5b4c  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 008b5b4f  50                   push eax
// 008b5b50  e8bb9ff8ff           call 0x83fb10
// 008b5b55  8bf0                 mov esi, eax
// 008b5b57  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 008b5b5a  8bcb                 mov ecx, ebx
// 008b5b5c  895c2428             mov dword ptr [esp + 0x28], ebx
// 008b5b60  e82b38fbff           call 0x869390
// 008b5b65  8bf8                 mov edi, eax
// 008b5b67  85ff                 test edi, edi
// 008b5b69  0f8e7e010000         jle 0x8b5ced
// 008b5b6f  8d4c2414             lea ecx, [esp + 0x14]
// 008b5b73  ff15b42da400         call dword ptr [0xa42db4]
// 008b5b79  8d4c2418             lea ecx, [esp + 0x18]
// 008b5b7d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008b5b85  ff15b42da400         call dword ptr [0xa42db4]
// 008b5b8b  8d4c2414             lea ecx, [esp + 0x14]
// 008b5b8f  51                   push ecx
// 008b5b90  8bcd                 mov ecx, ebp
// 008b5b92  c644243801           mov byte ptr [esp + 0x38], 1
// 008b5b97  e8aa4af5ff           call 0x80a646
// 008b5b9c  8d542414             lea edx, [esp + 0x14]
// 008b5ba0  52                   push edx
// 008b5ba1  8d4c241c             lea ecx, [esp + 0x1c]
// 008b5ba5  ff156425a400         call dword ptr [0xa42564]
// 008b5bab  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008b5bb1  85c0                 test eax, eax
// 008b5bb3  751b                 jne 0x8b5bd0
// 008b5bb5  8d4c2414             lea ecx, [esp + 0x14]
// 008b5bb9  ff15c82da400         call dword ptr [0xa42dc8]
// 008b5bbf  50                   push eax
// 008b5bc0  8bce                 mov ecx, esi
// 008b5bc2  e83992f8ff           call 0x83ee00
// 008b5bc7  85c0                 test eax, eax
// 008b5bc9  7505                 jne 0x8b5bd0
// 008b5bcb  8d77ff               lea esi, [edi - 1]
// 008b5bce  eb09                 jmp 0x8b5bd9
// 008b5bd0  8bc8                 mov ecx, eax
// 008b5bd2  e8b937fbff           call 0x869390
// 008b5bd7  8bf0                 mov esi, eax
// 008b5bd9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008b5bdd  6a01                 push 1
// 008b5bdf  50                   push eax
// 008b5be0  8d4c2424             lea ecx, [esp + 0x24]
// 008b5be4  8974242c             mov dword ptr [esp + 0x2c], esi
// 008b5be8  ff152c2aa400         call dword ptr [0xa42a2c]
// 008b5bee  4f                   dec edi
// 008b5bef  c644243402           mov byte ptr [esp + 0x34], 2
// 008b5bf4  897c243c             mov dword ptr [esp + 0x3c], edi
// 008b5bf8  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 008b5bfc  7d03                 jge 0x8b5c01
// 008b5bfe  46                   inc esi
// 008b5bff  eb02                 jmp 0x8b5c03
// 008b5c01  33f6                 xor esi, esi
// 008b5c03  56                   push esi
// 008b5c04  8bcb                 mov ecx, ebx
// 008b5c06  e87570f5ff           call 0x80cc80
// 008b5c0b  8bf8                 mov edi, eax
// 008b5c0d  8d4f20               lea ecx, [edi + 0x20]
// 008b5c10  51                   push ecx
// 008b5c11  8d4c2418             lea ecx, [esp + 0x18]
// 008b5c15  ff156425a400         call dword ptr [0xa42564]
// 008b5c1b  6a01                 push 1
// 008b5c1d  8d542424             lea edx, [esp + 0x24]
// 008b5c21  52                   push edx
// 008b5c22  8d4c241c             lea ecx, [esp + 0x1c]
// 008b5c26  ff15601fa400         call dword ptr [0xa41f60]
// 008b5c2c  8bc8                 mov ecx, eax
// 008b5c2e  ff15c82da400         call dword ptr [0xa42dc8]
// 008b5c34  50                   push eax
// 008b5c35  8d4c2420             lea ecx, [esp + 0x20]
// 008b5c39  ff150820a400         call dword ptr [0xa42008]
// 008b5c3f  85c0                 test eax, eax
// 008b5c41  8d4c2420             lea ecx, [esp + 0x20]
// 008b5c45  0f94c3               sete bl
// 008b5c48  ff15082ea400         call dword ptr [0xa42e08]
// 008b5c4e  84db                 test bl, bl
// 008b5c50  750c                 jne 0x8b5c5e
// 008b5c52  3b742424             cmp esi, dword ptr [esp + 0x24]
// 008b5c56  7475                 je 0x8b5ccd
// 008b5c58  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008b5c5c  eb9a                 jmp 0x8b5bf8
// 008b5c5e  8d4c2414             lea ecx, [esp + 0x14]
// 008b5c62  89bd88000000         mov dword ptr [ebp + 0x88], edi
// 008b5c68  ff15c82da400         call dword ptr [0xa42dc8]
// 008b5c6e  50                   push eax
// 008b5c6f  8bcd                 mov ecx, ebp
// 008b5c71  e86af8ffff           call 0x8b54e0
// 008b5c76  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008b5c79  8b35c019a400         mov esi, dword ptr [0xa419c0]
// 008b5c7f  6aff                 push -1
// 008b5c81  6a00                 push 0
// 008b5c83  68b1000000           push 0xb1
// 008b5c88  50                   push eax
// 008b5c89  ffd6                 call esi
// 008b5c8b  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008b5c8e  6a00                 push 0
// 008b5c90  6a00                 push 0
// 008b5c92  68b7000000           push 0xb7
// 008b5c97  51                   push ecx
// 008b5c98  ffd6                 call esi
// 008b5c9a  8d4c2414             lea ecx, [esp + 0x14]
// 008b5c9e  ff15c82da400         call dword ptr [0xa42dc8]
// 008b5ca4  50                   push eax
// 008b5ca5  8d4c241c             lea ecx, [esp + 0x1c]
// 008b5ca9  ff150820a400         call dword ptr [0xa42008]
// 008b5caf  85c0                 test eax, eax
// 008b5cb1  741a                 je 0x8b5ccd
// 008b5cb3  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008b5cb6  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008b5cb9  8b11                 mov edx, dword ptr [ecx]
// 008b5cbb  8b9234020000         mov edx, dword ptr [edx + 0x234]
// 008b5cc1  57                   push edi
// 008b5cc2  50                   push eax
// 008b5cc3  8b4564               mov eax, dword ptr [ebp + 0x64]
// 008b5cc6  50                   push eax
// 008b5cc7  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 008b5cca  50                   push eax
// 008b5ccb  ffd2                 call edx
// 008b5ccd  8d4c241c             lea ecx, [esp + 0x1c]
// 008b5cd1  ff15082ea400         call dword ptr [0xa42e08]
// 008b5cd7  8d4c2418             lea ecx, [esp + 0x18]
// 008b5cdb  ff15082ea400         call dword ptr [0xa42e08]
// 008b5ce1  8d4c2414             lea ecx, [esp + 0x14]
// 008b5ce5  ff15082ea400         call dword ptr [0xa42e08]
// 008b5ceb  eb10                 jmp 0x8b5cfd
// 008b5ced  8bcd                 mov ecx, ebp
// 008b5cef  e83a49f5ff           call 0x80a62e
// 008b5cf4  eb07                 jmp 0x8b5cfd
// 008b5cf6  6a00                 push 0
// 008b5cf8  e83330f8ff           call 0x838d30
// 008b5cfd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b5d01  64890d00000000       mov dword ptr fs:[0], ecx
// 008b5d08  59                   pop ecx
// 008b5d09  5f                   pop edi
// 008b5d0a  5e                   pop esi
// 008b5d0b  5d                   pop ebp
// 008b5d0c  5b                   pop ebx
// 008b5d0d  83c424               add esp, 0x24
// 008b5d10  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPReportInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports-rtm Source\ReportControl\XTPReportInplaceControls.cpp
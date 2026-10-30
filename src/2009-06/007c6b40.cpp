// roc 2009-06 007c6b40  unit: CXTPReportInplaceEdit  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c6b40
//
// 007c6b40  6aff                 push -1
// 007c6b42  68bbe08700           push 0x87e0bb
// 007c6b47  64a100000000         mov eax, dword ptr fs:[0]
// 007c6b4d  50                   push eax
// 007c6b4e  83ec18               sub esp, 0x18
// 007c6b51  53                   push ebx
// 007c6b52  55                   push ebp
// 007c6b53  56                   push esi
// 007c6b54  57                   push edi
// 007c6b55  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c6b5a  33c4                 xor eax, esp
// 007c6b5c  50                   push eax
// 007c6b5d  8d44242c             lea eax, [esp + 0x2c]
// 007c6b61  64a300000000         mov dword ptr fs:[0], eax
// 007c6b67  8be9                 mov ebp, ecx
// 007c6b69  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 007c6b6c  85c9                 test ecx, ecx
// 007c6b6e  0f84f9010000         je 0x7c6d6d
// 007c6b74  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007c6b78  83f809               cmp eax, 9
// 007c6b7b  0f84ec010000         je 0x7c6d6d
// 007c6b81  83f81b               cmp eax, 0x1b
// 007c6b84  0f84dc010000         je 0x7c6d66
// 007c6b8a  83f80d               cmp eax, 0xd
// 007c6b8d  0f84d3010000         je 0x7c6d66
// 007c6b93  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 007c6b96  85c9                 test ecx, ecx
// 007c6b98  0f84bf010000         je 0x7c6d5d
// 007c6b9e  8b4560               mov eax, dword ptr [ebp + 0x60]
// 007c6ba1  85c0                 test eax, eax
// 007c6ba3  0f84b4010000         je 0x7c6d5d
// 007c6ba9  50                   push eax
// 007c6baa  e8f199f7ff           call 0x7405a0
// 007c6baf  83782400             cmp dword ptr [eax + 0x24], 0
// 007c6bb3  0f84a4010000         je 0x7c6d5d
// 007c6bb9  8b4560               mov eax, dword ptr [ebp + 0x60]
// 007c6bbc  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 007c6bbf  50                   push eax
// 007c6bc0  e8db99f7ff           call 0x7405a0
// 007c6bc5  8bf0                 mov esi, eax
// 007c6bc7  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 007c6bca  8bcb                 mov ecx, ebx
// 007c6bcc  895c2428             mov dword ptr [esp + 0x28], ebx
// 007c6bd0  e84b160000           call 0x7c8220
// 007c6bd5  8bf8                 mov edi, eax
// 007c6bd7  85ff                 test edi, edi
// 007c6bd9  0f8e7e010000         jle 0x7c6d5d
// 007c6bdf  8d4c2414             lea ecx, [esp + 0x14]
// 007c6be3  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c6be9  8d4c2418             lea ecx, [esp + 0x18]
// 007c6bed  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007c6bf5  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c6bfb  8d4c2414             lea ecx, [esp + 0x14]
// 007c6bff  51                   push ecx
// 007c6c00  8bcd                 mov ecx, ebp
// 007c6c02  c644243801           mov byte ptr [esp + 0x38], 1
// 007c6c07  e81424f5ff           call 0x719020
// 007c6c0c  8d542414             lea edx, [esp + 0x14]
// 007c6c10  52                   push edx
// 007c6c11  8d4c241c             lea ecx, [esp + 0x1c]
// 007c6c15  ff1508fa8900         call dword ptr [0x89fa08]
// 007c6c1b  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 007c6c21  85c0                 test eax, eax
// 007c6c23  751b                 jne 0x7c6c40
// 007c6c25  8d4c2414             lea ecx, [esp + 0x14]
// 007c6c29  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c6c2f  50                   push eax
// 007c6c30  8bce                 mov ecx, esi
// 007c6c32  e8598cf7ff           call 0x73f890
// 007c6c37  85c0                 test eax, eax
// 007c6c39  7505                 jne 0x7c6c40
// 007c6c3b  8d77ff               lea esi, [edi - 1]
// 007c6c3e  eb09                 jmp 0x7c6c49
// 007c6c40  8bc8                 mov ecx, eax
// 007c6c42  e8d9150000           call 0x7c8220
// 007c6c47  8bf0                 mov esi, eax
// 007c6c49  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007c6c4d  6a01                 push 1
// 007c6c4f  50                   push eax
// 007c6c50  8d4c2424             lea ecx, [esp + 0x24]
// 007c6c54  8974242c             mov dword ptr [esp + 0x2c], esi
// 007c6c58  ff15dcf88900         call dword ptr [0x89f8dc]
// 007c6c5e  4f                   dec edi
// 007c6c5f  c644243402           mov byte ptr [esp + 0x34], 2
// 007c6c64  897c243c             mov dword ptr [esp + 0x3c], edi
// 007c6c68  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 007c6c6c  7d03                 jge 0x7c6c71
// 007c6c6e  46                   inc esi
// 007c6c6f  eb02                 jmp 0x7c6c73
// 007c6c71  33f6                 xor esi, esi
// 007c6c73  56                   push esi
// 007c6c74  8bcb                 mov ecx, ebx
// 007c6c76  e8e5140000           call 0x7c8160
// 007c6c7b  8bf8                 mov edi, eax
// 007c6c7d  8d4f20               lea ecx, [edi + 0x20]
// 007c6c80  51                   push ecx
// 007c6c81  8d4c2418             lea ecx, [esp + 0x18]
// 007c6c85  ff1508fa8900         call dword ptr [0x89fa08]
// 007c6c8b  6a01                 push 1
// 007c6c8d  8d542424             lea edx, [esp + 0x24]
// 007c6c91  52                   push edx
// 007c6c92  8d4c241c             lea ecx, [esp + 0x1c]
// 007c6c96  ff1510f48900         call dword ptr [0x89f410]
// 007c6c9c  8bc8                 mov ecx, eax
// 007c6c9e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c6ca4  50                   push eax
// 007c6ca5  8d4c2420             lea ecx, [esp + 0x20]
// 007c6ca9  ff158cf38900         call dword ptr [0x89f38c]
// 007c6caf  85c0                 test eax, eax
// 007c6cb1  8d4c2420             lea ecx, [esp + 0x20]
// 007c6cb5  0f94c3               sete bl
// 007c6cb8  ff1510fd8900         call dword ptr [0x89fd10]
// 007c6cbe  84db                 test bl, bl
// 007c6cc0  750c                 jne 0x7c6cce
// 007c6cc2  3b742424             cmp esi, dword ptr [esp + 0x24]
// 007c6cc6  7475                 je 0x7c6d3d
// 007c6cc8  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007c6ccc  eb9a                 jmp 0x7c6c68
// 007c6cce  8d4c2414             lea ecx, [esp + 0x14]
// 007c6cd2  89bd88000000         mov dword ptr [ebp + 0x88], edi
// 007c6cd8  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c6cde  50                   push eax
// 007c6cdf  8bcd                 mov ecx, ebp
// 007c6ce1  e86af8ffff           call 0x7c6550
// 007c6ce6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007c6ce9  8b3590ee8900         mov esi, dword ptr [0x89ee90]
// 007c6cef  6aff                 push -1
// 007c6cf1  6a00                 push 0
// 007c6cf3  68b1000000           push 0xb1
// 007c6cf8  50                   push eax
// 007c6cf9  ffd6                 call esi
// 007c6cfb  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 007c6cfe  6a00                 push 0
// 007c6d00  6a00                 push 0
// 007c6d02  68b7000000           push 0xb7
// 007c6d07  51                   push ecx
// 007c6d08  ffd6                 call esi
// 007c6d0a  8d4c2414             lea ecx, [esp + 0x14]
// 007c6d0e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c6d14  50                   push eax
// 007c6d15  8d4c241c             lea ecx, [esp + 0x1c]
// 007c6d19  ff158cf38900         call dword ptr [0x89f38c]
// 007c6d1f  85c0                 test eax, eax
// 007c6d21  741a                 je 0x7c6d3d
// 007c6d23  8b4560               mov eax, dword ptr [ebp + 0x60]
// 007c6d26  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 007c6d29  8b11                 mov edx, dword ptr [ecx]
// 007c6d2b  8b9234020000         mov edx, dword ptr [edx + 0x234]
// 007c6d31  57                   push edi
// 007c6d32  50                   push eax
// 007c6d33  8b4564               mov eax, dword ptr [ebp + 0x64]
// 007c6d36  50                   push eax
// 007c6d37  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 007c6d3a  50                   push eax
// 007c6d3b  ffd2                 call edx
// 007c6d3d  8d4c241c             lea ecx, [esp + 0x1c]
// 007c6d41  ff1510fd8900         call dword ptr [0x89fd10]
// 007c6d47  8d4c2418             lea ecx, [esp + 0x18]
// 007c6d4b  ff1510fd8900         call dword ptr [0x89fd10]
// 007c6d51  8d4c2414             lea ecx, [esp + 0x14]
// 007c6d55  ff1510fd8900         call dword ptr [0x89fd10]
// 007c6d5b  eb10                 jmp 0x7c6d6d
// 007c6d5d  8bcd                 mov ecx, ebp
// 007c6d5f  e8a422f5ff           call 0x719008
// 007c6d64  eb07                 jmp 0x7c6d6d
// 007c6d66  6a00                 push 0
// 007c6d68  e8d32ff8ff           call 0x749d40
// 007c6d6d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c6d71  64890d00000000       mov dword ptr fs:[0], ecx
// 007c6d78  59                   pop ecx
// 007c6d79  5f                   pop edi
// 007c6d7a  5e                   pop esi
// 007c6d7b  5d                   pop ebp
// 007c6d7c  5b                   pop ebx
// 007c6d7d  83c424               add esp, 0x24
// 007c6d80  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPReportInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports-rtm Source\ReportControl\XTPReportInplaceControls.cpp
// from server: 100% by king_originala
// roc 2008-06 0074d870  unit: CXTPReportInplaceEdit  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d870
//
// 0074d870  6aff                 push -1
// 0074d872  686b867e00           push 0x7e866b
// 0074d877  64a100000000         mov eax, dword ptr fs:[0]
// 0074d87d  50                   push eax
// 0074d87e  83ec18               sub esp, 0x18
// 0074d881  53                   push ebx
// 0074d882  55                   push ebp
// 0074d883  56                   push esi
// 0074d884  57                   push edi
// 0074d885  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0074d88a  33c4                 xor eax, esp
// 0074d88c  50                   push eax
// 0074d88d  8d44242c             lea eax, [esp + 0x2c]
// 0074d891  64a300000000         mov dword ptr fs:[0], eax
// 0074d897  8be9                 mov ebp, ecx
// 0074d899  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 0074d89c  85c9                 test ecx, ecx
// 0074d89e  0f84f9010000         je 0x74da9d
// 0074d8a4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0074d8a8  83f809               cmp eax, 9
// 0074d8ab  0f84ec010000         je 0x74da9d
// 0074d8b1  83f81b               cmp eax, 0x1b
// 0074d8b4  0f84dc010000         je 0x74da96
// 0074d8ba  83f80d               cmp eax, 0xd
// 0074d8bd  0f84d3010000         je 0x74da96
// 0074d8c3  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 0074d8c6  85c9                 test ecx, ecx
// 0074d8c8  0f84bf010000         je 0x74da8d
// 0074d8ce  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0074d8d1  85c0                 test eax, eax
// 0074d8d3  0f84b4010000         je 0x74da8d
// 0074d8d9  50                   push eax
// 0074d8da  e821a7f7ff           call 0x6c8000
// 0074d8df  83782400             cmp dword ptr [eax + 0x24], 0
// 0074d8e3  0f84a4010000         je 0x74da8d
// 0074d8e9  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0074d8ec  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 0074d8ef  50                   push eax
// 0074d8f0  e80ba7f7ff           call 0x6c8000
// 0074d8f5  8bf0                 mov esi, eax
// 0074d8f7  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 0074d8fa  8bcb                 mov ecx, ebx
// 0074d8fc  895c2428             mov dword ptr [esp + 0x28], ebx
// 0074d900  e89bccfaff           call 0x6fa5a0
// 0074d905  8bf8                 mov edi, eax
// 0074d907  85ff                 test edi, edi
// 0074d909  0f8e7e010000         jle 0x74da8d
// 0074d90f  8d4c2414             lea ecx, [esp + 0x14]
// 0074d913  ff15043f8000         call dword ptr [0x803f04]
// 0074d919  8d4c2418             lea ecx, [esp + 0x18]
// 0074d91d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0074d925  ff15043f8000         call dword ptr [0x803f04]
// 0074d92b  8d4c2414             lea ecx, [esp + 0x14]
// 0074d92f  51                   push ecx
// 0074d930  8bcd                 mov ecx, ebp
// 0074d932  c644243801           mov byte ptr [esp + 0x38], 1
// 0074d937  e83e33f5ff           call 0x6a0c7a
// 0074d93c  8d542414             lea edx, [esp + 0x14]
// 0074d940  52                   push edx
// 0074d941  8d4c241c             lea ecx, [esp + 0x1c]
// 0074d945  ff1544318000         call dword ptr [0x803144]
// 0074d94b  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 0074d951  85c0                 test eax, eax
// 0074d953  751b                 jne 0x74d970
// 0074d955  8d4c2414             lea ecx, [esp + 0x14]
// 0074d959  ff15e03e8000         call dword ptr [0x803ee0]
// 0074d95f  50                   push eax
// 0074d960  8bce                 mov ecx, esi
// 0074d962  e88999f7ff           call 0x6c72f0
// 0074d967  85c0                 test eax, eax
// 0074d969  7505                 jne 0x74d970
// 0074d96b  8d77ff               lea esi, [edi - 1]
// 0074d96e  eb09                 jmp 0x74d979
// 0074d970  8bc8                 mov ecx, eax
// 0074d972  e829ccfaff           call 0x6fa5a0
// 0074d977  8bf0                 mov esi, eax
// 0074d979  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0074d97d  6a01                 push 1
// 0074d97f  50                   push eax
// 0074d980  8d4c2424             lea ecx, [esp + 0x24]
// 0074d984  8974242c             mov dword ptr [esp + 0x2c], esi
// 0074d988  ff156c378000         call dword ptr [0x80376c]
// 0074d98e  4f                   dec edi
// 0074d98f  c644243402           mov byte ptr [esp + 0x34], 2
// 0074d994  897c243c             mov dword ptr [esp + 0x3c], edi
// 0074d998  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 0074d99c  7d03                 jge 0x74d9a1
// 0074d99e  46                   inc esi
// 0074d99f  eb02                 jmp 0x74d9a3
// 0074d9a1  33f6                 xor esi, esi
// 0074d9a3  56                   push esi
// 0074d9a4  8bcb                 mov ecx, ebx
// 0074d9a6  e8954cfcff           call 0x712640
// 0074d9ab  8bf8                 mov edi, eax
// 0074d9ad  8d4f20               lea ecx, [edi + 0x20]
// 0074d9b0  51                   push ecx
// 0074d9b1  8d4c2418             lea ecx, [esp + 0x18]
// 0074d9b5  ff1544318000         call dword ptr [0x803144]
// 0074d9bb  6a01                 push 1
// 0074d9bd  8d542424             lea edx, [esp + 0x24]
// 0074d9c1  52                   push edx
// 0074d9c2  8d4c241c             lea ecx, [esp + 0x1c]
// 0074d9c6  ff1580368000         call dword ptr [0x803680]
// 0074d9cc  8bc8                 mov ecx, eax
// 0074d9ce  ff15e03e8000         call dword ptr [0x803ee0]
// 0074d9d4  50                   push eax
// 0074d9d5  8d4c2420             lea ecx, [esp + 0x20]
// 0074d9d9  ff1528368000         call dword ptr [0x803628]
// 0074d9df  85c0                 test eax, eax
// 0074d9e1  8d4c2420             lea ecx, [esp + 0x20]
// 0074d9e5  0f94c3               sete bl
// 0074d9e8  ff15143f8000         call dword ptr [0x803f14]
// 0074d9ee  84db                 test bl, bl
// 0074d9f0  750c                 jne 0x74d9fe
// 0074d9f2  3b742424             cmp esi, dword ptr [esp + 0x24]
// 0074d9f6  7475                 je 0x74da6d
// 0074d9f8  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0074d9fc  eb9a                 jmp 0x74d998
// 0074d9fe  8d4c2414             lea ecx, [esp + 0x14]
// 0074da02  89bd88000000         mov dword ptr [ebp + 0x88], edi
// 0074da08  ff15e03e8000         call dword ptr [0x803ee0]
// 0074da0e  50                   push eax
// 0074da0f  8bcd                 mov ecx, ebp
// 0074da11  e87af8ffff           call 0x74d290
// 0074da16  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0074da19  8b35142e8000         mov esi, dword ptr [0x802e14]
// 0074da1f  6aff                 push -1
// 0074da21  6a00                 push 0
// 0074da23  68b1000000           push 0xb1
// 0074da28  50                   push eax
// 0074da29  ffd6                 call esi
// 0074da2b  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0074da2e  6a00                 push 0
// 0074da30  6a00                 push 0
// 0074da32  68b7000000           push 0xb7
// 0074da37  51                   push ecx
// 0074da38  ffd6                 call esi
// 0074da3a  8d4c2414             lea ecx, [esp + 0x14]
// 0074da3e  ff15e03e8000         call dword ptr [0x803ee0]
// 0074da44  50                   push eax
// 0074da45  8d4c241c             lea ecx, [esp + 0x1c]
// 0074da49  ff1528368000         call dword ptr [0x803628]
// 0074da4f  85c0                 test eax, eax
// 0074da51  741a                 je 0x74da6d
// 0074da53  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0074da56  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 0074da59  8b11                 mov edx, dword ptr [ecx]
// 0074da5b  8b9234020000         mov edx, dword ptr [edx + 0x234]
// 0074da61  57                   push edi
// 0074da62  50                   push eax
// 0074da63  8b4564               mov eax, dword ptr [ebp + 0x64]
// 0074da66  50                   push eax
// 0074da67  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 0074da6a  50                   push eax
// 0074da6b  ffd2                 call edx
// 0074da6d  8d4c241c             lea ecx, [esp + 0x1c]
// 0074da71  ff15143f8000         call dword ptr [0x803f14]
// 0074da77  8d4c2418             lea ecx, [esp + 0x18]
// 0074da7b  ff15143f8000         call dword ptr [0x803f14]
// 0074da81  8d4c2414             lea ecx, [esp + 0x14]
// 0074da85  ff15143f8000         call dword ptr [0x803f14]
// 0074da8b  eb10                 jmp 0x74da9d
// 0074da8d  8bcd                 mov ecx, ebp
// 0074da8f  e8d431f5ff           call 0x6a0c68
// 0074da94  eb07                 jmp 0x74da9d
// 0074da96  6a00                 push 0
// 0074da98  e8433bf8ff           call 0x6d15e0
// 0074da9d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0074daa1  64890d00000000       mov dword ptr fs:[0], ecx
// 0074daa8  59                   pop ecx
// 0074daa9  5f                   pop edi
// 0074daaa  5e                   pop esi
// 0074daab  5d                   pop ebp
// 0074daac  5b                   pop ebx
// 0074daad  83c424               add esp, 0x24
// 0074dab0  c20c00               ret 0xc

// from server: 91% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports-rtm Source\ReportControl\XTPReportInplaceControls.cpp


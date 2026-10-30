// roc 2009-12 008a1950  unit: CXTPReportInplaceEdit  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1950
//
// 008a1950  6aff                 push -1
// 008a1952  682b229600           push 0x96222b
// 008a1957  64a100000000         mov eax, dword ptr fs:[0]
// 008a195d  50                   push eax
// 008a195e  83ec18               sub esp, 0x18
// 008a1961  53                   push ebx
// 008a1962  55                   push ebp
// 008a1963  56                   push esi
// 008a1964  57                   push edi
// 008a1965  a10052b600           mov eax, dword ptr [0xb65200]
// 008a196a  33c4                 xor eax, esp
// 008a196c  50                   push eax
// 008a196d  8d44242c             lea eax, [esp + 0x2c]
// 008a1971  64a300000000         mov dword ptr fs:[0], eax
// 008a1977  8be9                 mov ebp, ecx
// 008a1979  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008a197c  85c9                 test ecx, ecx
// 008a197e  0f84f9010000         je 0x8a1b7d
// 008a1984  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a1988  83f809               cmp eax, 9
// 008a198b  0f84ec010000         je 0x8a1b7d
// 008a1991  83f81b               cmp eax, 0x1b
// 008a1994  0f84dc010000         je 0x8a1b76
// 008a199a  83f80d               cmp eax, 0xd
// 008a199d  0f84d3010000         je 0x8a1b76
// 008a19a3  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 008a19a6  85c9                 test ecx, ecx
// 008a19a8  0f84bf010000         je 0x8a1b6d
// 008a19ae  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008a19b1  85c0                 test eax, eax
// 008a19b3  0f84b4010000         je 0x8a1b6d
// 008a19b9  50                   push eax
// 008a19ba  e8f19af7ff           call 0x81b4b0
// 008a19bf  83782400             cmp dword ptr [eax + 0x24], 0
// 008a19c3  0f84a4010000         je 0x8a1b6d
// 008a19c9  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008a19cc  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 008a19cf  50                   push eax
// 008a19d0  e8db9af7ff           call 0x81b4b0
// 008a19d5  8bf0                 mov esi, eax
// 008a19d7  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 008a19da  8bcb                 mov ecx, ebx
// 008a19dc  895c2428             mov dword ptr [esp + 0x28], ebx
// 008a19e0  e89bc2faff           call 0x84dc80
// 008a19e5  8bf8                 mov edi, eax
// 008a19e7  85ff                 test edi, edi
// 008a19e9  0f8e7e010000         jle 0x8a1b6d
// 008a19ef  8d4c2414             lea ecx, [esp + 0x14]
// 008a19f3  ff1574de9800         call dword ptr [0x98de74]
// 008a19f9  8d4c2418             lea ecx, [esp + 0x18]
// 008a19fd  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008a1a05  ff1574de9800         call dword ptr [0x98de74]
// 008a1a0b  8d4c2414             lea ecx, [esp + 0x14]
// 008a1a0f  51                   push ecx
// 008a1a10  8bcd                 mov ecx, ebp
// 008a1a12  c644243801           mov byte ptr [esp + 0x38], 1
// 008a1a17  e82c24f5ff           call 0x7f3e48
// 008a1a1c  8d542414             lea edx, [esp + 0x14]
// 008a1a20  52                   push edx
// 008a1a21  8d4c241c             lea ecx, [esp + 0x1c]
// 008a1a25  ff1538d59800         call dword ptr [0x98d538]
// 008a1a2b  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008a1a31  85c0                 test eax, eax
// 008a1a33  751b                 jne 0x8a1a50
// 008a1a35  8d4c2414             lea ecx, [esp + 0x14]
// 008a1a39  ff1580de9800         call dword ptr [0x98de80]
// 008a1a3f  50                   push eax
// 008a1a40  8bce                 mov ecx, esi
// 008a1a42  e8598df7ff           call 0x81a7a0
// 008a1a47  85c0                 test eax, eax
// 008a1a49  7505                 jne 0x8a1a50
// 008a1a4b  8d77ff               lea esi, [edi - 1]
// 008a1a4e  eb09                 jmp 0x8a1a59
// 008a1a50  8bc8                 mov ecx, eax
// 008a1a52  e829c2faff           call 0x84dc80
// 008a1a57  8bf0                 mov esi, eax
// 008a1a59  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a1a5d  6a01                 push 1
// 008a1a5f  50                   push eax
// 008a1a60  8d4c2424             lea ecx, [esp + 0x24]
// 008a1a64  8974242c             mov dword ptr [esp + 0x2c], esi
// 008a1a68  ff15f0da9800         call dword ptr [0x98daf0]
// 008a1a6e  4f                   dec edi
// 008a1a6f  c644243402           mov byte ptr [esp + 0x34], 2
// 008a1a74  897c243c             mov dword ptr [esp + 0x3c], edi
// 008a1a78  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 008a1a7c  7d03                 jge 0x8a1a81
// 008a1a7e  46                   inc esi
// 008a1a7f  eb02                 jmp 0x8a1a83
// 008a1a81  33f6                 xor esi, esi
// 008a1a83  56                   push esi
// 008a1a84  8bcb                 mov ecx, ebx
// 008a1a86  e8a5140000           call 0x8a2f30
// 008a1a8b  8bf8                 mov edi, eax
// 008a1a8d  8d4f20               lea ecx, [edi + 0x20]
// 008a1a90  51                   push ecx
// 008a1a91  8d4c2418             lea ecx, [esp + 0x18]
// 008a1a95  ff1538d59800         call dword ptr [0x98d538]
// 008a1a9b  6a01                 push 1
// 008a1a9d  8d542424             lea edx, [esp + 0x24]
// 008a1aa1  52                   push edx
// 008a1aa2  8d4c241c             lea ecx, [esp + 0x1c]
// 008a1aa6  ff1544cf9800         call dword ptr [0x98cf44]
// 008a1aac  8bc8                 mov ecx, eax
// 008a1aae  ff1580de9800         call dword ptr [0x98de80]
// 008a1ab4  50                   push eax
// 008a1ab5  8d4c2420             lea ecx, [esp + 0x20]
// 008a1ab9  ff15d4cf9800         call dword ptr [0x98cfd4]
// 008a1abf  85c0                 test eax, eax
// 008a1ac1  8d4c2420             lea ecx, [esp + 0x20]
// 008a1ac5  0f94c3               sete bl
// 008a1ac8  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1ace  84db                 test bl, bl
// 008a1ad0  750c                 jne 0x8a1ade
// 008a1ad2  3b742424             cmp esi, dword ptr [esp + 0x24]
// 008a1ad6  7475                 je 0x8a1b4d
// 008a1ad8  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008a1adc  eb9a                 jmp 0x8a1a78
// 008a1ade  8d4c2414             lea ecx, [esp + 0x14]
// 008a1ae2  89bd88000000         mov dword ptr [ebp + 0x88], edi
// 008a1ae8  ff1580de9800         call dword ptr [0x98de80]
// 008a1aee  50                   push eax
// 008a1aef  8bcd                 mov ecx, ebp
// 008a1af1  e86af8ffff           call 0x8a1360
// 008a1af6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008a1af9  8b35c4cb9800         mov esi, dword ptr [0x98cbc4]
// 008a1aff  6aff                 push -1
// 008a1b01  6a00                 push 0
// 008a1b03  68b1000000           push 0xb1
// 008a1b08  50                   push eax
// 008a1b09  ffd6                 call esi
// 008a1b0b  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008a1b0e  6a00                 push 0
// 008a1b10  6a00                 push 0
// 008a1b12  68b7000000           push 0xb7
// 008a1b17  51                   push ecx
// 008a1b18  ffd6                 call esi
// 008a1b1a  8d4c2414             lea ecx, [esp + 0x14]
// 008a1b1e  ff1580de9800         call dword ptr [0x98de80]
// 008a1b24  50                   push eax
// 008a1b25  8d4c241c             lea ecx, [esp + 0x1c]
// 008a1b29  ff15d4cf9800         call dword ptr [0x98cfd4]
// 008a1b2f  85c0                 test eax, eax
// 008a1b31  741a                 je 0x8a1b4d
// 008a1b33  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008a1b36  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008a1b39  8b11                 mov edx, dword ptr [ecx]
// 008a1b3b  8b9234020000         mov edx, dword ptr [edx + 0x234]
// 008a1b41  57                   push edi
// 008a1b42  50                   push eax
// 008a1b43  8b4564               mov eax, dword ptr [ebp + 0x64]
// 008a1b46  50                   push eax
// 008a1b47  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 008a1b4a  50                   push eax
// 008a1b4b  ffd2                 call edx
// 008a1b4d  8d4c241c             lea ecx, [esp + 0x1c]
// 008a1b51  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1b57  8d4c2418             lea ecx, [esp + 0x18]
// 008a1b5b  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1b61  8d4c2414             lea ecx, [esp + 0x14]
// 008a1b65  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1b6b  eb10                 jmp 0x8a1b7d
// 008a1b6d  8bcd                 mov ecx, ebp
// 008a1b6f  e8bc22f5ff           call 0x7f3e30
// 008a1b74  eb07                 jmp 0x8a1b7d
// 008a1b76  6a00                 push 0
// 008a1b78  e8b32ff8ff           call 0x824b30
// 008a1b7d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a1b81  64890d00000000       mov dword ptr fs:[0], ecx
// 008a1b88  59                   pop ecx
// 008a1b89  5f                   pop edi
// 008a1b8a  5e                   pop esi
// 008a1b8b  5d                   pop ebp
// 008a1b8c  5b                   pop ebx
// 008a1b8d  83c424               add esp, 0x24
// 008a1b90  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPReportInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports-rtm Source\ReportControl\XTPReportInplaceControls.cpp
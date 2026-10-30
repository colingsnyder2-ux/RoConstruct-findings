// roc 2009-12 0083f500  unit: CXTPCustomizeSheet  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f500
//
// 0083f500  53                   push ebx
// 0083f501  55                   push ebp
// 0083f502  56                   push esi
// 0083f503  57                   push edi
// 0083f504  8bf1                 mov esi, ecx
// 0083f506  e81346fbff           call 0x7f3b1e
// 0083f50b  8b4004               mov eax, dword ptr [eax + 4]
// 0083f50e  6a00                 push 0
// 0083f510  8bc8                 mov ecx, eax
// 0083f512  e815730e00           call 0x92682c
// 0083f517  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0083f51d  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 0083f523  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 0083f526  85c0                 test eax, eax
// 0083f528  7504                 jne 0x83f52e
// 0083f52a  33ff                 xor edi, edi
// 0083f52c  eb03                 jmp 0x83f531
// 0083f52e  8b7820               mov edi, dword ptr [eax + 0x20]
// 0083f531  8b2db4cb9800         mov ebp, dword ptr [0x98cbb4]
// 0083f537  6a00                 push 0
// 0083f539  53                   push ebx
// 0083f53a  ffd5                 call ebp
// 0083f53c  33f6                 xor esi, esi
// 0083f53e  85ff                 test edi, edi
// 0083f540  7414                 je 0x83f556
// 0083f542  57                   push edi
// 0083f543  ff154ccb9800         call dword ptr [0x98cb4c]
// 0083f549  85c0                 test eax, eax
// 0083f54b  7409                 je 0x83f556
// 0083f54d  56                   push esi
// 0083f54e  57                   push edi
// 0083f54f  ffd5                 call ebp
// 0083f551  be01000000           mov esi, 1
// 0083f556  e8c345fbff           call 0x7f3b1e
// 0083f55b  8b4004               mov eax, dword ptr [eax + 4]
// 0083f55e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083f562  8b4050               mov eax, dword ptr [eax + 0x50]
// 0083f565  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083f569  51                   push ecx
// 0083f56a  50                   push eax
// 0083f56b  52                   push edx
// 0083f56c  53                   push ebx
// 0083f56d  ff155ccc9800         call dword ptr [0x98cc5c]
// 0083f573  89442418             mov dword ptr [esp + 0x18], eax
// 0083f577  85f6                 test esi, esi
// 0083f579  7405                 je 0x83f580
// 0083f57b  6a01                 push 1
// 0083f57d  57                   push edi
// 0083f57e  ffd5                 call ebp
// 0083f580  53                   push ebx
// 0083f581  ff1584cc9800         call dword ptr [0x98cc84]
// 0083f587  85c0                 test eax, eax
// 0083f589  7405                 je 0x83f590
// 0083f58b  6a01                 push 1
// 0083f58d  53                   push ebx
// 0083f58e  ffd5                 call ebp
// 0083f590  e88945fbff           call 0x7f3b1e
// 0083f595  8b4004               mov eax, dword ptr [eax + 4]
// 0083f598  6a01                 push 1
// 0083f59a  8bc8                 mov ecx, eax
// 0083f59c  e88b720e00           call 0x92682c
// 0083f5a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083f5a5  5f                   pop edi
// 0083f5a6  5e                   pop esi
// 0083f5a7  5d                   pop ebp
// 0083f5a8  5b                   pop ebx
// 0083f5a9  c20800               ret 8
// copied from an identical function in another client (function ?MessageBoxA@CXTPCustomizeSheet@@QAEHPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp
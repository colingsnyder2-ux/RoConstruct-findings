// roc 2011-06 00890ca0  unit: CXTPOffice2007Theme  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00890ca0
//
// 00890ca0  56                   push esi
// 00890ca1  8b742408             mov esi, dword ptr [esp + 8]
// 00890ca5  85f6                 test esi, esi
// 00890ca7  7506                 jne 0x890caf
// 00890ca9  33c0                 xor eax, eax
// 00890cab  5e                   pop esi
// 00890cac  c20400               ret 4
// 00890caf  53                   push ebx
// 00890cb0  57                   push edi
// 00890cb1  8bce                 mov ecx, esi
// 00890cb3  e860b91300           call 0x9cc618
// 00890cb8  8bce                 mov ecx, esi
// 00890cba  8bf8                 mov edi, eax
// 00890cbc  e85db91300           call 0x9cc61e
// 00890cc1  8bd8                 mov ebx, eax
// 00890cc3  84db                 test bl, bl
// 00890cc5  7808                 js 0x890ccf
// 00890cc7  f7c700000800         test edi, 0x80000
// 00890ccd  7508                 jne 0x890cd7
// 00890ccf  5f                   pop edi
// 00890cd0  5b                   pop ebx
// 00890cd1  33c0                 xor eax, eax
// 00890cd3  5e                   pop esi
// 00890cd4  c20400               ret 4
// 00890cd7  8b4620               mov eax, dword ptr [esi + 0x20]
// 00890cda  6a00                 push 0
// 00890cdc  6a00                 push 0
// 00890cde  6a7f                 push 0x7f
// 00890ce0  50                   push eax
// 00890ce1  ff15c019a400         call dword ptr [0xa419c0]
// 00890ce7  85c0                 test eax, eax
// 00890ce9  7557                 jne 0x890d42
// 00890ceb  8b4620               mov eax, dword ptr [esi + 0x20]
// 00890cee  6ade                 push -0x22
// 00890cf0  50                   push eax
// 00890cf1  ff15841aa400         call dword ptr [0xa41a84]
// 00890cf7  85c0                 test eax, eax
// 00890cf9  7547                 jne 0x890d42
// 00890cfb  81e70000c000         and edi, 0xc00000
// 00890d01  81ff00004000         cmp edi, 0x400000
// 00890d07  7439                 je 0x890d42
// 00890d09  f6c301               test bl, 1
// 00890d0c  7534                 jne 0x890d42
// 00890d0e  8b7620               mov esi, dword ptr [esi + 0x20]
// 00890d11  8d4c2410             lea ecx, [esp + 0x10]
// 00890d15  51                   push ecx
// 00890d16  6a64                 push 0x64
// 00890d18  50                   push eax
// 00890d19  50                   push eax
// 00890d1a  50                   push eax
// 00890d1b  6a37                 push 0x37
// 00890d1d  56                   push esi
// 00890d1e  ff15581aa400         call dword ptr [0xa41a58]
// 00890d24  85c0                 test eax, eax
// 00890d26  7408                 je 0x890d30
// 00890d28  8b442410             mov eax, dword ptr [esp + 0x10]
// 00890d2c  85c0                 test eax, eax
// 00890d2e  7512                 jne 0x890d42
// 00890d30  e8e795f7ff           call 0x80a31c
// 00890d35  68057f0000           push 0x7f05
// 00890d3a  6a00                 push 0
// 00890d3c  ff15581ca400         call dword ptr [0xa41c58]
// 00890d42  5f                   pop edi
// 00890d43  5b                   pop ebx
// 00890d44  5e                   pop esi
// 00890d45  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameSmallIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
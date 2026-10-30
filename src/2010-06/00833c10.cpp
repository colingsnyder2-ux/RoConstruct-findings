// roc 2010-06 00833c10  unit: CXTPOffice2007Theme  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00833c10
//
// 00833c10  56                   push esi
// 00833c11  8b742408             mov esi, dword ptr [esp + 8]
// 00833c15  85f6                 test esi, esi
// 00833c17  7506                 jne 0x833c1f
// 00833c19  33c0                 xor eax, eax
// 00833c1b  5e                   pop esi
// 00833c1c  c20400               ret 4
// 00833c1f  53                   push ebx
// 00833c20  57                   push edi
// 00833c21  8bce                 mov ecx, esi
// 00833c23  e8b6911400           call 0x97cdde
// 00833c28  8bce                 mov ecx, esi
// 00833c2a  8bf8                 mov edi, eax
// 00833c2c  e8b3911400           call 0x97cde4
// 00833c31  8bd8                 mov ebx, eax
// 00833c33  84db                 test bl, bl
// 00833c35  7808                 js 0x833c3f
// 00833c37  f7c700000800         test edi, 0x80000
// 00833c3d  7508                 jne 0x833c47
// 00833c3f  5f                   pop edi
// 00833c40  5b                   pop ebx
// 00833c41  33c0                 xor eax, eax
// 00833c43  5e                   pop esi
// 00833c44  c20400               ret 4
// 00833c47  8b4620               mov eax, dword ptr [esi + 0x20]
// 00833c4a  6a00                 push 0
// 00833c4c  6a00                 push 0
// 00833c4e  6a7f                 push 0x7f
// 00833c50  50                   push eax
// 00833c51  ff1554ba9e00         call dword ptr [0x9eba54]
// 00833c57  85c0                 test eax, eax
// 00833c59  7557                 jne 0x833cb2
// 00833c5b  8b4620               mov eax, dword ptr [esi + 0x20]
// 00833c5e  6ade                 push -0x22
// 00833c60  50                   push eax
// 00833c61  ff15c0ba9e00         call dword ptr [0x9ebac0]
// 00833c67  85c0                 test eax, eax
// 00833c69  7547                 jne 0x833cb2
// 00833c6b  81e70000c000         and edi, 0xc00000
// 00833c71  81ff00004000         cmp edi, 0x400000
// 00833c77  7439                 je 0x833cb2
// 00833c79  f6c301               test bl, 1
// 00833c7c  7534                 jne 0x833cb2
// 00833c7e  8b7620               mov esi, dword ptr [esi + 0x20]
// 00833c81  8d4c2410             lea ecx, [esp + 0x10]
// 00833c85  51                   push ecx
// 00833c86  6a64                 push 0x64
// 00833c88  50                   push eax
// 00833c89  50                   push eax
// 00833c8a  50                   push eax
// 00833c8b  6a37                 push 0x37
// 00833c8d  56                   push esi
// 00833c8e  ff1534bb9e00         call dword ptr [0x9ebb34]
// 00833c94  85c0                 test eax, eax
// 00833c96  7408                 je 0x833ca0
// 00833c98  8b442410             mov eax, dword ptr [esp + 0x10]
// 00833c9c  85c0                 test eax, eax
// 00833c9e  7512                 jne 0x833cb2
// 00833ca0  e8b93ff7ff           call 0x7a7c5e
// 00833ca5  68057f0000           push 0x7f05
// 00833caa  6a00                 push 0
// 00833cac  ff1538bc9e00         call dword ptr [0x9ebc38]
// 00833cb2  5f                   pop edi
// 00833cb3  5b                   pop ebx
// 00833cb4  5e                   pop esi
// 00833cb5  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameSmallIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
// roc 2007-03 006a7c30  unit: seg_006a0000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a7c30
//
// 006a7c30  56                   push esi
// 006a7c31  8b742408             mov esi, dword ptr [esp + 8]
// 006a7c35  85f6                 test esi, esi
// 006a7c37  7506                 jne 0x6a7c3f
// 006a7c39  33c0                 xor eax, eax
// 006a7c3b  5e                   pop esi
// 006a7c3c  c20400               ret 4
// 006a7c3f  53                   push ebx
// 006a7c40  57                   push edi
// 006a7c41  8bce                 mov ecx, esi
// 006a7c43  e87c2f0900           call 0x73abc4
// 006a7c48  8bce                 mov ecx, esi
// 006a7c4a  8bf8                 mov edi, eax
// 006a7c4c  e8352e0900           call 0x73aa86
// 006a7c51  8bd8                 mov ebx, eax
// 006a7c53  84db                 test bl, bl
// 006a7c55  7808                 js 0x6a7c5f
// 006a7c57  f7c700000800         test edi, 0x80000
// 006a7c5d  7508                 jne 0x6a7c67
// 006a7c5f  5f                   pop edi
// 006a7c60  5b                   pop ebx
// 006a7c61  33c0                 xor eax, eax
// 006a7c63  5e                   pop esi
// 006a7c64  c20400               ret 4
// 006a7c67  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a7c6a  6a00                 push 0
// 006a7c6c  6a00                 push 0
// 006a7c6e  6a7f                 push 0x7f
// 006a7c70  50                   push eax
// 006a7c71  ff1550ee7700         call dword ptr [0x77ee50]
// 006a7c77  85c0                 test eax, eax
// 006a7c79  7557                 jne 0x6a7cd2
// 006a7c7b  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a7c7e  6ade                 push -0x22
// 006a7c80  50                   push eax
// 006a7c81  ff1594ef7700         call dword ptr [0x77ef94]
// 006a7c87  85c0                 test eax, eax
// 006a7c89  7547                 jne 0x6a7cd2
// 006a7c8b  81e70000c000         and edi, 0xc00000
// 006a7c91  81ff00004000         cmp edi, 0x400000
// 006a7c97  7439                 je 0x6a7cd2
// 006a7c99  f6c301               test bl, 1
// 006a7c9c  7534                 jne 0x6a7cd2
// 006a7c9e  8b7620               mov esi, dword ptr [esi + 0x20]
// 006a7ca1  8d4c2410             lea ecx, [esp + 0x10]
// 006a7ca5  51                   push ecx
// 006a7ca6  6a64                 push 0x64
// 006a7ca8  50                   push eax
// 006a7ca9  50                   push eax
// 006a7caa  50                   push eax
// 006a7cab  6a37                 push 0x37
// 006a7cad  56                   push esi
// 006a7cae  ff15c4ee7700         call dword ptr [0x77eec4]
// 006a7cb4  85c0                 test eax, eax
// 006a7cb6  7408                 je 0x6a7cc0
// 006a7cb8  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a7cbc  85c0                 test eax, eax
// 006a7cbe  7512                 jne 0x6a7cd2
// 006a7cc0  e8cb66f7ff           call 0x61e390
// 006a7cc5  68057f0000           push 0x7f05
// 006a7cca  6a00                 push 0
// 006a7ccc  ff1560ed7700         call dword ptr [0x77ed60]
// 006a7cd2  5f                   pop edi
// 006a7cd3  5b                   pop ebx
// 006a7cd4  5e                   pop esi
// 006a7cd5  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameSmallIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
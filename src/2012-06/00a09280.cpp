// roc 2012-06 00a09280  unit: CXTPOffice2007Theme  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a09280
//
// 00a09280  56                   push esi
// 00a09281  8b742408             mov esi, dword ptr [esp + 8]
// 00a09285  85f6                 test esi, esi
// 00a09287  7506                 jne 0xa0928f
// 00a09289  33c0                 xor eax, eax
// 00a0928b  5e                   pop esi
// 00a0928c  c20400               ret 4
// 00a0928f  53                   push ebx
// 00a09290  57                   push edi
// 00a09291  8bce                 mov ecx, esi
// 00a09293  e83a030900           call 0xa995d2
// 00a09298  8bce                 mov ecx, esi
// 00a0929a  8bf8                 mov edi, eax
// 00a0929c  e837030900           call 0xa995d8
// 00a092a1  8bd8                 mov ebx, eax
// 00a092a3  84db                 test bl, bl
// 00a092a5  7808                 js 0xa092af
// 00a092a7  f7c700000800         test edi, 0x80000
// 00a092ad  7508                 jne 0xa092b7
// 00a092af  5f                   pop edi
// 00a092b0  5b                   pop ebx
// 00a092b1  33c0                 xor eax, eax
// 00a092b3  5e                   pop esi
// 00a092b4  c20400               ret 4
// 00a092b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a092ba  6a00                 push 0
// 00a092bc  6a00                 push 0
// 00a092be  6a7f                 push 0x7f
// 00a092c0  50                   push eax
// 00a092c1  ff15043cb200         call dword ptr [0xb23c04]
// 00a092c7  85c0                 test eax, eax
// 00a092c9  7557                 jne 0xa09322
// 00a092cb  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a092ce  6ade                 push -0x22
// 00a092d0  50                   push eax
// 00a092d1  ff15903cb200         call dword ptr [0xb23c90]
// 00a092d7  85c0                 test eax, eax
// 00a092d9  7547                 jne 0xa09322
// 00a092db  81e70000c000         and edi, 0xc00000
// 00a092e1  81ff00004000         cmp edi, 0x400000
// 00a092e7  7439                 je 0xa09322
// 00a092e9  f6c301               test bl, 1
// 00a092ec  7534                 jne 0xa09322
// 00a092ee  8b7620               mov esi, dword ptr [esi + 0x20]
// 00a092f1  8d4c2410             lea ecx, [esp + 0x10]
// 00a092f5  51                   push ecx
// 00a092f6  6a64                 push 0x64
// 00a092f8  50                   push eax
// 00a092f9  50                   push eax
// 00a092fa  50                   push eax
// 00a092fb  6a37                 push 0x37
// 00a092fd  56                   push esi
// 00a092fe  ff15643cb200         call dword ptr [0xb23c64]
// 00a09304  85c0                 test eax, eax
// 00a09306  7408                 je 0xa09310
// 00a09308  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a0930c  85c0                 test eax, eax
// 00a0930e  7512                 jne 0xa09322
// 00a09310  e8bd90f7ff           call 0x9823d2
// 00a09315  68057f0000           push 0x7f05
// 00a0931a  6a00                 push 0
// 00a0931c  ff15fc3ab200         call dword ptr [0xb23afc]
// 00a09322  5f                   pop edi
// 00a09323  5b                   pop ebx
// 00a09324  5e                   pop esi
// 00a09325  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameSmallIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
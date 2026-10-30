// roc 2007-08 006bc1b0  unit: CXTPOffice2007Theme  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bc1b0
//
// 006bc1b0  56                   push esi
// 006bc1b1  8b742408             mov esi, dword ptr [esp + 8]
// 006bc1b5  85f6                 test esi, esi
// 006bc1b7  7506                 jne 0x6bc1bf
// 006bc1b9  33c0                 xor eax, eax
// 006bc1bb  5e                   pop esi
// 006bc1bc  c20400               ret 4
// 006bc1bf  53                   push ebx
// 006bc1c0  57                   push edi
// 006bc1c1  8bce                 mov ecx, esi
// 006bc1c3  e84ac20700           call 0x738412
// 006bc1c8  8bce                 mov ecx, esi
// 006bc1ca  8bf8                 mov edi, eax
// 006bc1cc  e851c10700           call 0x738322
// 006bc1d1  8bd8                 mov ebx, eax
// 006bc1d3  84db                 test bl, bl
// 006bc1d5  7808                 js 0x6bc1df
// 006bc1d7  f7c700000800         test edi, 0x80000
// 006bc1dd  7508                 jne 0x6bc1e7
// 006bc1df  5f                   pop edi
// 006bc1e0  5b                   pop ebx
// 006bc1e1  33c0                 xor eax, eax
// 006bc1e3  5e                   pop esi
// 006bc1e4  c20400               ret 4
// 006bc1e7  8b4620               mov eax, dword ptr [esi + 0x20]
// 006bc1ea  6a00                 push 0
// 006bc1ec  6a00                 push 0
// 006bc1ee  6a7f                 push 0x7f
// 006bc1f0  50                   push eax
// 006bc1f1  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006bc1f7  85c0                 test eax, eax
// 006bc1f9  7557                 jne 0x6bc252
// 006bc1fb  8b4620               mov eax, dword ptr [esi + 0x20]
// 006bc1fe  6ade                 push -0x22
// 006bc200  50                   push eax
// 006bc201  ff15bcec7700         call dword ptr [0x77ecbc]
// 006bc207  85c0                 test eax, eax
// 006bc209  7547                 jne 0x6bc252
// 006bc20b  81e70000c000         and edi, 0xc00000
// 006bc211  81ff00004000         cmp edi, 0x400000
// 006bc217  7439                 je 0x6bc252
// 006bc219  f6c301               test bl, 1
// 006bc21c  7534                 jne 0x6bc252
// 006bc21e  8b7620               mov esi, dword ptr [esi + 0x20]
// 006bc221  8d4c2410             lea ecx, [esp + 0x10]
// 006bc225  51                   push ecx
// 006bc226  6a64                 push 0x64
// 006bc228  50                   push eax
// 006bc229  50                   push eax
// 006bc22a  50                   push eax
// 006bc22b  6a37                 push 0x37
// 006bc22d  56                   push esi
// 006bc22e  ff1570ec7700         call dword ptr [0x77ec70]
// 006bc234  85c0                 test eax, eax
// 006bc236  7408                 je 0x6bc240
// 006bc238  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bc23c  85c0                 test eax, eax
// 006bc23e  7512                 jne 0x6bc252
// 006bc240  e8bd3cf7ff           call 0x62ff02
// 006bc245  68057f0000           push 0x7f05
// 006bc24a  6a00                 push 0
// 006bc24c  ff15d0ed7700         call dword ptr [0x77edd0]
// 006bc252  5f                   pop edi
// 006bc253  5b                   pop ebx
// 006bc254  5e                   pop esi
// 006bc255  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameSmallIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
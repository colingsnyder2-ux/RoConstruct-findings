// roc 2012-06 00a09330  unit: CXTPOffice2007Theme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a09330
//
// 00a09330  56                   push esi
// 00a09331  8b742408             mov esi, dword ptr [esp + 8]
// 00a09335  85f6                 test esi, esi
// 00a09337  7506                 jne 0xa0933f
// 00a09339  33c0                 xor eax, eax
// 00a0933b  5e                   pop esi
// 00a0933c  c20400               ret 4
// 00a0933f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a09342  6a00                 push 0
// 00a09344  6a01                 push 1
// 00a09346  6a7f                 push 0x7f
// 00a09348  50                   push eax
// 00a09349  ff15043cb200         call dword ptr [0xb23c04]
// 00a0934f  85c0                 test eax, eax
// 00a09351  750c                 jne 0xa0935f
// 00a09353  8b7620               mov esi, dword ptr [esi + 0x20]
// 00a09356  6af2                 push -0xe
// 00a09358  56                   push esi
// 00a09359  ff15903cb200         call dword ptr [0xb23c90]
// 00a0935f  5e                   pop esi
// 00a09360  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameLargeIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
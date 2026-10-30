// roc 2011-06 00890d50  unit: CXTPOffice2007Theme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00890d50
//
// 00890d50  56                   push esi
// 00890d51  8b742408             mov esi, dword ptr [esp + 8]
// 00890d55  85f6                 test esi, esi
// 00890d57  7506                 jne 0x890d5f
// 00890d59  33c0                 xor eax, eax
// 00890d5b  5e                   pop esi
// 00890d5c  c20400               ret 4
// 00890d5f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00890d62  6a00                 push 0
// 00890d64  6a01                 push 1
// 00890d66  6a7f                 push 0x7f
// 00890d68  50                   push eax
// 00890d69  ff15c019a400         call dword ptr [0xa419c0]
// 00890d6f  85c0                 test eax, eax
// 00890d71  750c                 jne 0x890d7f
// 00890d73  8b7620               mov esi, dword ptr [esi + 0x20]
// 00890d76  6af2                 push -0xe
// 00890d78  56                   push esi
// 00890d79  ff15841aa400         call dword ptr [0xa41a84]
// 00890d7f  5e                   pop esi
// 00890d80  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameLargeIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
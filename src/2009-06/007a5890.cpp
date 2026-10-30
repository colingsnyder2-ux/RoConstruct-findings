// roc 2009-06 007a5890  unit: CXTPOffice2007Theme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a5890
//
// 007a5890  56                   push esi
// 007a5891  8b742408             mov esi, dword ptr [esp + 8]
// 007a5895  85f6                 test esi, esi
// 007a5897  7506                 jne 0x7a589f
// 007a5899  33c0                 xor eax, eax
// 007a589b  5e                   pop esi
// 007a589c  c20400               ret 4
// 007a589f  8b4620               mov eax, dword ptr [esi + 0x20]
// 007a58a2  6a00                 push 0
// 007a58a4  6a01                 push 1
// 007a58a6  6a7f                 push 0x7f
// 007a58a8  50                   push eax
// 007a58a9  ff1590ee8900         call dword ptr [0x89ee90]
// 007a58af  85c0                 test eax, eax
// 007a58b1  750c                 jne 0x7a58bf
// 007a58b3  8b7620               mov esi, dword ptr [esi + 0x20]
// 007a58b6  6af2                 push -0xe
// 007a58b8  56                   push esi
// 007a58b9  ff1570ec8900         call dword ptr [0x89ec70]
// 007a58bf  5e                   pop esi
// 007a58c0  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameLargeIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
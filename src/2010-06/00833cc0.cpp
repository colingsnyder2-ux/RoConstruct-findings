// roc 2010-06 00833cc0  unit: CXTPOffice2007Theme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00833cc0
//
// 00833cc0  56                   push esi
// 00833cc1  8b742408             mov esi, dword ptr [esp + 8]
// 00833cc5  85f6                 test esi, esi
// 00833cc7  7506                 jne 0x833ccf
// 00833cc9  33c0                 xor eax, eax
// 00833ccb  5e                   pop esi
// 00833ccc  c20400               ret 4
// 00833ccf  8b4620               mov eax, dword ptr [esi + 0x20]
// 00833cd2  6a00                 push 0
// 00833cd4  6a01                 push 1
// 00833cd6  6a7f                 push 0x7f
// 00833cd8  50                   push eax
// 00833cd9  ff1554ba9e00         call dword ptr [0x9eba54]
// 00833cdf  85c0                 test eax, eax
// 00833ce1  750c                 jne 0x833cef
// 00833ce3  8b7620               mov esi, dword ptr [esi + 0x20]
// 00833ce6  6af2                 push -0xe
// 00833ce8  56                   push esi
// 00833ce9  ff15c0ba9e00         call dword ptr [0x9ebac0]
// 00833cef  5e                   pop esi
// 00833cf0  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameLargeIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
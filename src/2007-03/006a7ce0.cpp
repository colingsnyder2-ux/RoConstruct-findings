// roc 2007-03 006a7ce0  unit: seg_006a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a7ce0
//
// 006a7ce0  56                   push esi
// 006a7ce1  8b742408             mov esi, dword ptr [esp + 8]
// 006a7ce5  85f6                 test esi, esi
// 006a7ce7  7506                 jne 0x6a7cef
// 006a7ce9  33c0                 xor eax, eax
// 006a7ceb  5e                   pop esi
// 006a7cec  c20400               ret 4
// 006a7cef  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a7cf2  6a00                 push 0
// 006a7cf4  6a01                 push 1
// 006a7cf6  6a7f                 push 0x7f
// 006a7cf8  50                   push eax
// 006a7cf9  ff1550ee7700         call dword ptr [0x77ee50]
// 006a7cff  85c0                 test eax, eax
// 006a7d01  750c                 jne 0x6a7d0f
// 006a7d03  8b7620               mov esi, dword ptr [esi + 0x20]
// 006a7d06  6af2                 push -0xe
// 006a7d08  56                   push esi
// 006a7d09  ff1594ef7700         call dword ptr [0x77ef94]
// 006a7d0f  5e                   pop esi
// 006a7d10  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameLargeIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
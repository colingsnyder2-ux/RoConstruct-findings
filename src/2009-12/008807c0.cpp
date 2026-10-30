// roc 2009-12 008807c0  unit: CXTPOffice2007Theme  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008807c0
//
// 008807c0  56                   push esi
// 008807c1  8b742408             mov esi, dword ptr [esp + 8]
// 008807c5  85f6                 test esi, esi
// 008807c7  7506                 jne 0x8807cf
// 008807c9  33c0                 xor eax, eax
// 008807cb  5e                   pop esi
// 008807cc  c20400               ret 4
// 008807cf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008807d2  6a00                 push 0
// 008807d4  6a01                 push 1
// 008807d6  6a7f                 push 0x7f
// 008807d8  50                   push eax
// 008807d9  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008807df  85c0                 test eax, eax
// 008807e1  750c                 jne 0x8807ef
// 008807e3  8b7620               mov esi, dword ptr [esi + 0x20]
// 008807e6  6af2                 push -0xe
// 008807e8  56                   push esi
// 008807e9  ff1568cb9800         call dword ptr [0x98cb68]
// 008807ef  5e                   pop esi
// 008807f0  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameLargeIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
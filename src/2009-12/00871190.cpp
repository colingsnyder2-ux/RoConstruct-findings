// roc 2009-12 00871190  unit: CXTPRibbonTheme::CRibbonAppearanceSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871190
//
// 00871190  53                   push ebx
// 00871191  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00871195  56                   push esi
// 00871196  57                   push edi
// 00871197  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0087119b  8bf1                 mov esi, ecx
// 0087119d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008711a0  8b01                 mov eax, dword ptr [ecx]
// 008711a2  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008711a8  57                   push edi
// 008711a9  53                   push ebx
// 008711aa  ffd2                 call edx
// 008711ac  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008711af  8b7744               mov esi, dword ptr [edi + 0x44]
// 008711b2  8b11                 mov edx, dword ptr [ecx]
// 008711b4  6a01                 push 1
// 008711b6  83ec10               sub esp, 0x10
// 008711b9  8bc4                 mov eax, esp
// 008711bb  8930                 mov dword ptr [eax], esi
// 008711bd  8b7748               mov esi, dword ptr [edi + 0x48]
// 008711c0  897004               mov dword ptr [eax + 4], esi
// 008711c3  8b774c               mov esi, dword ptr [edi + 0x4c]
// 008711c6  897008               mov dword ptr [eax + 8], esi
// 008711c9  8b7750               mov esi, dword ptr [edi + 0x50]
// 008711cc  57                   push edi
// 008711cd  89700c               mov dword ptr [eax + 0xc], esi
// 008711d0  8b4268               mov eax, dword ptr [edx + 0x68]
// 008711d3  53                   push ebx
// 008711d4  ffd0                 call eax
// 008711d6  5f                   pop edi
// 008711d7  5e                   pop esi
// 008711d8  5b                   pop ebx
// 008711d9  c20800               ret 8
// copied from an identical function in another client (function ?DrawSingleButton@CRibbonAppearanceSet@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp
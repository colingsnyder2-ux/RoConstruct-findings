// roc 2009-12 00898060  unit: CXTPRibbonBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00898060
//
// 00898060  8b442404             mov eax, dword ptr [esp + 4]
// 00898064  56                   push esi
// 00898065  8bf1                 mov esi, ecx
// 00898067  8b16                 mov edx, dword ptr [esi]
// 00898069  898648020000         mov dword ptr [esi + 0x248], eax
// 0089806f  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00898075  ffd0                 call eax
// 00898077  8bce                 mov ecx, esi
// 00898079  e842d3ffff           call 0x8953c0
// 0089807e  85c0                 test eax, eax
// 00898080  7419                 je 0x89809b
// 00898082  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00898085  51                   push ecx
// 00898086  ff15a4ca9800         call dword ptr [0x98caa4]
// 0089808c  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00898092  e8193a0500           call 0x8ebab0
// 00898097  5e                   pop esi
// 00898098  c20400               ret 4
// 0089809b  e830ccffff           call 0x894cd0
// 008980a0  85c0                 test eax, eax
// 008980a2  7422                 je 0x8980c6
// 008980a4  8bb680020000         mov esi, dword ptr [esi + 0x280]
// 008980aa  8b5608               mov edx, dword ptr [esi + 8]
// 008980ad  52                   push edx
// 008980ae  e877baf5ff           call 0x7f3b2a
// 008980b3  8b4020               mov eax, dword ptr [eax + 0x20]
// 008980b6  6a00                 push 0
// 008980b8  6a00                 push 0
// 008980ba  6885000000           push 0x85
// 008980bf  50                   push eax
// 008980c0  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008980c6  5e                   pop esi
// 008980c7  c20400               ret 4
// copied from an identical function in another client (function ?ShowQuickAccessBelowRibbon@CXTPRibbonBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp
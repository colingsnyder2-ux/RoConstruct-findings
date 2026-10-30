// roc 2009-12 008eeaf0  unit: CXTPRibbonTabPopupToolBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eeaf0
//
// 008eeaf0  53                   push ebx
// 008eeaf1  56                   push esi
// 008eeaf2  8bf1                 mov esi, ecx
// 008eeaf4  8b4618               mov eax, dword ptr [esi + 0x18]
// 008eeaf7  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 008eeafd  8b5938               mov ebx, dword ptr [ecx + 0x38]
// 008eeb00  57                   push edi
// 008eeb01  6a00                 push 0
// 008eeb03  8dbea4fdffff         lea edi, [esi - 0x25c]
// 008eeb09  6aff                 push -1
// 008eeb0b  8bcf                 mov ecx, edi
// 008eeb0d  e88e7af1ff           call 0x8065a0
// 008eeb12  8bcf                 mov ecx, edi
// 008eeb14  e8b766f1ff           call 0x8051d0
// 008eeb19  837c241000           cmp dword ptr [esp + 0x10], 0
// 008eeb1e  7409                 je 0x8eeb29
// 008eeb20  83eb28               sub ebx, 0x28
// 008eeb23  7907                 jns 0x8eeb2c
// 008eeb25  33db                 xor ebx, ebx
// 008eeb27  eb03                 jmp 0x8eeb2c
// 008eeb29  83c328               add ebx, 0x28
// 008eeb2c  3b5e04               cmp ebx, dword ptr [esi + 4]
// 008eeb2f  740f                 je 0x8eeb40
// 008eeb31  8b17                 mov edx, dword ptr [edi]
// 008eeb33  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 008eeb39  8bcf                 mov ecx, edi
// 008eeb3b  895e04               mov dword ptr [esi + 4], ebx
// 008eeb3e  ffd0                 call eax
// 008eeb40  5f                   pop edi
// 008eeb41  5e                   pop esi
// 008eeb42  5b                   pop ebx
// 008eeb43  c20400               ret 4
// copied from an identical function in another client (function ?OnGroupsScroll@CXTPRibbonTabPopupToolBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
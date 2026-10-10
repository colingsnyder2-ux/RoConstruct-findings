// roc 2008-06 00796610  unit: CXTPRibbonTabPopupToolBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796610
//
// 00796610  53                   push ebx
// 00796611  56                   push esi
// 00796612  8bf1                 mov esi, ecx
// 00796614  8b4618               mov eax, dword ptr [esi + 0x18]
// 00796617  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 0079661d  8b5938               mov ebx, dword ptr [ecx + 0x38]
// 00796620  57                   push edi
// 00796621  6a00                 push 0
// 00796623  8dbea4fdffff         lea edi, [esi - 0x25c]
// 00796629  6aff                 push -1
// 0079662b  8bcf                 mov ecx, edi
// 0079662d  e89e08f2ff           call 0x6b6ed0
// 00796632  8bcf                 mov ecx, edi
// 00796634  e8e7f4f1ff           call 0x6b5b20
// 00796639  837c241000           cmp dword ptr [esp + 0x10], 0
// 0079663e  7409                 je 0x796649
// 00796640  83eb28               sub ebx, 0x28
// 00796643  7907                 jns 0x79664c
// 00796645  33db                 xor ebx, ebx
// 00796647  eb03                 jmp 0x79664c
// 00796649  83c328               add ebx, 0x28
// 0079664c  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0079664f  740f                 je 0x796660
// 00796651  8b17                 mov edx, dword ptr [edi]
// 00796653  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00796659  8bcf                 mov ecx, edi
// 0079665b  895e04               mov dword ptr [esi + 4], ebx
// 0079665e  ffd0                 call eax
// 00796660  5f                   pop edi
// 00796661  5e                   pop esi
// 00796662  5b                   pop ebx
// 00796663  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnGroupsScroll@CXTPRibbonTabPopupToolBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp

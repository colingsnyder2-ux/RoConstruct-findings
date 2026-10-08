// roc 2011-06 00864d10  unit: CXTPTabClientWnd::CWorkspace  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864d10
//
// 00864d10  8b442404             mov eax, dword ptr [esp + 4]
// 00864d14  83780402             cmp dword ptr [eax + 4], 2
// 00864d18  753d                 jne 0x864d57
// 00864d1a  56                   push esi
// 00864d1b  8b702c               mov esi, dword ptr [eax + 0x2c]
// 00864d1e  85f6                 test esi, esi
// 00864d20  7507                 jne 0x864d29
// 00864d22  8b7104               mov esi, dword ptr [ecx + 4]
// 00864d25  85f6                 test esi, esi
// 00864d27  742d                 je 0x864d56
// 00864d29  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00864d2f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00864d32  6a00                 push 0
// 00864d34  6a00                 push 0
// 00864d36  6863030000           push 0x363
// 00864d3b  51                   push ecx
// 00864d3c  ff15b419a400         call dword ptr [0xa419b4]
// 00864d42  8bce                 mov ecx, esi
// 00864d44  e877710000           call 0x86bec0
// 00864d49  6a00                 push 0
// 00864d4b  6a00                 push 0
// 00864d4d  6a10                 push 0x10
// 00864d4f  50                   push eax
// 00864d50  ff15c019a400         call dword ptr [0xa419c0]
// 00864d56  5e                   pop esi
// 00864d57  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNavigateButtonClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp

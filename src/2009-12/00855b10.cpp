// roc 2009-12 00855b10  unit: CXTPTabClientWnd::CWorkspace  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855b10
//
// 00855b10  8b442404             mov eax, dword ptr [esp + 4]
// 00855b14  83780402             cmp dword ptr [eax + 4], 2
// 00855b18  753d                 jne 0x855b57
// 00855b1a  56                   push esi
// 00855b1b  8b702c               mov esi, dword ptr [eax + 0x2c]
// 00855b1e  85f6                 test esi, esi
// 00855b20  7507                 jne 0x855b29
// 00855b22  8b7104               mov esi, dword ptr [ecx + 4]
// 00855b25  85f6                 test esi, esi
// 00855b27  742d                 je 0x855b56
// 00855b29  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00855b2f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00855b32  6a00                 push 0
// 00855b34  6a00                 push 0
// 00855b36  6863030000           push 0x363
// 00855b3b  51                   push ecx
// 00855b3c  ff15b8cb9800         call dword ptr [0x98cbb8]
// 00855b42  8bce                 mov ecx, esi
// 00855b44  e837a9eeff           call 0x740480
// 00855b49  6a00                 push 0
// 00855b4b  6a00                 push 0
// 00855b4d  6a10                 push 0x10
// 00855b4f  50                   push eax
// 00855b50  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00855b56  5e                   pop esi
// 00855b57  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNavigateButtonClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp

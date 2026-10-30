// roc 2010-06 00809a40  unit: CXTPTabClientWnd::CWorkspace  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809a40
//
// 00809a40  8b442404             mov eax, dword ptr [esp + 4]
// 00809a44  83780402             cmp dword ptr [eax + 4], 2
// 00809a48  753d                 jne 0x809a87
// 00809a4a  56                   push esi
// 00809a4b  8b702c               mov esi, dword ptr [eax + 0x2c]
// 00809a4e  85f6                 test esi, esi
// 00809a50  7507                 jne 0x809a59
// 00809a52  8b7104               mov esi, dword ptr [ecx + 4]
// 00809a55  85f6                 test esi, esi
// 00809a57  742d                 je 0x809a86
// 00809a59  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00809a5f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00809a62  6a00                 push 0
// 00809a64  6a00                 push 0
// 00809a66  6863030000           push 0x363
// 00809a6b  51                   push ecx
// 00809a6c  ff1548ba9e00         call dword ptr [0x9eba48]
// 00809a72  8bce                 mov ecx, esi
// 00809a74  e87766ebff           call 0x6c00f0
// 00809a79  6a00                 push 0
// 00809a7b  6a00                 push 0
// 00809a7d  6a10                 push 0x10
// 00809a7f  50                   push eax
// 00809a80  ff1554ba9e00         call dword ptr [0x9eba54]
// 00809a86  5e                   pop esi
// 00809a87  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNavigateButtonClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp

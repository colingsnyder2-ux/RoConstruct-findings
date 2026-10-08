// roc 2012-06 009dd320  unit: CXTPTabClientWnd::CWorkspace  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd320
//
// 009dd320  8b442404             mov eax, dword ptr [esp + 4]
// 009dd324  83780402             cmp dword ptr [eax + 4], 2
// 009dd328  753d                 jne 0x9dd367
// 009dd32a  56                   push esi
// 009dd32b  8b702c               mov esi, dword ptr [eax + 0x2c]
// 009dd32e  85f6                 test esi, esi
// 009dd330  7507                 jne 0x9dd339
// 009dd332  8b7104               mov esi, dword ptr [ecx + 4]
// 009dd335  85f6                 test esi, esi
// 009dd337  742d                 je 0x9dd366
// 009dd339  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009dd33f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009dd342  6a00                 push 0
// 009dd344  6a00                 push 0
// 009dd346  6863030000           push 0x363
// 009dd34b  51                   push ecx
// 009dd34c  ff15243cb200         call dword ptr [0xb23c24]
// 009dd352  8bce                 mov ecx, esi
// 009dd354  e8576ffdff           call 0x9b42b0
// 009dd359  6a00                 push 0
// 009dd35b  6a00                 push 0
// 009dd35d  6a10                 push 0x10
// 009dd35f  50                   push eax
// 009dd360  ff15043cb200         call dword ptr [0xb23c04]
// 009dd366  5e                   pop esi
// 009dd367  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNavigateButtonClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp

// roc 2008-06 007021a0  unit: CXTPTabClientWnd::CWorkspace  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007021a0
//
// 007021a0  8b442404             mov eax, dword ptr [esp + 4]
// 007021a4  83780402             cmp dword ptr [eax + 4], 2
// 007021a8  753d                 jne 0x7021e7
// 007021aa  56                   push esi
// 007021ab  8b702c               mov esi, dword ptr [eax + 0x2c]
// 007021ae  85f6                 test esi, esi
// 007021b0  7507                 jne 0x7021b9
// 007021b2  8b7104               mov esi, dword ptr [ecx + 4]
// 007021b5  85f6                 test esi, esi
// 007021b7  742d                 je 0x7021e6
// 007021b9  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007021bf  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007021c2  6a00                 push 0
// 007021c4  6a00                 push 0
// 007021c6  6863030000           push 0x363
// 007021cb  51                   push ecx
// 007021cc  ff150c2e8000         call dword ptr [0x802e0c]
// 007021d2  8bce                 mov ecx, esi
// 007021d4  e8a7b3f0ff           call 0x60d580
// 007021d9  6a00                 push 0
// 007021db  6a00                 push 0
// 007021dd  6a10                 push 0x10
// 007021df  50                   push eax
// 007021e0  ff15142e8000         call dword ptr [0x802e14]
// 007021e6  5e                   pop esi
// 007021e7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNavigateButtonClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp

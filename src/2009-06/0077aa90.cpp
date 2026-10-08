// roc 2009-06 0077aa90  unit: CXTPTabClientWnd::CWorkspace  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077aa90
//
// 0077aa90  8b442404             mov eax, dword ptr [esp + 4]
// 0077aa94  83780402             cmp dword ptr [eax + 4], 2
// 0077aa98  753d                 jne 0x77aad7
// 0077aa9a  56                   push esi
// 0077aa9b  8b702c               mov esi, dword ptr [eax + 0x2c]
// 0077aa9e  85f6                 test esi, esi
// 0077aaa0  7507                 jne 0x77aaa9
// 0077aaa2  8b7104               mov esi, dword ptr [ecx + 4]
// 0077aaa5  85f6                 test esi, esi
// 0077aaa7  742d                 je 0x77aad6
// 0077aaa9  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0077aaaf  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0077aab2  6a00                 push 0
// 0077aab4  6a00                 push 0
// 0077aab6  6863030000           push 0x363
// 0077aabb  51                   push ecx
// 0077aabc  ff159cee8900         call dword ptr [0x89ee9c]
// 0077aac2  8bce                 mov ecx, esi
// 0077aac4  e8076bf3ff           call 0x6b15d0
// 0077aac9  6a00                 push 0
// 0077aacb  6a00                 push 0
// 0077aacd  6a10                 push 0x10
// 0077aacf  50                   push eax
// 0077aad0  ff1590ee8900         call dword ptr [0x89ee90]
// 0077aad6  5e                   pop esi
// 0077aad7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNavigateButtonClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerNavigateButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp

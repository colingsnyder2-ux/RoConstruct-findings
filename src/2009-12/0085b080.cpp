// roc 2009-12 0085b080  unit: CXTPStatusBar  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b080
//
// 0085b080  8bd1                 mov edx, ecx
// 0085b082  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085b086  56                   push esi
// 0085b087  e834b20600           call 0x8c62c0
// 0085b08c  8bca                 mov ecx, edx
// 0085b08e  8bf0                 mov esi, eax
// 0085b090  e8b98af9ff           call 0x7f3b4e
// 0085b095  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085b098  6a00                 push 0
// 0085b09a  56                   push esi
// 0085b09b  6811010000           push 0x111
// 0085b0a0  50                   push eax
// 0085b0a1  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085b0a7  5e                   pop esi
// 0085b0a8  c20400               ret 4
// copied from an identical function in another client (function ?OnPaneClick@CXTPStatusBar@@IAEXPAVCXTPStatusBarPane@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
// roc 2012-06 00a750f0  unit: CXTPRibbonGroupPopupToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a750f0
//
// 00a750f0  56                   push esi
// 00a750f1  57                   push edi
// 00a750f2  8bf9                 mov edi, ecx
// 00a750f4  e887ffffff           call 0xa75080
// 00a750f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a750fd  8bf0                 mov esi, eax
// 00a750ff  8b06                 mov eax, dword ptr [esi]
// 00a75101  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00a75107  51                   push ecx
// 00a75108  57                   push edi
// 00a75109  8bce                 mov ecx, esi
// 00a7510b  ffd2                 call edx
// 00a7510d  5f                   pop edi
// 00a7510e  8bc6                 mov eax, esi
// 00a75110  5e                   pop esi
// 00a75111  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

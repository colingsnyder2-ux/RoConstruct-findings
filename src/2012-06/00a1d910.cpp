// roc 2012-06 00a1d910  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1d910
//
// 00a1d910  56                   push esi
// 00a1d911  57                   push edi
// 00a1d912  8bf9                 mov edi, ecx
// 00a1d914  e887ffffff           call 0xa1d8a0
// 00a1d919  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a1d91d  8bf0                 mov esi, eax
// 00a1d91f  8b06                 mov eax, dword ptr [esi]
// 00a1d921  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00a1d927  51                   push ecx
// 00a1d928  57                   push edi
// 00a1d929  8bce                 mov ecx, esi
// 00a1d92b  ffd2                 call edx
// 00a1d92d  5f                   pop edi
// 00a1d92e  8bc6                 mov eax, esi
// 00a1d930  5e                   pop esi
// 00a1d931  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

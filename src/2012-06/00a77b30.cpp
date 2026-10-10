// roc 2012-06 00a77b30  unit: CXTPRibbonSystemPopupBarPage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77b30
//
// 00a77b30  56                   push esi
// 00a77b31  57                   push edi
// 00a77b32  8bf9                 mov edi, ecx
// 00a77b34  e887ffffff           call 0xa77ac0
// 00a77b39  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a77b3d  8bf0                 mov esi, eax
// 00a77b3f  8b06                 mov eax, dword ptr [esi]
// 00a77b41  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00a77b47  51                   push ecx
// 00a77b48  57                   push edi
// 00a77b49  8bce                 mov ecx, esi
// 00a77b4b  ffd2                 call edx
// 00a77b4d  5f                   pop edi
// 00a77b4e  8bc6                 mov eax, esi
// 00a77b50  5e                   pop esi
// 00a77b51  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

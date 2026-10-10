// roc 2012-06 00a71a90  unit: CXTPDialogBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71a90
//
// 00a71a90  56                   push esi
// 00a71a91  57                   push edi
// 00a71a92  8bf9                 mov edi, ecx
// 00a71a94  e887ffffff           call 0xa71a20
// 00a71a99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a71a9d  8bf0                 mov esi, eax
// 00a71a9f  8b06                 mov eax, dword ptr [esi]
// 00a71aa1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00a71aa7  51                   push ecx
// 00a71aa8  57                   push edi
// 00a71aa9  8bce                 mov ecx, esi
// 00a71aab  ffd2                 call edx
// 00a71aad  5f                   pop edi
// 00a71aae  8bc6                 mov eax, esi
// 00a71ab0  5e                   pop esi
// 00a71ab1  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

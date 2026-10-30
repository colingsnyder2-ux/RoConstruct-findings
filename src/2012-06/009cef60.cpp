// roc 2012-06 009cef60  unit: CXTPPopupToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cef60
//
// 009cef60  56                   push esi
// 009cef61  57                   push edi
// 009cef62  8bf9                 mov edi, ecx
// 009cef64  e887ffffff           call 0x9ceef0
// 009cef69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009cef6d  8bf0                 mov esi, eax
// 009cef6f  8b06                 mov eax, dword ptr [esi]
// 009cef71  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 009cef77  51                   push ecx
// 009cef78  57                   push edi
// 009cef79  8bce                 mov ecx, esi
// 009cef7b  ffd2                 call edx
// 009cef7d  5f                   pop edi
// 009cef7e  8bc6                 mov eax, esi
// 009cef80  5e                   pop esi
// 009cef81  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

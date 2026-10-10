// roc 2012-06 00990130  unit: CXTPControlComboBoxPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00990130
//
// 00990130  56                   push esi
// 00990131  57                   push edi
// 00990132  8bf9                 mov edi, ecx
// 00990134  e887ffffff           call 0x9900c0
// 00990139  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0099013d  8bf0                 mov esi, eax
// 0099013f  8b06                 mov eax, dword ptr [esi]
// 00990141  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00990147  51                   push ecx
// 00990148  57                   push edi
// 00990149  8bce                 mov ecx, esi
// 0099014b  ffd2                 call edx
// 0099014d  5f                   pop edi
// 0099014e  8bc6                 mov eax, esi
// 00990150  5e                   pop esi
// 00990151  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

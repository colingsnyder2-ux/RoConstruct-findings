// roc 2008-06 0079b900  unit: CXTPRibbonSystemPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079b900
//
// 0079b900  56                   push esi
// 0079b901  57                   push edi
// 0079b902  8bf9                 mov edi, ecx
// 0079b904  e887ffffff           call 0x79b890
// 0079b909  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079b90d  8bf0                 mov esi, eax
// 0079b90f  8b06                 mov eax, dword ptr [esi]
// 0079b911  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 0079b917  51                   push ecx
// 0079b918  57                   push edi
// 0079b919  8bce                 mov ecx, esi
// 0079b91b  ffd2                 call edx
// 0079b91d  5f                   pop edi
// 0079b91e  8bc6                 mov eax, esi
// 0079b920  5e                   pop esi
// 0079b921  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

// roc 2008-06 00797b50  unit: CXTPRibbonGroupPopupToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797b50
//
// 00797b50  56                   push esi
// 00797b51  57                   push edi
// 00797b52  8bf9                 mov edi, ecx
// 00797b54  e887ffffff           call 0x797ae0
// 00797b59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00797b5d  8bf0                 mov esi, eax
// 00797b5f  8b06                 mov eax, dword ptr [esi]
// 00797b61  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00797b67  51                   push ecx
// 00797b68  57                   push edi
// 00797b69  8bce                 mov ecx, esi
// 00797b6b  ffd2                 call edx
// 00797b6d  5f                   pop edi
// 00797b6e  8bc6                 mov eax, esi
// 00797b70  5e                   pop esi
// 00797b71  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

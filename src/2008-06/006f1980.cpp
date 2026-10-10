// roc 2008-06 006f1980  unit: CXTPPopupToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1980
//
// 006f1980  56                   push esi
// 006f1981  57                   push edi
// 006f1982  8bf9                 mov edi, ecx
// 006f1984  e887ffffff           call 0x6f1910
// 006f1989  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f198d  8bf0                 mov esi, eax
// 006f198f  8b06                 mov eax, dword ptr [esi]
// 006f1991  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 006f1997  51                   push ecx
// 006f1998  57                   push edi
// 006f1999  8bce                 mov ecx, esi
// 006f199b  ffd2                 call edx
// 006f199d  5f                   pop edi
// 006f199e  8bc6                 mov eax, esi
// 006f19a0  5e                   pop esi
// 006f19a1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

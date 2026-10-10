// roc 2008-06 00725770  unit: CXTPRibbonBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00725770
//
// 00725770  56                   push esi
// 00725771  57                   push edi
// 00725772  8bf9                 mov edi, ecx
// 00725774  e887ffffff           call 0x725700
// 00725779  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072577d  8bf0                 mov esi, eax
// 0072577f  8b06                 mov eax, dword ptr [esi]
// 00725781  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00725787  51                   push ecx
// 00725788  57                   push edi
// 00725789  8bce                 mov ecx, esi
// 0072578b  ffd2                 call edx
// 0072578d  5f                   pop edi
// 0072578e  8bc6                 mov eax, esi
// 00725790  5e                   pop esi
// 00725791  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

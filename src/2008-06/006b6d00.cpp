// roc 2008-06 006b6d00  unit: CXTPCommandBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b6d00
//
// 006b6d00  56                   push esi
// 006b6d01  57                   push edi
// 006b6d02  8bf9                 mov edi, ecx
// 006b6d04  e887ffffff           call 0x6b6c90
// 006b6d09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b6d0d  8bf0                 mov esi, eax
// 006b6d0f  8b06                 mov eax, dword ptr [esi]
// 006b6d11  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 006b6d17  51                   push ecx
// 006b6d18  57                   push edi
// 006b6d19  8bce                 mov ecx, esi
// 006b6d1b  ffd2                 call edx
// 006b6d1d  5f                   pop edi
// 006b6d1e  8bc6                 mov eax, esi
// 006b6d20  5e                   pop esi
// 006b6d21  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

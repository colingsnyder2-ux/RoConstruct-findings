// roc 2008-06 006f18d0  unit: CXTPPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f18d0
//
// 006f18d0  56                   push esi
// 006f18d1  57                   push edi
// 006f18d2  8bf9                 mov edi, ecx
// 006f18d4  e887ffffff           call 0x6f1860
// 006f18d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f18dd  8bf0                 mov esi, eax
// 006f18df  8b06                 mov eax, dword ptr [esi]
// 006f18e1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 006f18e7  51                   push ecx
// 006f18e8  57                   push edi
// 006f18e9  8bce                 mov ecx, esi
// 006f18eb  ffd2                 call edx
// 006f18ed  5f                   pop edi
// 006f18ee  8bc6                 mov eax, esi
// 006f18f0  5e                   pop esi
// 006f18f1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

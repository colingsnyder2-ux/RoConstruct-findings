// roc 2012-06 009fe8b0  unit: CXTPControlComboBoxGalleryPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fe8b0
//
// 009fe8b0  56                   push esi
// 009fe8b1  57                   push edi
// 009fe8b2  8bf9                 mov edi, ecx
// 009fe8b4  e887ffffff           call 0x9fe840
// 009fe8b9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009fe8bd  8bf0                 mov esi, eax
// 009fe8bf  8b06                 mov eax, dword ptr [esi]
// 009fe8c1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 009fe8c7  51                   push ecx
// 009fe8c8  57                   push edi
// 009fe8c9  8bce                 mov ecx, esi
// 009fe8cb  ffd2                 call edx
// 009fe8cd  5f                   pop edi
// 009fe8ce  8bc6                 mov eax, esi
// 009fe8d0  5e                   pop esi
// 009fe8d1  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

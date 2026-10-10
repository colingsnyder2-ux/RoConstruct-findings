// roc 2012-06 009902c0  unit: CXTPControlComboBoxList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009902c0
//
// 009902c0  56                   push esi
// 009902c1  57                   push edi
// 009902c2  8bf9                 mov edi, ecx
// 009902c4  e887ffffff           call 0x990250
// 009902c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009902cd  8bf0                 mov esi, eax
// 009902cf  8b06                 mov eax, dword ptr [esi]
// 009902d1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 009902d7  51                   push ecx
// 009902d8  57                   push edi
// 009902d9  8bce                 mov ecx, esi
// 009902db  ffd2                 call edx
// 009902dd  5f                   pop edi
// 009902de  8bc6                 mov eax, esi
// 009902e0  5e                   pop esi
// 009902e1  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

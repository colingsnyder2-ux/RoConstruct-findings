// roc 2008-06 0079b7a0  unit: CXTPRibbonSystemPopupBarPage  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079b7a0
//
// 0079b7a0  56                   push esi
// 0079b7a1  57                   push edi
// 0079b7a2  8bf9                 mov edi, ecx
// 0079b7a4  e887ffffff           call 0x79b730
// 0079b7a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079b7ad  8bf0                 mov esi, eax
// 0079b7af  8b06                 mov eax, dword ptr [esi]
// 0079b7b1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 0079b7b7  51                   push ecx
// 0079b7b8  57                   push edi
// 0079b7b9  8bce                 mov ecx, esi
// 0079b7bb  ffd2                 call edx
// 0079b7bd  5f                   pop edi
// 0079b7be  8bc6                 mov eax, esi
// 0079b7c0  5e                   pop esi
// 0079b7c1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

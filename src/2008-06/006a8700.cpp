// roc 2008-06 006a8700  unit: CXTPControlComboBoxList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8700
//
// 006a8700  56                   push esi
// 006a8701  57                   push edi
// 006a8702  8bf9                 mov edi, ecx
// 006a8704  e887ffffff           call 0x6a8690
// 006a8709  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a870d  8bf0                 mov esi, eax
// 006a870f  8b06                 mov eax, dword ptr [esi]
// 006a8711  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 006a8717  51                   push ecx
// 006a8718  57                   push edi
// 006a8719  8bce                 mov ecx, esi
// 006a871b  ffd2                 call edx
// 006a871d  5f                   pop edi
// 006a871e  8bc6                 mov eax, esi
// 006a8720  5e                   pop esi
// 006a8721  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

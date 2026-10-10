// roc 2008-06 006a8570  unit: CXTPControlComboBoxPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8570
//
// 006a8570  56                   push esi
// 006a8571  57                   push edi
// 006a8572  8bf9                 mov edi, ecx
// 006a8574  e887ffffff           call 0x6a8500
// 006a8579  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a857d  8bf0                 mov esi, eax
// 006a857f  8b06                 mov eax, dword ptr [esi]
// 006a8581  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 006a8587  51                   push ecx
// 006a8588  57                   push edi
// 006a8589  8bce                 mov ecx, esi
// 006a858b  ffd2                 call edx
// 006a858d  5f                   pop edi
// 006a858e  8bc6                 mov eax, esi
// 006a8590  5e                   pop esi
// 006a8591  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

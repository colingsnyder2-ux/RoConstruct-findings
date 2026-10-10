// roc 2008-06 00721570  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721570
//
// 00721570  56                   push esi
// 00721571  57                   push edi
// 00721572  8bf9                 mov edi, ecx
// 00721574  e887ffffff           call 0x721500
// 00721579  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072157d  8bf0                 mov esi, eax
// 0072157f  8b06                 mov eax, dword ptr [esi]
// 00721581  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00721587  51                   push ecx
// 00721588  57                   push edi
// 00721589  8bce                 mov ecx, esi
// 0072158b  ffd2                 call edx
// 0072158d  5f                   pop edi
// 0072158e  8bc6                 mov eax, esi
// 00721590  5e                   pop esi
// 00721591  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

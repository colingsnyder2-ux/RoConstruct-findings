// roc 2008-06 0079fa10  unit: CXTPDialogBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fa10
//
// 0079fa10  56                   push esi
// 0079fa11  57                   push edi
// 0079fa12  8bf9                 mov edi, ecx
// 0079fa14  e887ffffff           call 0x79f9a0
// 0079fa19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079fa1d  8bf0                 mov esi, eax
// 0079fa1f  8b06                 mov eax, dword ptr [esi]
// 0079fa21  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 0079fa27  51                   push ecx
// 0079fa28  57                   push edi
// 0079fa29  8bce                 mov ecx, esi
// 0079fa2b  ffd2                 call edx
// 0079fa2d  5f                   pop edi
// 0079fa2e  8bc6                 mov eax, esi
// 0079fa30  5e                   pop esi
// 0079fa31  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

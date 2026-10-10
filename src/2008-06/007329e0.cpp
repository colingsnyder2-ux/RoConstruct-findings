// roc 2008-06 007329e0  unit: CXTPControlComboBoxGalleryPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007329e0
//
// 007329e0  56                   push esi
// 007329e1  57                   push edi
// 007329e2  8bf9                 mov edi, ecx
// 007329e4  e887ffffff           call 0x732970
// 007329e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007329ed  8bf0                 mov esi, eax
// 007329ef  8b06                 mov eax, dword ptr [esi]
// 007329f1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 007329f7  51                   push ecx
// 007329f8  57                   push edi
// 007329f9  8bce                 mov ecx, esi
// 007329fb  ffd2                 call edx
// 007329fd  5f                   pop edi
// 007329fe  8bc6                 mov eax, esi
// 00732a00  5e                   pop esi
// 00732a01  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

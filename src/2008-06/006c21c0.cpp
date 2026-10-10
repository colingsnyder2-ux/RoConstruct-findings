// roc 2008-06 006c21c0  unit: CXTPToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c21c0
//
// 006c21c0  56                   push esi
// 006c21c1  57                   push edi
// 006c21c2  8bf9                 mov edi, ecx
// 006c21c4  e887ffffff           call 0x6c2150
// 006c21c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c21cd  8bf0                 mov esi, eax
// 006c21cf  8b06                 mov eax, dword ptr [esi]
// 006c21d1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 006c21d7  51                   push ecx
// 006c21d8  57                   push edi
// 006c21d9  8bce                 mov ecx, esi
// 006c21db  ffd2                 call edx
// 006c21dd  5f                   pop edi
// 006c21de  8bc6                 mov eax, esi
// 006c21e0  5e                   pop esi
// 006c21e1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?Clone@CXTPControlComboBoxPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp

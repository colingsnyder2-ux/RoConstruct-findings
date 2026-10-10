// roc 2012-06 0099f9f0  unit: CXTPToolBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f9f0
//
// 0099f9f0  56                   push esi
// 0099f9f1  57                   push edi
// 0099f9f2  8bf9                 mov edi, ecx
// 0099f9f4  e887ffffff           call 0x99f980
// 0099f9f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0099f9fd  8bf0                 mov esi, eax
// 0099f9ff  8b06                 mov eax, dword ptr [esi]
// 0099fa01  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 0099fa07  51                   push ecx
// 0099fa08  57                   push edi
// 0099fa09  8bce                 mov ecx, esi
// 0099fa0b  ffd2                 call edx
// 0099fa0d  5f                   pop edi
// 0099fa0e  8bc6                 mov eax, esi
// 0099fa10  5e                   pop esi
// 0099fa11  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

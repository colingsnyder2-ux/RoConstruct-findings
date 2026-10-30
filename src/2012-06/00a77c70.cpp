// roc 2012-06 00a77c70  unit: CXTPRibbonSystemPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77c70
//
// 00a77c70  56                   push esi
// 00a77c71  57                   push edi
// 00a77c72  8bf9                 mov edi, ecx
// 00a77c74  e887ffffff           call 0xa77c00
// 00a77c79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a77c7d  8bf0                 mov esi, eax
// 00a77c7f  8b06                 mov eax, dword ptr [esi]
// 00a77c81  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 00a77c87  51                   push ecx
// 00a77c88  57                   push edi
// 00a77c89  8bce                 mov ecx, esi
// 00a77c8b  ffd2                 call edx
// 00a77c8d  5f                   pop edi
// 00a77c8e  8bc6                 mov eax, esi
// 00a77c90  5e                   pop esi
// 00a77c91  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

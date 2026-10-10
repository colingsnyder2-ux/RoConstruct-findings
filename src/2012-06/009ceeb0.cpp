// roc 2012-06 009ceeb0  unit: CXTPPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ceeb0
//
// 009ceeb0  56                   push esi
// 009ceeb1  57                   push edi
// 009ceeb2  8bf9                 mov edi, ecx
// 009ceeb4  e887ffffff           call 0x9cee40
// 009ceeb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ceebd  8bf0                 mov esi, eax
// 009ceebf  8b06                 mov eax, dword ptr [esi]
// 009ceec1  8b90dc010000         mov edx, dword ptr [eax + 0x1dc]
// 009ceec7  51                   push ecx
// 009ceec8  57                   push edi
// 009ceec9  8bce                 mov ecx, esi
// 009ceecb  ffd2                 call edx
// 009ceecd  5f                   pop edi
// 009ceece  8bc6                 mov eax, esi
// 009ceed0  5e                   pop esi
// 009ceed1  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeMenusPage.cpp (function ?Clone@CXTPFloatingPopupBar@@UAEPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeMenusPage.cpp

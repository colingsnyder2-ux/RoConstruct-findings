// roc 2010-06 008a5c20  unit: CXTPRibbonControlSystemPopupBarListItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5c20
//
// 008a5c20  56                   push esi
// 008a5c21  8bf1                 mov esi, ecx
// 008a5c23  e838e7f9ff           call 0x844360
// 008a5c28  c7062431a700         mov dword ptr [esi], 0xa73124
// 008a5c2e  c74620c430a700       mov dword ptr [esi + 0x20], 0xa730c4
// 008a5c35  c786600100002c010000 mov dword ptr [esi + 0x160], 0x12c
// 008a5c3f  c7866401000015000000 mov dword ptr [esi + 0x164], 0x15
// 008a5c49  8bc6                 mov eax, esi
// 008a5c4b  5e                   pop esi
// 008a5c4c  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ??0CXTPRibbonControlSystemPopupBarListItem@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp

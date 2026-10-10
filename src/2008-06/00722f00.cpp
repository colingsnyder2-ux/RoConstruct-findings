// roc 2008-06 00722f00  unit: CXTPRibbonBar::CControlQuickAccessMorePopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722f00
//
// 00722f00  56                   push esi
// 00722f01  8bf1                 mov esi, ecx
// 00722f03  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00722f09  e8b2f1ffff           call 0x7220c0
// 00722f0e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00722f12  8b10                 mov edx, dword ptr [eax]
// 00722f14  8b9268010000         mov edx, dword ptr [edx + 0x168]
// 00722f1a  56                   push esi
// 00722f1b  51                   push ecx
// 00722f1c  8bc8                 mov ecx, eax
// 00722f1e  ffd2                 call edx
// 00722f20  5e                   pop esi
// 00722f21  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?Draw@CControlQuickAccessMorePopup@CXTPRibbonBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp

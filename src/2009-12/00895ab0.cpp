// roc 2009-12 00895ab0  unit: CXTPRibbonBar::CControlQuickAccessMorePopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895ab0
//
// 00895ab0  56                   push esi
// 00895ab1  8bf1                 mov esi, ecx
// 00895ab3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00895ab9  e8b2f1ffff           call 0x894c70
// 00895abe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00895ac2  8b10                 mov edx, dword ptr [eax]
// 00895ac4  8b9268010000         mov edx, dword ptr [edx + 0x168]
// 00895aca  56                   push esi
// 00895acb  51                   push ecx
// 00895acc  8bc8                 mov ecx, eax
// 00895ace  ffd2                 call edx
// 00895ad0  5e                   pop esi
// 00895ad1  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlQuickAccessMorePopup@CXTPRibbonBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
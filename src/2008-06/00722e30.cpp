// roc 2008-06 00722e30  unit: CXTPRibbonBarControlQuickAccessPopup  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722e30
//
// 00722e30  56                   push esi
// 00722e31  8bf1                 mov esi, ecx
// 00722e33  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00722e39  e8a21ff9ff           call 0x6b4de0
// 00722e3e  8bc8                 mov ecx, eax
// 00722e40  e87bf2ffff           call 0x7220c0
// 00722e45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00722e49  8b10                 mov edx, dword ptr [eax]
// 00722e4b  8b9264010000         mov edx, dword ptr [edx + 0x164]
// 00722e51  56                   push esi
// 00722e52  51                   push ecx
// 00722e53  8bc8                 mov ecx, eax
// 00722e55  ffd2                 call edx
// 00722e57  5e                   pop esi
// 00722e58  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?Draw@CXTPRibbonBarControlQuickAccessPopup@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp

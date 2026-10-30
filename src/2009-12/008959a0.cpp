// roc 2009-12 008959a0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008959a0
//
// 008959a0  56                   push esi
// 008959a1  8bf1                 mov esi, ecx
// 008959a3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008959a9  e8f2eaf6ff           call 0x8044a0
// 008959ae  8bc8                 mov ecx, eax
// 008959b0  e8bbf2ffff           call 0x894c70
// 008959b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008959b9  8b10                 mov edx, dword ptr [eax]
// 008959bb  8b9264010000         mov edx, dword ptr [edx + 0x164]
// 008959c1  56                   push esi
// 008959c2  51                   push ecx
// 008959c3  8bc8                 mov ecx, eax
// 008959c5  ffd2                 call edx
// 008959c7  5e                   pop esi
// 008959c8  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonBarControlQuickAccessPopup@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
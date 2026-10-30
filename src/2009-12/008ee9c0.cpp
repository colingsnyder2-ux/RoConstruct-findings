// roc 2009-12 008ee9c0  unit: CXTPRibbonBarMorePopupToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee9c0
//
// 008ee9c0  56                   push esi
// 008ee9c1  8bf1                 mov esi, ecx
// 008ee9c3  e8c85bf1ff           call 0x804590
// 008ee9c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ee9cc  8b10                 mov edx, dword ptr [eax]
// 008ee9ce  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 008ee9d4  56                   push esi
// 008ee9d5  51                   push ecx
// 008ee9d6  8bc8                 mov ecx, eax
// 008ee9d8  ffd2                 call edx
// 008ee9da  5e                   pop esi
// 008ee9db  c20400               ret 4
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPRibbonBarMorePopupToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
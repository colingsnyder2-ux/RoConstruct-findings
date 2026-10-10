// roc 2008-06 007964e0  unit: CXTPRibbonBarMorePopupToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007964e0
//
// 007964e0  56                   push esi
// 007964e1  8bf1                 mov esi, ecx
// 007964e3  e8e8e9f1ff           call 0x6b4ed0
// 007964e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007964ec  8b10                 mov edx, dword ptr [eax]
// 007964ee  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 007964f4  56                   push esi
// 007964f5  51                   push ecx
// 007964f6  8bc8                 mov ecx, eax
// 007964f8  ffd2                 call edx
// 007964fa  5e                   pop esi
// 007964fb  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?FillCommandBarEntry@CXTPRibbonBarMorePopupToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp

// roc 2007-08 006a8720  unit: CXTPRibbonBar::CMorePopupToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8720
//
// 006a8720  56                   push esi
// 006a8721  8bf1                 mov esi, ecx
// 006a8723  e818b3f9ff           call 0x643a40
// 006a8728  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a872c  8b10                 mov edx, dword ptr [eax]
// 006a872e  8b9268010000         mov edx, dword ptr [edx + 0x168]
// 006a8734  56                   push esi
// 006a8735  51                   push ecx
// 006a8736  8bc8                 mov ecx, eax
// 006a8738  ffd2                 call edx
// 006a873a  5e                   pop esi
// 006a873b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonPopups.cpp (function ?FillCommandBarEntry@CXTPRibbonBarMorePopupToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonPopups.cpp

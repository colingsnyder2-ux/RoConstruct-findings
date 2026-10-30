// roc 2007-03 0069aa80  unit: seg_00690000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069aa80
//
// 0069aa80  56                   push esi
// 0069aa81  8bf1                 mov esi, ecx
// 0069aa83  e848e3f9ff           call 0x638dd0
// 0069aa88  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069aa8c  8b10                 mov edx, dword ptr [eax]
// 0069aa8e  8b9268010000         mov edx, dword ptr [edx + 0x168]
// 0069aa94  56                   push esi
// 0069aa95  51                   push ecx
// 0069aa96  8bc8                 mov ecx, eax
// 0069aa98  ffd2                 call edx
// 0069aa9a  5e                   pop esi
// 0069aa9b  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?FillCommandBarEntry@CXTPRibbonBarMorePopupToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

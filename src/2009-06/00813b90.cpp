// roc 2009-06 00813b90  unit: CXTPRibbonTabPopupToolBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00813b90
//
// 00813b90  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 00813b96  8b442404             mov eax, dword ptr [esp + 4]
// 00813b9a  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 00813ba0  56                   push esi
// 00813ba1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00813ba5  8910                 mov dword ptr [eax], edx
// 00813ba7  03d6                 add edx, esi
// 00813ba9  895008               mov dword ptr [eax + 8], edx
// 00813bac  8b542410             mov edx, dword ptr [esp + 0x10]
// 00813bb0  894804               mov dword ptr [eax + 4], ecx
// 00813bb3  03ca                 add ecx, edx
// 00813bb5  89480c               mov dword ptr [eax + 0xc], ecx
// 00813bb8  5e                   pop esi
// 00813bb9  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

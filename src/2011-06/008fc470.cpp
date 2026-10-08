// roc 2011-06 008fc470  unit: CXTPRibbonTabPopupToolBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fc470
//
// 008fc470  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 008fc476  8b442404             mov eax, dword ptr [esp + 4]
// 008fc47a  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 008fc480  56                   push esi
// 008fc481  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008fc485  8910                 mov dword ptr [eax], edx
// 008fc487  03d6                 add edx, esi
// 008fc489  895008               mov dword ptr [eax + 8], edx
// 008fc48c  8b542410             mov edx, dword ptr [esp + 0x10]
// 008fc490  894804               mov dword ptr [eax + 4], ecx
// 008fc493  03ca                 add ecx, edx
// 008fc495  89480c               mov dword ptr [eax + 0xc], ecx
// 008fc498  5e                   pop esi
// 008fc499  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

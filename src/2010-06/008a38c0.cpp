// roc 2010-06 008a38c0  unit: CXTPRibbonTabPopupToolBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a38c0
//
// 008a38c0  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 008a38c6  8b442404             mov eax, dword ptr [esp + 4]
// 008a38ca  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 008a38d0  56                   push esi
// 008a38d1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a38d5  8910                 mov dword ptr [eax], edx
// 008a38d7  03d6                 add edx, esi
// 008a38d9  895008               mov dword ptr [eax + 8], edx
// 008a38dc  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a38e0  894804               mov dword ptr [eax + 4], ecx
// 008a38e3  03ca                 add ecx, edx
// 008a38e5  89480c               mov dword ptr [eax + 0xc], ecx
// 008a38e8  5e                   pop esi
// 008a38e9  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

// roc 2007-08 00717ed0  unit: CXTPRibbonTabPopupToolBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717ed0
//
// 00717ed0  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 00717ed6  8b442404             mov eax, dword ptr [esp + 4]
// 00717eda  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 00717ee0  56                   push esi
// 00717ee1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00717ee5  8910                 mov dword ptr [eax], edx
// 00717ee7  03d6                 add edx, esi
// 00717ee9  895008               mov dword ptr [eax + 8], edx
// 00717eec  8b542410             mov edx, dword ptr [esp + 0x10]
// 00717ef0  894804               mov dword ptr [eax + 4], ecx
// 00717ef3  03ca                 add ecx, edx
// 00717ef5  89480c               mov dword ptr [eax + 0xc], ecx
// 00717ef8  5e                   pop esi
// 00717ef9  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonPopups.cpp

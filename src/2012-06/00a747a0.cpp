// roc 2012-06 00a747a0  unit: CXTPRibbonTabPopupToolBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a747a0
//
// 00a747a0  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 00a747a6  8b442404             mov eax, dword ptr [esp + 4]
// 00a747aa  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 00a747b0  56                   push esi
// 00a747b1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00a747b5  8910                 mov dword ptr [eax], edx
// 00a747b7  03d6                 add edx, esi
// 00a747b9  895008               mov dword ptr [eax + 8], edx
// 00a747bc  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a747c0  894804               mov dword ptr [eax + 4], ecx
// 00a747c3  03ca                 add ecx, edx
// 00a747c5  89480c               mov dword ptr [eax + 0xc], ecx
// 00a747c8  5e                   pop esi
// 00a747c9  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

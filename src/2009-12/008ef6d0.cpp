// roc 2009-12 008ef6d0  unit: CXTPRibbonTabPopupToolBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef6d0
//
// 008ef6d0  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 008ef6d6  8b442404             mov eax, dword ptr [esp + 4]
// 008ef6da  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 008ef6e0  56                   push esi
// 008ef6e1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ef6e5  8910                 mov dword ptr [eax], edx
// 008ef6e7  03d6                 add edx, esi
// 008ef6e9  895008               mov dword ptr [eax + 8], edx
// 008ef6ec  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ef6f0  894804               mov dword ptr [eax + 4], ecx
// 008ef6f3  03ca                 add ecx, edx
// 008ef6f5  89480c               mov dword ptr [eax + 0xc], ecx
// 008ef6f8  5e                   pop esi
// 008ef6f9  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

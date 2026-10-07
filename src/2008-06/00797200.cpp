// roc 2008-06 00797200  unit: CXTPRibbonTabPopupToolBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797200
//
// 00797200  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 00797206  8b442404             mov eax, dword ptr [esp + 4]
// 0079720a  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 00797210  56                   push esi
// 00797211  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00797215  8910                 mov dword ptr [eax], edx
// 00797217  03d6                 add edx, esi
// 00797219  895008               mov dword ptr [eax + 8], edx
// 0079721c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00797220  894804               mov dword ptr [eax + 4], ecx
// 00797223  03ca                 add ecx, edx
// 00797225  89480c               mov dword ptr [eax + 0xc], ecx
// 00797228  5e                   pop esi
// 00797229  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

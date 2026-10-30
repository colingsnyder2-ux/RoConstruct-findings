// roc 2007-03 00710880  unit: seg_00710000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00710880
//
// 00710880  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 00710886  8b442404             mov eax, dword ptr [esp + 4]
// 0071088a  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 00710890  56                   push esi
// 00710891  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00710895  8910                 mov dword ptr [eax], edx
// 00710897  03d6                 add edx, esi
// 00710899  895008               mov dword ptr [eax + 8], edx
// 0071089c  8b542410             mov edx, dword ptr [esp + 0x10]
// 007108a0  894804               mov dword ptr [eax + 4], ecx
// 007108a3  03ca                 add ecx, edx
// 007108a5  89480c               mov dword ptr [eax + 0xc], ecx
// 007108a8  5e                   pop esi
// 007108a9  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CalculatePopupRect@CXTPRibbonTabPopupToolBar@@UAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

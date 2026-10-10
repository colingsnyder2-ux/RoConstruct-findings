// roc 2008-06 006d4710  unit: CXTPReportColumn  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4710
//
// 006d4710  8b442404             mov eax, dword ptr [esp + 4]
// 006d4714  3b4160               cmp eax, dword ptr [ecx + 0x60]
// 006d4717  7417                 je 0x6d4730
// 006d4719  894160               mov dword ptr [ecx + 0x60], eax
// 006d471c  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 006d471f  e8ccb10700           call 0x74f8f0
// 006d4724  8b10                 mov edx, dword ptr [eax]
// 006d4726  8bc8                 mov ecx, eax
// 006d4728  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 006d472e  ffd0                 call eax
// 006d4730  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportColumn.cpp (function ?SetVisible@CXTPReportColumn@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportColumn.cpp

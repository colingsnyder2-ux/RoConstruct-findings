// roc 2009-12 00827c50  unit: CXTPReportColumn  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827c50
//
// 00827c50  8b442404             mov eax, dword ptr [esp + 4]
// 00827c54  3b4160               cmp eax, dword ptr [ecx + 0x60]
// 00827c57  7417                 je 0x827c70
// 00827c59  894160               mov dword ptr [ecx + 0x60], eax
// 00827c5c  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00827c5f  e84c570400           call 0x86d3b0
// 00827c64  8b10                 mov edx, dword ptr [eax]
// 00827c66  8bc8                 mov ecx, eax
// 00827c68  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 00827c6e  ffd0                 call eax
// 00827c70  c20400               ret 4
// copied from an identical function in another client (function ?SetVisible@CXTPReportColumn@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportColumn.cpp
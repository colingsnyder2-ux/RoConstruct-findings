// roc 2008-06 006c6e00  unit: CInstanceRecord::CNameItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6e00
//
// 006c6e00  8b442404             mov eax, dword ptr [esp + 4]
// 006c6e04  8b4804               mov ecx, dword ptr [eax + 4]
// 006c6e07  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006c6e0d  8b11                 mov edx, dword ptr [ecx]
// 006c6e0f  56                   push esi
// 006c6e10  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c6e14  56                   push esi
// 006c6e15  50                   push eax
// 006c6e16  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 006c6e1c  ffd0                 call eax
// 006c6e1e  5e                   pop esi
// 006c6e1f  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnDrawCaption@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp

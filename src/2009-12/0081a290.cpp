// roc 2009-12 0081a290  unit: CInstanceRecord::CNameItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a290
//
// 0081a290  8b442404             mov eax, dword ptr [esp + 4]
// 0081a294  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a297  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0081a29d  8b11                 mov edx, dword ptr [ecx]
// 0081a29f  56                   push esi
// 0081a2a0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0081a2a4  56                   push esi
// 0081a2a5  50                   push eax
// 0081a2a6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0081a2ac  ffd0                 call eax
// 0081a2ae  5e                   pop esi
// 0081a2af  c20800               ret 8
// copied from an identical function in another client (function ?OnDrawCaption@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
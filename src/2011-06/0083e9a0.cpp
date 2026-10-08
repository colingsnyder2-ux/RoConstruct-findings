// roc 2011-06 0083e9a0  unit: CInstanceRecord::CNameItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e9a0
//
// 0083e9a0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0083e9a3  8b542408             mov edx, dword ptr [esp + 8]
// 0083e9a7  83f8ff               cmp eax, -1
// 0083e9aa  7403                 je 0x83e9af
// 0083e9ac  894228               mov dword ptr [edx + 0x28], eax
// 0083e9af  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0083e9b2  83f8ff               cmp eax, -1
// 0083e9b5  7403                 je 0x83e9ba
// 0083e9b7  894224               mov dword ptr [edx + 0x24], eax
// 0083e9ba  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0083e9bd  85c0                 test eax, eax
// 0083e9bf  7515                 jne 0x83e9d6
// 0083e9c1  39413c               cmp dword ptr [ecx + 0x3c], eax
// 0083e9c4  7413                 je 0x83e9d9
// 0083e9c6  8b442404             mov eax, dword ptr [esp + 4]
// 0083e9ca  8b4804               mov ecx, dword ptr [eax + 4]
// 0083e9cd  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0083e9d3  83c028               add eax, 0x28
// 0083e9d6  894220               mov dword ptr [edx + 0x20], eax
// 0083e9d9  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?GetItemMetrics@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

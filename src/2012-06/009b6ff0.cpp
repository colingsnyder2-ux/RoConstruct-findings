// roc 2012-06 009b6ff0  unit: CInstanceRecord::CNameItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b6ff0
//
// 009b6ff0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 009b6ff3  8b542408             mov edx, dword ptr [esp + 8]
// 009b6ff7  83f8ff               cmp eax, -1
// 009b6ffa  7403                 je 0x9b6fff
// 009b6ffc  894228               mov dword ptr [edx + 0x28], eax
// 009b6fff  8b4134               mov eax, dword ptr [ecx + 0x34]
// 009b7002  83f8ff               cmp eax, -1
// 009b7005  7403                 je 0x9b700a
// 009b7007  894224               mov dword ptr [edx + 0x24], eax
// 009b700a  8b4130               mov eax, dword ptr [ecx + 0x30]
// 009b700d  85c0                 test eax, eax
// 009b700f  7515                 jne 0x9b7026
// 009b7011  39413c               cmp dword ptr [ecx + 0x3c], eax
// 009b7014  7413                 je 0x9b7029
// 009b7016  8b442404             mov eax, dword ptr [esp + 4]
// 009b701a  8b4804               mov ecx, dword ptr [eax + 4]
// 009b701d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 009b7023  83c028               add eax, 0x28
// 009b7026  894220               mov dword ptr [edx + 0x20], eax
// 009b7029  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?GetItemMetrics@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

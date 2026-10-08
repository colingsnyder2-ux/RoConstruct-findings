// roc 2009-06 0073f540  unit: CInstanceRecord::CNameItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f540
//
// 0073f540  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0073f543  8b542408             mov edx, dword ptr [esp + 8]
// 0073f547  83f8ff               cmp eax, -1
// 0073f54a  7403                 je 0x73f54f
// 0073f54c  894228               mov dword ptr [edx + 0x28], eax
// 0073f54f  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0073f552  83f8ff               cmp eax, -1
// 0073f555  7403                 je 0x73f55a
// 0073f557  894224               mov dword ptr [edx + 0x24], eax
// 0073f55a  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0073f55d  85c0                 test eax, eax
// 0073f55f  7515                 jne 0x73f576
// 0073f561  39413c               cmp dword ptr [ecx + 0x3c], eax
// 0073f564  7413                 je 0x73f579
// 0073f566  8b442404             mov eax, dword ptr [esp + 4]
// 0073f56a  8b4804               mov ecx, dword ptr [eax + 4]
// 0073f56d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0073f573  83c028               add eax, 0x28
// 0073f576  894220               mov dword ptr [edx + 0x20], eax
// 0073f579  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?GetItemMetrics@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

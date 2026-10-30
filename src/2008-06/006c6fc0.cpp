// from server: 100% by auto
// roc 2008-06 006c6fc0  unit: CInstanceRecord::CNameItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6fc0
//
// 006c6fc0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006c6fc3  8b542408             mov edx, dword ptr [esp + 8]
// 006c6fc7  83f8ff               cmp eax, -1
// 006c6fca  7403                 je 0x6c6fcf
// 006c6fcc  894228               mov dword ptr [edx + 0x28], eax
// 006c6fcf  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006c6fd2  83f8ff               cmp eax, -1
// 006c6fd5  7403                 je 0x6c6fda
// 006c6fd7  894224               mov dword ptr [edx + 0x24], eax
// 006c6fda  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006c6fdd  85c0                 test eax, eax
// 006c6fdf  7515                 jne 0x6c6ff6
// 006c6fe1  39413c               cmp dword ptr [ecx + 0x3c], eax
// 006c6fe4  7413                 je 0x6c6ff9
// 006c6fe6  8b442404             mov eax, dword ptr [esp + 4]
// 006c6fea  8b4804               mov ecx, dword ptr [eax + 4]
// 006c6fed  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 006c6ff3  83c028               add eax, 0x28
// 006c6ff6  894220               mov dword ptr [edx + 0x20], eax
// 006c6ff9  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?GetItemMetrics@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

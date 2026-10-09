// roc 2009-12 0081a450  unit: CInstanceRecord::CNameItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a450
//
// 0081a450  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0081a453  8b542408             mov edx, dword ptr [esp + 8]
// 0081a457  83f8ff               cmp eax, -1
// 0081a45a  7403                 je 0x81a45f
// 0081a45c  894228               mov dword ptr [edx + 0x28], eax
// 0081a45f  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0081a462  83f8ff               cmp eax, -1
// 0081a465  7403                 je 0x81a46a
// 0081a467  894224               mov dword ptr [edx + 0x24], eax
// 0081a46a  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0081a46d  85c0                 test eax, eax
// 0081a46f  7515                 jne 0x81a486
// 0081a471  39413c               cmp dword ptr [ecx + 0x3c], eax
// 0081a474  7413                 je 0x81a489
// 0081a476  8b442404             mov eax, dword ptr [esp + 4]
// 0081a47a  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a47d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0081a483  83c028               add eax, 0x28
// 0081a486  894220               mov dword ptr [edx + 0x20], eax
// 0081a489  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?GetItemMetrics@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

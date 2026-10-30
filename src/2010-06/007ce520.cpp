// roc 2010-06 007ce520  unit: CInstanceRecord::CNameItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce520
//
// 007ce520  8b4138               mov eax, dword ptr [ecx + 0x38]
// 007ce523  8b542408             mov edx, dword ptr [esp + 8]
// 007ce527  83f8ff               cmp eax, -1
// 007ce52a  7403                 je 0x7ce52f
// 007ce52c  894228               mov dword ptr [edx + 0x28], eax
// 007ce52f  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007ce532  83f8ff               cmp eax, -1
// 007ce535  7403                 je 0x7ce53a
// 007ce537  894224               mov dword ptr [edx + 0x24], eax
// 007ce53a  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007ce53d  85c0                 test eax, eax
// 007ce53f  7515                 jne 0x7ce556
// 007ce541  39413c               cmp dword ptr [ecx + 0x3c], eax
// 007ce544  7413                 je 0x7ce559
// 007ce546  8b442404             mov eax, dword ptr [esp + 4]
// 007ce54a  8b4804               mov ecx, dword ptr [eax + 4]
// 007ce54d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007ce553  83c028               add eax, 0x28
// 007ce556  894220               mov dword ptr [edx + 0x20], eax
// 007ce559  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?GetItemMetrics@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

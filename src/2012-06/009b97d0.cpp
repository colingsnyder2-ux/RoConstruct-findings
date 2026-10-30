// roc 2012-06 009b97d0  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b97d0
//
// 009b97d0  8b542404             mov edx, dword ptr [esp + 4]
// 009b97d4  8b4204               mov eax, dword ptr [edx + 4]
// 009b97d7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 009b97dd  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 009b97e3  0530010000           add eax, 0x130
// 009b97e8  83f9ff               cmp ecx, -1
// 009b97eb  7505                 jne 0x9b97f2
// 009b97ed  8b4004               mov eax, dword ptr [eax + 4]
// 009b97f0  eb02                 jmp 0x9b97f4
// 009b97f2  8bc1                 mov eax, ecx
// 009b97f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009b97f8  894124               mov dword ptr [ecx + 0x24], eax
// 009b97fb  8b5204               mov edx, dword ptr [edx + 4]
// 009b97fe  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 009b9804  83c038               add eax, 0x38
// 009b9807  894120               mov dword ptr [ecx + 0x20], eax
// 009b980a  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetItemMetrics@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

// roc 2011-06 00841390  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00841390
//
// 00841390  8b542404             mov edx, dword ptr [esp + 4]
// 00841394  8b4204               mov eax, dword ptr [edx + 4]
// 00841397  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0084139d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 008413a3  0530010000           add eax, 0x130
// 008413a8  83f9ff               cmp ecx, -1
// 008413ab  7505                 jne 0x8413b2
// 008413ad  8b4004               mov eax, dword ptr [eax + 4]
// 008413b0  eb02                 jmp 0x8413b4
// 008413b2  8bc1                 mov eax, ecx
// 008413b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008413b8  894124               mov dword ptr [ecx + 0x24], eax
// 008413bb  8b5204               mov edx, dword ptr [edx + 4]
// 008413be  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 008413c4  83c038               add eax, 0x38
// 008413c7  894120               mov dword ptr [ecx + 0x20], eax
// 008413ca  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetItemMetrics@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

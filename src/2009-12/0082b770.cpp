// roc 2009-12 0082b770  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b770
//
// 0082b770  8b542404             mov edx, dword ptr [esp + 4]
// 0082b774  8b4204               mov eax, dword ptr [edx + 4]
// 0082b777  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0082b77d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 0082b783  0530010000           add eax, 0x130
// 0082b788  83f9ff               cmp ecx, -1
// 0082b78b  7505                 jne 0x82b792
// 0082b78d  8b4004               mov eax, dword ptr [eax + 4]
// 0082b790  eb02                 jmp 0x82b794
// 0082b792  8bc1                 mov eax, ecx
// 0082b794  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082b798  894124               mov dword ptr [ecx + 0x24], eax
// 0082b79b  8b5204               mov edx, dword ptr [edx + 4]
// 0082b79e  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 0082b7a4  83c038               add eax, 0x38
// 0082b7a7  894120               mov dword ptr [ecx + 0x20], eax
// 0082b7aa  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetItemMetrics@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

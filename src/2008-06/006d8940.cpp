// from server: 100% by auto
// roc 2008-06 006d8940  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8940
//
// 006d8940  8b542404             mov edx, dword ptr [esp + 4]
// 006d8944  8b4204               mov eax, dword ptr [edx + 4]
// 006d8947  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006d894d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 006d8953  0530010000           add eax, 0x130
// 006d8958  83f9ff               cmp ecx, -1
// 006d895b  7505                 jne 0x6d8962
// 006d895d  8b4004               mov eax, dword ptr [eax + 4]
// 006d8960  eb02                 jmp 0x6d8964
// 006d8962  8bc1                 mov eax, ecx
// 006d8964  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d8968  894124               mov dword ptr [ecx + 0x24], eax
// 006d896b  8b5204               mov edx, dword ptr [edx + 4]
// 006d896e  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 006d8974  83c038               add eax, 0x38
// 006d8977  894120               mov dword ptr [ecx + 0x20], eax
// 006d897a  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetItemMetrics@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

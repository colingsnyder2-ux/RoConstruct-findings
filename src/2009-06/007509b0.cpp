// roc 2009-06 007509b0  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007509b0
//
// 007509b0  8b542404             mov edx, dword ptr [esp + 4]
// 007509b4  8b4204               mov eax, dword ptr [edx + 4]
// 007509b7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007509bd  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 007509c3  0530010000           add eax, 0x130
// 007509c8  83f9ff               cmp ecx, -1
// 007509cb  7505                 jne 0x7509d2
// 007509cd  8b4004               mov eax, dword ptr [eax + 4]
// 007509d0  eb02                 jmp 0x7509d4
// 007509d2  8bc1                 mov eax, ecx
// 007509d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007509d8  894124               mov dword ptr [ecx + 0x24], eax
// 007509db  8b5204               mov edx, dword ptr [edx + 4]
// 007509de  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 007509e4  83c038               add eax, 0x38
// 007509e7  894120               mov dword ptr [ecx + 0x20], eax
// 007509ea  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetItemMetrics@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

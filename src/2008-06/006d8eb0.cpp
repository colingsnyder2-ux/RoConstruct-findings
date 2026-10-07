// roc 2008-06 006d8eb0  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8eb0
//
// 006d8eb0  8b442404             mov eax, dword ptr [esp + 4]
// 006d8eb4  8b4004               mov eax, dword ptr [eax + 4]
// 006d8eb7  85c0                 test eax, eax
// 006d8eb9  742f                 je 0x6d8eea
// 006d8ebb  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006d8ec1  8b8854020000         mov ecx, dword ptr [eax + 0x254]
// 006d8ec7  8b9050020000         mov edx, dword ptr [eax + 0x250]
// 006d8ecd  0548020000           add eax, 0x248
// 006d8ed2  56                   push esi
// 006d8ed3  8b30                 mov esi, dword ptr [eax]
// 006d8ed5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d8ed9  ff4804               dec dword ptr [eax + 4]
// 006d8edc  295008               sub dword ptr [eax + 8], edx
// 006d8edf  83ee02               sub esi, 2
// 006d8ee2  0130                 add dword ptr [eax], esi
// 006d8ee4  f7d9                 neg ecx
// 006d8ee6  29480c               sub dword ptr [eax + 0xc], ecx
// 006d8ee9  5e                   pop esi
// 006d8eea  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetCaptionRect@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

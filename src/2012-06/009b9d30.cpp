// roc 2012-06 009b9d30  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b9d30
//
// 009b9d30  8b442404             mov eax, dword ptr [esp + 4]
// 009b9d34  8b4004               mov eax, dword ptr [eax + 4]
// 009b9d37  85c0                 test eax, eax
// 009b9d39  742f                 je 0x9b9d6a
// 009b9d3b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 009b9d41  8b8854020000         mov ecx, dword ptr [eax + 0x254]
// 009b9d47  8b9050020000         mov edx, dword ptr [eax + 0x250]
// 009b9d4d  0548020000           add eax, 0x248
// 009b9d52  56                   push esi
// 009b9d53  8b30                 mov esi, dword ptr [eax]
// 009b9d55  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009b9d59  ff4804               dec dword ptr [eax + 4]
// 009b9d5c  295008               sub dword ptr [eax + 8], edx
// 009b9d5f  83ee02               sub esi, 2
// 009b9d62  0130                 add dword ptr [eax], esi
// 009b9d64  f7d9                 neg ecx
// 009b9d66  29480c               sub dword ptr [eax + 0xc], ecx
// 009b9d69  5e                   pop esi
// 009b9d6a  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetCaptionRect@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

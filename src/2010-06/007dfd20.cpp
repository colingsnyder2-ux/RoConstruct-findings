// roc 2010-06 007dfd20  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dfd20
//
// 007dfd20  8b442404             mov eax, dword ptr [esp + 4]
// 007dfd24  8b4004               mov eax, dword ptr [eax + 4]
// 007dfd27  85c0                 test eax, eax
// 007dfd29  742f                 je 0x7dfd5a
// 007dfd2b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007dfd31  8b8854020000         mov ecx, dword ptr [eax + 0x254]
// 007dfd37  8b9050020000         mov edx, dword ptr [eax + 0x250]
// 007dfd3d  0548020000           add eax, 0x248
// 007dfd42  56                   push esi
// 007dfd43  8b30                 mov esi, dword ptr [eax]
// 007dfd45  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007dfd49  ff4804               dec dword ptr [eax + 4]
// 007dfd4c  295008               sub dword ptr [eax + 8], edx
// 007dfd4f  83ee02               sub esi, 2
// 007dfd52  0130                 add dword ptr [eax], esi
// 007dfd54  f7d9                 neg ecx
// 007dfd56  29480c               sub dword ptr [eax + 0xc], ecx
// 007dfd59  5e                   pop esi
// 007dfd5a  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetCaptionRect@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

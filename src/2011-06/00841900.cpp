// roc 2011-06 00841900  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00841900
//
// 00841900  8b442404             mov eax, dword ptr [esp + 4]
// 00841904  8b4004               mov eax, dword ptr [eax + 4]
// 00841907  85c0                 test eax, eax
// 00841909  742f                 je 0x84193a
// 0084190b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00841911  8b8854020000         mov ecx, dword ptr [eax + 0x254]
// 00841917  8b9050020000         mov edx, dword ptr [eax + 0x250]
// 0084191d  0548020000           add eax, 0x248
// 00841922  56                   push esi
// 00841923  8b30                 mov esi, dword ptr [eax]
// 00841925  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00841929  ff4804               dec dword ptr [eax + 4]
// 0084192c  295008               sub dword ptr [eax + 8], edx
// 0084192f  83ee02               sub esi, 2
// 00841932  0130                 add dword ptr [eax], esi
// 00841934  f7d9                 neg ecx
// 00841936  29480c               sub dword ptr [eax + 0xc], ecx
// 00841939  5e                   pop esi
// 0084193a  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetCaptionRect@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

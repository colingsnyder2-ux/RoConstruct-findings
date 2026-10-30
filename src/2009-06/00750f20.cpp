// roc 2009-06 00750f20  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750f20
//
// 00750f20  8b442404             mov eax, dword ptr [esp + 4]
// 00750f24  8b4004               mov eax, dword ptr [eax + 4]
// 00750f27  85c0                 test eax, eax
// 00750f29  742f                 je 0x750f5a
// 00750f2b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00750f31  8b8854020000         mov ecx, dword ptr [eax + 0x254]
// 00750f37  8b9050020000         mov edx, dword ptr [eax + 0x250]
// 00750f3d  0548020000           add eax, 0x248
// 00750f42  56                   push esi
// 00750f43  8b30                 mov esi, dword ptr [eax]
// 00750f45  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00750f49  ff4804               dec dword ptr [eax + 4]
// 00750f4c  295008               sub dword ptr [eax + 8], edx
// 00750f4f  83ee02               sub esi, 2
// 00750f52  0130                 add dword ptr [eax], esi
// 00750f54  f7d9                 neg ecx
// 00750f56  29480c               sub dword ptr [eax + 0xc], ecx
// 00750f59  5e                   pop esi
// 00750f5a  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetCaptionRect@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

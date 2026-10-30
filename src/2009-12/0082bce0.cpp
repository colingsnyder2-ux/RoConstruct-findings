// roc 2009-12 0082bce0  unit: CXTPReportRecordItemPreview  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082bce0
//
// 0082bce0  8b442404             mov eax, dword ptr [esp + 4]
// 0082bce4  8b4004               mov eax, dword ptr [eax + 4]
// 0082bce7  85c0                 test eax, eax
// 0082bce9  742f                 je 0x82bd1a
// 0082bceb  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0082bcf1  8b8854020000         mov ecx, dword ptr [eax + 0x254]
// 0082bcf7  8b9050020000         mov edx, dword ptr [eax + 0x250]
// 0082bcfd  0548020000           add eax, 0x248
// 0082bd02  56                   push esi
// 0082bd03  8b30                 mov esi, dword ptr [eax]
// 0082bd05  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082bd09  ff4804               dec dword ptr [eax + 4]
// 0082bd0c  295008               sub dword ptr [eax + 8], edx
// 0082bd0f  83ee02               sub esi, 2
// 0082bd12  0130                 add dword ptr [eax], esi
// 0082bd14  f7d9                 neg ecx
// 0082bd16  29480c               sub dword ptr [eax + 0xc], ecx
// 0082bd19  5e                   pop esi
// 0082bd1a  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetCaptionRect@CXTPReportRecordItemPreview@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp

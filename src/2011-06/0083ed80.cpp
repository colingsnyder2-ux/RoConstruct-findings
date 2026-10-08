// from server: 100% by auto
// roc 2011-06 0083ed80  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083ed80
//
// 0083ed80  56                   push esi
// 0083ed81  8bf1                 mov esi, ecx
// 0083ed83  8b4608               mov eax, dword ptr [esi + 8]
// 0083ed86  57                   push edi
// 0083ed87  8b3d4c03a400         mov edi, dword ptr [0xa4034c]
// 0083ed8d  85c0                 test eax, eax
// 0083ed8f  7406                 je 0x83ed97
// 0083ed91  83c004               add eax, 4
// 0083ed94  50                   push eax
// 0083ed95  ffd7                 call edi
// 0083ed97  8b460c               mov eax, dword ptr [esi + 0xc]
// 0083ed9a  85c0                 test eax, eax
// 0083ed9c  7406                 je 0x83eda4
// 0083ed9e  83c004               add eax, 4
// 0083eda1  50                   push eax
// 0083eda2  ffd7                 call edi
// 0083eda4  8b7610               mov esi, dword ptr [esi + 0x10]
// 0083eda7  85f6                 test esi, esi
// 0083eda9  7406                 je 0x83edb1
// 0083edab  83c604               add esi, 4
// 0083edae  56                   push esi
// 0083edaf  ffd7                 call edi
// 0083edb1  5f                   pop edi
// 0083edb2  5e                   pop esi
// 0083edb3  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?AddRef@XTP_REPORTRECORDITEM_ARGS@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

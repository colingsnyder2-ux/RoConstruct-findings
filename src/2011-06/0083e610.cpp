// roc 2011-06 0083e610  unit: CXTPReportHeader  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e610
//
// 0083e610  56                   push esi
// 0083e611  8bf1                 mov esi, ecx
// 0083e613  8b4e08               mov ecx, dword ptr [esi + 8]
// 0083e616  85c9                 test ecx, ecx
// 0083e618  7405                 je 0x83e61f
// 0083e61a  e8bbbffcff           call 0x80a5da
// 0083e61f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0083e622  85c9                 test ecx, ecx
// 0083e624  7405                 je 0x83e62b
// 0083e626  e8afbffcff           call 0x80a5da
// 0083e62b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0083e62e  5e                   pop esi
// 0083e62f  85c9                 test ecx, ecx
// 0083e631  7405                 je 0x83e638
// 0083e633  e9a2bffcff           jmp 0x80a5da
// 0083e638  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?Release@XTP_REPORTRECORDITEM_ARGS@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

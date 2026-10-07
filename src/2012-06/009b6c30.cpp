// roc 2012-06 009b6c30  unit: CXTPReportHeader  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b6c30
//
// 009b6c30  56                   push esi
// 009b6c31  8bf1                 mov esi, ecx
// 009b6c33  8b4e08               mov ecx, dword ptr [esi + 8]
// 009b6c36  85c9                 test ecx, ecx
// 009b6c38  7405                 je 0x9b6c3f
// 009b6c3a  e84bbafcff           call 0x98268a
// 009b6c3f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009b6c42  85c9                 test ecx, ecx
// 009b6c44  7405                 je 0x9b6c4b
// 009b6c46  e83fbafcff           call 0x98268a
// 009b6c4b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 009b6c4e  5e                   pop esi
// 009b6c4f  85c9                 test ecx, ecx
// 009b6c51  7405                 je 0x9b6c58
// 009b6c53  e932bafcff           jmp 0x98268a
// 009b6c58  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?Release@XTP_REPORTRECORDITEM_ARGS@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

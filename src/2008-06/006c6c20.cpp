// roc 2008-06 006c6c20  unit: CXTPReportView  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6c20
//
// 006c6c20  56                   push esi
// 006c6c21  8bf1                 mov esi, ecx
// 006c6c23  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c6c26  85c9                 test ecx, ecx
// 006c6c28  7405                 je 0x6c6c2f
// 006c6c2a  e8b59ffdff           call 0x6a0be4
// 006c6c2f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006c6c32  85c9                 test ecx, ecx
// 006c6c34  7405                 je 0x6c6c3b
// 006c6c36  e8a99ffdff           call 0x6a0be4
// 006c6c3b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c6c3e  5e                   pop esi
// 006c6c3f  85c9                 test ecx, ecx
// 006c6c41  7405                 je 0x6c6c48
// 006c6c43  e99c9ffdff           jmp 0x6a0be4
// 006c6c48  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?Release@XTP_REPORTRECORDITEM_ARGS@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

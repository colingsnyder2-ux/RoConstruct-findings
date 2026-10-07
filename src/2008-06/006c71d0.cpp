// roc 2008-06 006c71d0  unit: XTP_REPORTRECORDITEM_METRICS  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c71d0
//
// 006c71d0  33c0                 xor eax, eax
// 006c71d2  56                   push esi
// 006c71d3  8bf1                 mov esi, ecx
// 006c71d5  894604               mov dword ptr [esi + 4], eax
// 006c71d8  894608               mov dword ptr [esi + 8], eax
// 006c71db  89460c               mov dword ptr [esi + 0xc], eax
// 006c71de  894610               mov dword ptr [esi + 0x10], eax
// 006c71e1  8d4614               lea eax, [esi + 0x14]
// 006c71e4  50                   push eax
// 006c71e5  c706dc328500         mov dword ptr [esi], 0x8532dc
// 006c71eb  ff157c2c8000         call dword ptr [0x802c7c]
// 006c71f1  8bc6                 mov eax, esi
// 006c71f3  5e                   pop esi
// 006c71f4  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ??0XTP_REPORTRECORDITEM_ARGS@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

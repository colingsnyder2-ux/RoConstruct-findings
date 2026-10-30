// from server: 100% by auto
// roc 2012-06 009b7190  unit: CInstanceRecord::CNameItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7190
//
// 009b7190  33c0                 xor eax, eax
// 009b7192  56                   push esi
// 009b7193  8bf1                 mov esi, ecx
// 009b7195  894604               mov dword ptr [esi + 4], eax
// 009b7198  894608               mov dword ptr [esi + 8], eax
// 009b719b  89460c               mov dword ptr [esi + 0xc], eax
// 009b719e  894610               mov dword ptr [esi + 0x10], eax
// 009b71a1  8d4614               lea eax, [esi + 0x14]
// 009b71a4  50                   push eax
// 009b71a5  c706800cc100         mov dword ptr [esi], 0xc10c80
// 009b71ab  ff15903ab200         call dword ptr [0xb23a90]
// 009b71b1  8bc6                 mov eax, esi
// 009b71b3  5e                   pop esi
// 009b71b4  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ??0XTP_REPORTRECORDITEM_ARGS@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

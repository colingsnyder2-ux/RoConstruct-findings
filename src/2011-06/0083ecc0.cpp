// from server: 100% by auto
// roc 2011-06 0083ecc0  unit: CInstanceRecord::CNameItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083ecc0
//
// 0083ecc0  33c0                 xor eax, eax
// 0083ecc2  56                   push esi
// 0083ecc3  8bf1                 mov esi, ecx
// 0083ecc5  894604               mov dword ptr [esi + 4], eax
// 0083ecc8  894608               mov dword ptr [esi + 8], eax
// 0083eccb  89460c               mov dword ptr [esi + 0xc], eax
// 0083ecce  894610               mov dword ptr [esi + 0x10], eax
// 0083ecd1  8d4614               lea eax, [esi + 0x14]
// 0083ecd4  50                   push eax
// 0083ecd5  c7069855ac00         mov dword ptr [esi], 0xac5598
// 0083ecdb  ff15ac19a400         call dword ptr [0xa419ac]
// 0083ece1  8bc6                 mov eax, esi
// 0083ece3  5e                   pop esi
// 0083ece4  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ??0XTP_REPORTRECORDITEM_ARGS@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

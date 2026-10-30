// from server: 100% by auto
// roc 2012-06 009b7230  unit: CInstanceRecord::CNameItem  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7230
//
// 009b7230  56                   push esi
// 009b7231  8bf1                 mov esi, ecx
// 009b7233  8b4608               mov eax, dword ptr [esi + 8]
// 009b7236  57                   push edi
// 009b7237  8b3d9821b200         mov edi, dword ptr [0xb22198]
// 009b723d  85c0                 test eax, eax
// 009b723f  7406                 je 0x9b7247
// 009b7241  83c004               add eax, 4
// 009b7244  50                   push eax
// 009b7245  ffd7                 call edi
// 009b7247  8b460c               mov eax, dword ptr [esi + 0xc]
// 009b724a  85c0                 test eax, eax
// 009b724c  7406                 je 0x9b7254
// 009b724e  83c004               add eax, 4
// 009b7251  50                   push eax
// 009b7252  ffd7                 call edi
// 009b7254  8b7610               mov esi, dword ptr [esi + 0x10]
// 009b7257  85f6                 test esi, esi
// 009b7259  7406                 je 0x9b7261
// 009b725b  83c604               add esi, 4
// 009b725e  56                   push esi
// 009b725f  ffd7                 call edi
// 009b7261  5f                   pop edi
// 009b7262  5e                   pop esi
// 009b7263  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?AddRef@XTP_REPORTRECORDITEM_ARGS@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

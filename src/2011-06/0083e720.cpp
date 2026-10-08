// from server: 100% by auto
// roc 2011-06 0083e720  unit: CInstanceRecord::CNameItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e720
//
// 0083e720  56                   push esi
// 0083e721  8b35e019a400         mov esi, dword ptr [0xa419e0]
// 0083e727  57                   push edi
// 0083e728  6a00                 push 0
// 0083e72a  6a00                 push 0
// 0083e72c  6a00                 push 0
// 0083e72e  6a00                 push 0
// 0083e730  6a17                 push 0x17
// 0083e732  ffd6                 call esi
// 0083e734  8b3da81aa400         mov edi, dword ptr [0xa41aa8]
// 0083e73a  f7d8                 neg eax
// 0083e73c  1bc0                 sbb eax, eax
// 0083e73e  83e006               and eax, 6
// 0083e741  83c002               add eax, 2
// 0083e744  50                   push eax
// 0083e745  ffd7                 call edi
// 0083e747  6a00                 push 0
// 0083e749  6a00                 push 0
// 0083e74b  6a00                 push 0
// 0083e74d  6a00                 push 0
// 0083e74f  6a17                 push 0x17
// 0083e751  ffd6                 call esi
// 0083e753  f7d8                 neg eax
// 0083e755  1bc0                 sbb eax, eax
// 0083e757  83e00c               and eax, 0xc
// 0083e75a  83c004               add eax, 4
// 0083e75d  50                   push eax
// 0083e75e  ffd7                 call edi
// 0083e760  5f                   pop edi
// 0083e761  5e                   pop esi
// 0083e762  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?DoMouseButtonClick@CXTPReportRecordItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

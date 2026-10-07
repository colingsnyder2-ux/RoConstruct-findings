// roc 2012-06 009b6d50  unit: CInstanceRecord::CNameItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b6d50
//
// 009b6d50  56                   push esi
// 009b6d51  8b35fc3bb200         mov esi, dword ptr [0xb23bfc]
// 009b6d57  57                   push edi
// 009b6d58  6a00                 push 0
// 009b6d5a  6a00                 push 0
// 009b6d5c  6a00                 push 0
// 009b6d5e  6a00                 push 0
// 009b6d60  6a17                 push 0x17
// 009b6d62  ffd6                 call esi
// 009b6d64  8b3db83cb200         mov edi, dword ptr [0xb23cb8]
// 009b6d6a  f7d8                 neg eax
// 009b6d6c  1bc0                 sbb eax, eax
// 009b6d6e  83e006               and eax, 6
// 009b6d71  83c002               add eax, 2
// 009b6d74  50                   push eax
// 009b6d75  ffd7                 call edi
// 009b6d77  6a00                 push 0
// 009b6d79  6a00                 push 0
// 009b6d7b  6a00                 push 0
// 009b6d7d  6a00                 push 0
// 009b6d7f  6a17                 push 0x17
// 009b6d81  ffd6                 call esi
// 009b6d83  f7d8                 neg eax
// 009b6d85  1bc0                 sbb eax, eax
// 009b6d87  83e00c               and eax, 0xc
// 009b6d8a  83c004               add eax, 4
// 009b6d8d  50                   push eax
// 009b6d8e  ffd7                 call edi
// 009b6d90  5f                   pop edi
// 009b6d91  5e                   pop esi
// 009b6d92  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?DoMouseButtonClick@CXTPReportRecordItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp

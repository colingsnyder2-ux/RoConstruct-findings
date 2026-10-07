// roc 2008-06 006c6d30  unit: CInstanceRecord::CNameItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6d30
//
// 006c6d30  56                   push esi
// 006c6d31  8b354c2d8000         mov esi, dword ptr [0x802d4c]
// 006c6d37  57                   push edi
// 006c6d38  6a00                 push 0
// 006c6d3a  6a00                 push 0
// 006c6d3c  6a00                 push 0
// 006c6d3e  6a00                 push 0
// 006c6d40  6a17                 push 0x17
// 006c6d42  ffd6                 call esi
// 006c6d44  8b3da02b8000         mov edi, dword ptr [0x802ba0]
// 006c6d4a  f7d8                 neg eax
// 006c6d4c  1bc0                 sbb eax, eax
// 006c6d4e  83e006               and eax, 6
// 006c6d51  83c002               add eax, 2
// 006c6d54  50                   push eax
// 006c6d55  ffd7                 call edi
// 006c6d57  6a00                 push 0
// 006c6d59  6a00                 push 0
// 006c6d5b  6a00                 push 0
// 006c6d5d  6a00                 push 0
// 006c6d5f  6a17                 push 0x17
// 006c6d61  ffd6                 call esi
// 006c6d63  f7d8                 neg eax
// 006c6d65  1bc0                 sbb eax, eax
// 006c6d67  83e00c               and eax, 0xc
// 006c6d6a  83c004               add eax, 4
// 006c6d6d  50                   push eax
// 006c6d6e  ffd7                 call edi
// 006c6d70  5f                   pop edi
// 006c6d71  5e                   pop esi
// 006c6d72  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?DoMouseButtonClick@CXTPReportRecordItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp

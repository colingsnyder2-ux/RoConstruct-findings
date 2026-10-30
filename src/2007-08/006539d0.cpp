// from server: 100% by auto
// roc 2007-08 006539d0  unit: CInstanceRecord::CNameItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006539d0
//
// 006539d0  56                   push esi
// 006539d1  8b35b8ed7700         mov esi, dword ptr [0x77edb8]
// 006539d7  57                   push edi
// 006539d8  6a00                 push 0
// 006539da  6a00                 push 0
// 006539dc  6a00                 push 0
// 006539de  6a00                 push 0
// 006539e0  6a17                 push 0x17
// 006539e2  ffd6                 call esi
// 006539e4  8b3d94ee7700         mov edi, dword ptr [0x77ee94]
// 006539ea  f7d8                 neg eax
// 006539ec  1bc0                 sbb eax, eax
// 006539ee  83e006               and eax, 6
// 006539f1  83c002               add eax, 2
// 006539f4  50                   push eax
// 006539f5  ffd7                 call edi
// 006539f7  6a00                 push 0
// 006539f9  6a00                 push 0
// 006539fb  6a00                 push 0
// 006539fd  6a00                 push 0
// 006539ff  6a17                 push 0x17
// 00653a01  ffd6                 call esi
// 00653a03  f7d8                 neg eax
// 00653a05  1bc0                 sbb eax, eax
// 00653a07  83e00c               and eax, 0xc
// 00653a0a  83c004               add eax, 4
// 00653a0d  50                   push eax
// 00653a0e  ffd7                 call edi
// 00653a10  5f                   pop edi
// 00653a11  5e                   pop esi
// 00653a12  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItem.cpp (function ?DoMouseButtonClick@CXTPReportRecordItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItem.cpp

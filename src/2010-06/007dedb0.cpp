// roc 2010-06 007dedb0  unit: CInstanceRecord  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dedb0
//
// 007dedb0  56                   push esi
// 007dedb1  8bf1                 mov esi, ecx
// 007dedb3  85f6                 test esi, esi
// 007dedb5  741c                 je 0x7dedd3
// 007dedb7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007dedbb  e8909dfdff           call 0x7b8b50
// 007dedc0  85c0                 test eax, eax
// 007dedc2  7c0f                 jl 0x7dedd3
// 007dedc4  3b4628               cmp eax, dword ptr [esi + 0x28]
// 007dedc7  7d0a                 jge 0x7dedd3
// 007dedc9  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007dedcc  8b0481               mov eax, dword ptr [ecx + eax*4]
// 007dedcf  5e                   pop esi
// 007dedd0  c20400               ret 4
// 007dedd3  33c0                 xor eax, eax
// 007dedd5  5e                   pop esi
// 007dedd6  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportRecord.cpp (function ?GetItem@CXTPReportRecord@@QBEPAVCXTPReportRecordItem@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecord.cpp

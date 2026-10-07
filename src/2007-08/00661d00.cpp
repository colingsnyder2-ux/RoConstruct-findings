// roc 2007-08 00661d00  unit: CInstanceRecord  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661d00
//
// 00661d00  56                   push esi
// 00661d01  8bf1                 mov esi, ecx
// 00661d03  85f6                 test esi, esi
// 00661d05  741c                 je 0x661d23
// 00661d07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00661d0b  e8601bffff           call 0x653870
// 00661d10  85c0                 test eax, eax
// 00661d12  7c0f                 jl 0x661d23
// 00661d14  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00661d17  7d0a                 jge 0x661d23
// 00661d19  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00661d1c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00661d1f  5e                   pop esi
// 00661d20  c20400               ret 4
// 00661d23  33c0                 xor eax, eax
// 00661d25  5e                   pop esi
// 00661d26  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecord.cpp (function ?GetItem@CXTPReportRecord@@QBEPAVCXTPReportRecordItem@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecord.cpp

// from server: 100% by auto
// roc 2008-06 006d7f40  unit: CInstanceRecord  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7f40
//
// 006d7f40  56                   push esi
// 006d7f41  8bf1                 mov esi, ecx
// 006d7f43  85f6                 test esi, esi
// 006d7f45  741c                 je 0x6d7f63
// 006d7f47  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d7f4b  e8101bfeff           call 0x6b9a60
// 006d7f50  85c0                 test eax, eax
// 006d7f52  7c0f                 jl 0x6d7f63
// 006d7f54  3b4628               cmp eax, dword ptr [esi + 0x28]
// 006d7f57  7d0a                 jge 0x6d7f63
// 006d7f59  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d7f5c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006d7f5f  5e                   pop esi
// 006d7f60  c20400               ret 4
// 006d7f63  33c0                 xor eax, eax
// 006d7f65  5e                   pop esi
// 006d7f66  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecord.cpp (function ?GetItem@CXTPReportRecord@@QBEPAVCXTPReportRecordItem@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecord.cpp

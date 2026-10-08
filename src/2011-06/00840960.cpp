// from server: 100% by auto
// roc 2011-06 00840960  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00840960
//
// 00840960  56                   push esi
// 00840961  8bf1                 mov esi, ecx
// 00840963  85f6                 test esi, esi
// 00840965  741c                 je 0x840983
// 00840967  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084096b  e860380600           call 0x8a41d0
// 00840970  85c0                 test eax, eax
// 00840972  7c0f                 jl 0x840983
// 00840974  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00840977  7d0a                 jge 0x840983
// 00840979  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0084097c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0084097f  5e                   pop esi
// 00840980  c20400               ret 4
// 00840983  33c0                 xor eax, eax
// 00840985  5e                   pop esi
// 00840986  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportRecord.cpp (function ?GetItem@CXTPReportRecord@@QBEPAVCXTPReportRecordItem@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecord.cpp

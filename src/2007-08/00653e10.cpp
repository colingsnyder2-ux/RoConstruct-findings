// roc 2007-08 00653e10  unit: XTP_REPORTRECORDITEM_METRICS  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653e10
//
// 00653e10  33c0                 xor eax, eax
// 00653e12  56                   push esi
// 00653e13  8bf1                 mov esi, ecx
// 00653e15  894604               mov dword ptr [esi + 4], eax
// 00653e18  894608               mov dword ptr [esi + 8], eax
// 00653e1b  89460c               mov dword ptr [esi + 0xc], eax
// 00653e1e  894610               mov dword ptr [esi + 0x10], eax
// 00653e21  8d4614               lea eax, [esi + 0x14]
// 00653e24  50                   push eax
// 00653e25  c706287e7c00         mov dword ptr [esi], 0x7c7e28
// 00653e2b  ff1514ee7700         call dword ptr [0x77ee14]
// 00653e31  8bc6                 mov eax, esi
// 00653e33  5e                   pop esi
// 00653e34  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItem.cpp (function ??0XTP_REPORTRECORDITEM_ARGS@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItem.cpp

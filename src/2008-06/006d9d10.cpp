// roc 2008-06 006d9d10  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d9d10
//
// 006d9d10  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006d9d13  83ec14               sub esp, 0x14
// 006d9d16  85c9                 test ecx, ecx
// 006d9d18  7430                 je 0x6d9d4a
// 006d9d1a  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d9d1e  33c0                 xor eax, eax
// 006d9d20  8944240c             mov dword ptr [esp + 0xc], eax
// 006d9d24  89442410             mov dword ptr [esp + 0x10], eax
// 006d9d28  890424               mov dword ptr [esp], eax
// 006d9d2b  89442404             mov dword ptr [esp + 4], eax
// 006d9d2f  89442408             mov dword ptr [esp + 8], eax
// 006d9d33  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006d9d37  8944240c             mov dword ptr [esp + 0xc], eax
// 006d9d3b  8d0424               lea eax, [esp]
// 006d9d3e  50                   push eax
// 006d9d3f  6ab0                 push -0x50
// 006d9d41  89542418             mov dword ptr [esp + 0x18], edx
// 006d9d45  e8d65fffff           call 0x6cfd20
// 006d9d4a  83c414               add esp, 0x14
// 006d9d4d  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_NotifySelChanging@CXTPReportSelectedRows@@QAEXW4XTPReportSelectionChangeType@@PAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp

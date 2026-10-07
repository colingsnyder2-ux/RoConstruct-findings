// roc 2012-06 009bb290  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb290
//
// 009bb290  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009bb293  83ec14               sub esp, 0x14
// 009bb296  85c9                 test ecx, ecx
// 009bb298  7430                 je 0x9bb2ca
// 009bb29a  8b542418             mov edx, dword ptr [esp + 0x18]
// 009bb29e  33c0                 xor eax, eax
// 009bb2a0  8944240c             mov dword ptr [esp + 0xc], eax
// 009bb2a4  89442410             mov dword ptr [esp + 0x10], eax
// 009bb2a8  890424               mov dword ptr [esp], eax
// 009bb2ab  89442404             mov dword ptr [esp + 4], eax
// 009bb2af  89442408             mov dword ptr [esp + 8], eax
// 009bb2b3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009bb2b7  8944240c             mov dword ptr [esp + 0xc], eax
// 009bb2bb  8d0424               lea eax, [esp]
// 009bb2be  50                   push eax
// 009bb2bf  6ab0                 push -0x50
// 009bb2c1  89542418             mov dword ptr [esp + 0x18], edx
// 009bb2c5  e8a647ffff           call 0x9afa70
// 009bb2ca  83c414               add esp, 0x14
// 009bb2cd  c20800               ret 8
// library xtp-13.2.1/Source\ReportControl\XTPReportRows.cpp (function ?_NotifySelChanging@CXTPReportSelectedRows@@QAEXW4XTPReportSelectionChangeType@@PAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportRows.cpp

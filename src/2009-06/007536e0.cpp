// roc 2009-06 007536e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007536e0
//
// 007536e0  83ec08               sub esp, 8
// 007536e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 007536e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 007536eb  890424               mov dword ptr [esp], eax
// 007536ee  6a01                 push 1
// 007536f0  8d442404             lea eax, [esp + 4]
// 007536f4  89542408             mov dword ptr [esp + 8], edx
// 007536f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 007536fc  50                   push eax
// 007536fd  52                   push edx
// 007536fe  83c12c               add ecx, 0x2c
// 00753701  e82af4ffff           call 0x752b30
// 00753706  83c408               add esp, 8
// 00753709  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp

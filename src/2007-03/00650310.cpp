// roc 2007-03 00650310  unit: seg_00650000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00650310
//
// 00650310  83ec08               sub esp, 8
// 00650313  8b442410             mov eax, dword ptr [esp + 0x10]
// 00650317  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065031b  890424               mov dword ptr [esp], eax
// 0065031e  6a01                 push 1
// 00650320  8d442404             lea eax, [esp + 4]
// 00650324  89542408             mov dword ptr [esp + 8], edx
// 00650328  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065032c  50                   push eax
// 0065032d  52                   push edx
// 0065032e  83c12c               add ecx, 0x2c
// 00650331  e8eafbffff           call 0x64ff20
// 00650336  83c408               add esp, 8
// 00650339  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp

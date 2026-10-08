// roc 2012-06 009bc420  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bc420
//
// 009bc420  83ec08               sub esp, 8
// 009bc423  8b442410             mov eax, dword ptr [esp + 0x10]
// 009bc427  8b542414             mov edx, dword ptr [esp + 0x14]
// 009bc42b  890424               mov dword ptr [esp], eax
// 009bc42e  6a01                 push 1
// 009bc430  8d442404             lea eax, [esp + 4]
// 009bc434  89542408             mov dword ptr [esp + 8], edx
// 009bc438  8b542410             mov edx, dword ptr [esp + 0x10]
// 009bc43c  50                   push eax
// 009bc43d  52                   push edx
// 009bc43e  83c12c               add ecx, 0x2c
// 009bc441  e87af3ffff           call 0x9bb7c0
// 009bc446  83c408               add esp, 8
// 009bc449  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp

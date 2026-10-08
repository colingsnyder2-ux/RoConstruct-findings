// roc 2011-06 00843ff0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843ff0
//
// 00843ff0  83ec08               sub esp, 8
// 00843ff3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00843ff7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00843ffb  890424               mov dword ptr [esp], eax
// 00843ffe  6a01                 push 1
// 00844000  8d442404             lea eax, [esp + 4]
// 00844004  89542408             mov dword ptr [esp + 8], edx
// 00844008  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084400c  50                   push eax
// 0084400d  52                   push edx
// 0084400e  83c12c               add ecx, 0x2c
// 00844011  e87af3ffff           call 0x843390
// 00844016  83c408               add esp, 8
// 00844019  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp

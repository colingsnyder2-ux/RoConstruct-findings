// roc 2011-06 008376a0  unit: CXTPReportControl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008376a0
//
// 008376a0  83ec14               sub esp, 0x14
// 008376a3  33c0                 xor eax, eax
// 008376a5  8944240c             mov dword ptr [esp + 0xc], eax
// 008376a9  89442410             mov dword ptr [esp + 0x10], eax
// 008376ad  8d542418             lea edx, [esp + 0x18]
// 008376b1  890424               mov dword ptr [esp], eax
// 008376b4  89442404             mov dword ptr [esp + 4], eax
// 008376b8  89442408             mov dword ptr [esp + 8], eax
// 008376bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 008376c0  8954240c             mov dword ptr [esp + 0xc], edx
// 008376c4  8d1424               lea edx, [esp]
// 008376c7  89442418             mov dword ptr [esp + 0x18], eax
// 008376cb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008376cf  52                   push edx
// 008376d0  6ac1                 push -0x3f
// 008376d2  89442418             mov dword ptr [esp + 0x18], eax
// 008376d6  e885fdffff           call 0x837460
// 008376db  f7d8                 neg eax
// 008376dd  1bc0                 sbb eax, eax
// 008376df  f7d8                 neg eax
// 008376e1  83c414               add esp, 0x14
// 008376e4  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforeCopyToText@CXTPReportControl@@MAEHPAVCXTPReportRecord@@AAVCStringArray@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

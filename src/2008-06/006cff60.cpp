// roc 2008-06 006cff60  unit: CXTPReportControl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cff60
//
// 006cff60  83ec14               sub esp, 0x14
// 006cff63  33c0                 xor eax, eax
// 006cff65  8944240c             mov dword ptr [esp + 0xc], eax
// 006cff69  89442410             mov dword ptr [esp + 0x10], eax
// 006cff6d  8d542418             lea edx, [esp + 0x18]
// 006cff71  890424               mov dword ptr [esp], eax
// 006cff74  89442404             mov dword ptr [esp + 4], eax
// 006cff78  89442408             mov dword ptr [esp + 8], eax
// 006cff7c  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cff80  8954240c             mov dword ptr [esp + 0xc], edx
// 006cff84  8d1424               lea edx, [esp]
// 006cff87  89442418             mov dword ptr [esp + 0x18], eax
// 006cff8b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006cff8f  52                   push edx
// 006cff90  6ac1                 push -0x3f
// 006cff92  89442418             mov dword ptr [esp + 0x18], eax
// 006cff96  e885fdffff           call 0x6cfd20
// 006cff9b  f7d8                 neg eax
// 006cff9d  1bc0                 sbb eax, eax
// 006cff9f  f7d8                 neg eax
// 006cffa1  83c414               add esp, 0x14
// 006cffa4  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforeCopyToText@CXTPReportControl@@MAEHPAVCXTPReportRecord@@AAVCStringArray@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

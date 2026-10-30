// from server: 100% by auto
// roc 2008-06 006cfff0  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cfff0
//
// 006cfff0  83ec14               sub esp, 0x14
// 006cfff3  33c0                 xor eax, eax
// 006cfff5  8d1424               lea edx, [esp]
// 006cfff8  8944240c             mov dword ptr [esp + 0xc], eax
// 006cfffc  890424               mov dword ptr [esp], eax
// 006cffff  89442404             mov dword ptr [esp + 4], eax
// 006d0003  89442408             mov dword ptr [esp + 8], eax
// 006d0007  89442410             mov dword ptr [esp + 0x10], eax
// 006d000b  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d000f  52                   push edx
// 006d0010  6abf                 push -0x41
// 006d0012  89442414             mov dword ptr [esp + 0x14], eax
// 006d0016  e805fdffff           call 0x6cfd20
// 006d001b  f7d8                 neg eax
// 006d001d  1bc0                 sbb eax, eax
// 006d001f  f7d8                 neg eax
// 006d0021  83c414               add esp, 0x14
// 006d0024  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePaste@CXTPReportControl@@MAEHPAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

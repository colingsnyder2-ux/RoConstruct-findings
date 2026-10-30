// from server: 100% by auto
// roc 2011-06 00837730  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837730
//
// 00837730  83ec14               sub esp, 0x14
// 00837733  33c0                 xor eax, eax
// 00837735  8d1424               lea edx, [esp]
// 00837738  8944240c             mov dword ptr [esp + 0xc], eax
// 0083773c  890424               mov dword ptr [esp], eax
// 0083773f  89442404             mov dword ptr [esp + 4], eax
// 00837743  89442408             mov dword ptr [esp + 8], eax
// 00837747  89442410             mov dword ptr [esp + 0x10], eax
// 0083774b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083774f  52                   push edx
// 00837750  6abf                 push -0x41
// 00837752  89442414             mov dword ptr [esp + 0x14], eax
// 00837756  e805fdffff           call 0x837460
// 0083775b  f7d8                 neg eax
// 0083775d  1bc0                 sbb eax, eax
// 0083775f  f7d8                 neg eax
// 00837761  83c414               add esp, 0x14
// 00837764  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePaste@CXTPReportControl@@MAEHPAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

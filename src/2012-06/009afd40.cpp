// from server: 100% by auto
// roc 2012-06 009afd40  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afd40
//
// 009afd40  83ec14               sub esp, 0x14
// 009afd43  33c0                 xor eax, eax
// 009afd45  8d1424               lea edx, [esp]
// 009afd48  8944240c             mov dword ptr [esp + 0xc], eax
// 009afd4c  890424               mov dword ptr [esp], eax
// 009afd4f  89442404             mov dword ptr [esp + 4], eax
// 009afd53  89442408             mov dword ptr [esp + 8], eax
// 009afd57  89442410             mov dword ptr [esp + 0x10], eax
// 009afd5b  8b442418             mov eax, dword ptr [esp + 0x18]
// 009afd5f  52                   push edx
// 009afd60  6abf                 push -0x41
// 009afd62  89442414             mov dword ptr [esp + 0x14], eax
// 009afd66  e805fdffff           call 0x9afa70
// 009afd6b  f7d8                 neg eax
// 009afd6d  1bc0                 sbb eax, eax
// 009afd6f  f7d8                 neg eax
// 009afd71  83c414               add esp, 0x14
// 009afd74  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePaste@CXTPReportControl@@MAEHPAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

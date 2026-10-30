// from server: 100% by auto
// roc 2007-08 0065afe0  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065afe0
//
// 0065afe0  83ec14               sub esp, 0x14
// 0065afe3  33c0                 xor eax, eax
// 0065afe5  8d1424               lea edx, [esp]
// 0065afe8  8944240c             mov dword ptr [esp + 0xc], eax
// 0065afec  890424               mov dword ptr [esp], eax
// 0065afef  89442404             mov dword ptr [esp + 4], eax
// 0065aff3  89442408             mov dword ptr [esp + 8], eax
// 0065aff7  89442410             mov dword ptr [esp + 0x10], eax
// 0065affb  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065afff  52                   push edx
// 0065b000  6abf                 push -0x41
// 0065b002  89442414             mov dword ptr [esp + 0x14], eax
// 0065b006  e875fcffff           call 0x65ac80
// 0065b00b  f7d8                 neg eax
// 0065b00d  1bc0                 sbb eax, eax
// 0065b00f  f7d8                 neg eax
// 0065b011  83c414               add esp, 0x14
// 0065b014  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePaste@CXTPReportControl@@MAEHPAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

// from server: 100% by auto
// roc 2007-08 0065afa0  unit: CXTPReportControl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065afa0
//
// 0065afa0  83ec14               sub esp, 0x14
// 0065afa3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065afa7  33c0                 xor eax, eax
// 0065afa9  8944240c             mov dword ptr [esp + 0xc], eax
// 0065afad  89442410             mov dword ptr [esp + 0x10], eax
// 0065afb1  890424               mov dword ptr [esp], eax
// 0065afb4  89442404             mov dword ptr [esp + 4], eax
// 0065afb8  89442408             mov dword ptr [esp + 8], eax
// 0065afbc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065afc0  89442410             mov dword ptr [esp + 0x10], eax
// 0065afc4  8d0424               lea eax, [esp]
// 0065afc7  50                   push eax
// 0065afc8  6ac0                 push -0x40
// 0065afca  89542414             mov dword ptr [esp + 0x14], edx
// 0065afce  e8adfcffff           call 0x65ac80
// 0065afd3  f7d8                 neg eax
// 0065afd5  1bc0                 sbb eax, eax
// 0065afd7  f7d8                 neg eax
// 0065afd9  83c414               add esp, 0x14
// 0065afdc  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePasteFromText@CXTPReportControl@@MAEHAAVCStringArray@@PAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

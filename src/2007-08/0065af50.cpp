// roc 2007-08 0065af50  unit: CXTPReportControl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065af50
//
// 0065af50  83ec14               sub esp, 0x14
// 0065af53  33c0                 xor eax, eax
// 0065af55  8944240c             mov dword ptr [esp + 0xc], eax
// 0065af59  89442410             mov dword ptr [esp + 0x10], eax
// 0065af5d  8d542418             lea edx, [esp + 0x18]
// 0065af61  890424               mov dword ptr [esp], eax
// 0065af64  89442404             mov dword ptr [esp + 4], eax
// 0065af68  89442408             mov dword ptr [esp + 8], eax
// 0065af6c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065af70  8954240c             mov dword ptr [esp + 0xc], edx
// 0065af74  8d1424               lea edx, [esp]
// 0065af77  89442418             mov dword ptr [esp + 0x18], eax
// 0065af7b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0065af7f  52                   push edx
// 0065af80  6ac1                 push -0x3f
// 0065af82  89442418             mov dword ptr [esp + 0x18], eax
// 0065af86  e8f5fcffff           call 0x65ac80
// 0065af8b  f7d8                 neg eax
// 0065af8d  1bc0                 sbb eax, eax
// 0065af8f  f7d8                 neg eax
// 0065af91  83c414               add esp, 0x14
// 0065af94  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforeCopyToText@CXTPReportControl@@MAEHPAVCXTPReportRecord@@AAVCStringArray@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

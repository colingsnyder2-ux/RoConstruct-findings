// roc 2012-06 009afcb0  unit: CXTPReportControl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afcb0
//
// 009afcb0  83ec14               sub esp, 0x14
// 009afcb3  33c0                 xor eax, eax
// 009afcb5  8944240c             mov dword ptr [esp + 0xc], eax
// 009afcb9  89442410             mov dword ptr [esp + 0x10], eax
// 009afcbd  8d542418             lea edx, [esp + 0x18]
// 009afcc1  890424               mov dword ptr [esp], eax
// 009afcc4  89442404             mov dword ptr [esp + 4], eax
// 009afcc8  89442408             mov dword ptr [esp + 8], eax
// 009afccc  8b442418             mov eax, dword ptr [esp + 0x18]
// 009afcd0  8954240c             mov dword ptr [esp + 0xc], edx
// 009afcd4  8d1424               lea edx, [esp]
// 009afcd7  89442418             mov dword ptr [esp + 0x18], eax
// 009afcdb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009afcdf  52                   push edx
// 009afce0  6ac1                 push -0x3f
// 009afce2  89442418             mov dword ptr [esp + 0x18], eax
// 009afce6  e885fdffff           call 0x9afa70
// 009afceb  f7d8                 neg eax
// 009afced  1bc0                 sbb eax, eax
// 009afcef  f7d8                 neg eax
// 009afcf1  83c414               add esp, 0x14
// 009afcf4  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforeCopyToText@CXTPReportControl@@MAEHPAVCXTPReportRecord@@AAVCStringArray@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

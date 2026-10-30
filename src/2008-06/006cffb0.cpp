// from server: 100% by auto
// roc 2008-06 006cffb0  unit: CXTPReportControl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cffb0
//
// 006cffb0  83ec14               sub esp, 0x14
// 006cffb3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006cffb7  33c0                 xor eax, eax
// 006cffb9  8944240c             mov dword ptr [esp + 0xc], eax
// 006cffbd  89442410             mov dword ptr [esp + 0x10], eax
// 006cffc1  890424               mov dword ptr [esp], eax
// 006cffc4  89442404             mov dword ptr [esp + 4], eax
// 006cffc8  89442408             mov dword ptr [esp + 8], eax
// 006cffcc  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cffd0  89442410             mov dword ptr [esp + 0x10], eax
// 006cffd4  8d0424               lea eax, [esp]
// 006cffd7  50                   push eax
// 006cffd8  6ac0                 push -0x40
// 006cffda  89542414             mov dword ptr [esp + 0x14], edx
// 006cffde  e83dfdffff           call 0x6cfd20
// 006cffe3  f7d8                 neg eax
// 006cffe5  1bc0                 sbb eax, eax
// 006cffe7  f7d8                 neg eax
// 006cffe9  83c414               add esp, 0x14
// 006cffec  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePasteFromText@CXTPReportControl@@MAEHAAVCStringArray@@PAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

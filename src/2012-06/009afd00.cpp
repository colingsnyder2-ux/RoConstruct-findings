// roc 2012-06 009afd00  unit: CXTPReportControl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afd00
//
// 009afd00  83ec14               sub esp, 0x14
// 009afd03  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009afd07  33c0                 xor eax, eax
// 009afd09  8944240c             mov dword ptr [esp + 0xc], eax
// 009afd0d  89442410             mov dword ptr [esp + 0x10], eax
// 009afd11  890424               mov dword ptr [esp], eax
// 009afd14  89442404             mov dword ptr [esp + 4], eax
// 009afd18  89442408             mov dword ptr [esp + 8], eax
// 009afd1c  8b442418             mov eax, dword ptr [esp + 0x18]
// 009afd20  89442410             mov dword ptr [esp + 0x10], eax
// 009afd24  8d0424               lea eax, [esp]
// 009afd27  50                   push eax
// 009afd28  6ac0                 push -0x40
// 009afd2a  89542414             mov dword ptr [esp + 0x14], edx
// 009afd2e  e83dfdffff           call 0x9afa70
// 009afd33  f7d8                 neg eax
// 009afd35  1bc0                 sbb eax, eax
// 009afd37  f7d8                 neg eax
// 009afd39  83c414               add esp, 0x14
// 009afd3c  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePasteFromText@CXTPReportControl@@MAEHAAVCStringArray@@PAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

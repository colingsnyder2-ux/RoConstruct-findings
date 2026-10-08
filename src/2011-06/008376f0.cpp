// from server: 100% by auto
// roc 2011-06 008376f0  unit: CXTPReportControl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008376f0
//
// 008376f0  83ec14               sub esp, 0x14
// 008376f3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008376f7  33c0                 xor eax, eax
// 008376f9  8944240c             mov dword ptr [esp + 0xc], eax
// 008376fd  89442410             mov dword ptr [esp + 0x10], eax
// 00837701  890424               mov dword ptr [esp], eax
// 00837704  89442404             mov dword ptr [esp + 4], eax
// 00837708  89442408             mov dword ptr [esp + 8], eax
// 0083770c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00837710  89442410             mov dword ptr [esp + 0x10], eax
// 00837714  8d0424               lea eax, [esp]
// 00837717  50                   push eax
// 00837718  6ac0                 push -0x40
// 0083771a  89542414             mov dword ptr [esp + 0x14], edx
// 0083771e  e83dfdffff           call 0x837460
// 00837723  f7d8                 neg eax
// 00837725  1bc0                 sbb eax, eax
// 00837727  f7d8                 neg eax
// 00837729  83c414               add esp, 0x14
// 0083772c  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnBeforePasteFromText@CXTPReportControl@@MAEHAAVCStringArray@@PAPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

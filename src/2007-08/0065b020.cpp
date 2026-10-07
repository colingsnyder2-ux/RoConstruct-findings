// roc 2007-08 0065b020  unit: CXTPReportControl  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b020
//
// 0065b020  83ec28               sub esp, 0x28
// 0065b023  8b542434             mov edx, dword ptr [esp + 0x34]
// 0065b027  33c0                 xor eax, eax
// 0065b029  8944240c             mov dword ptr [esp + 0xc], eax
// 0065b02d  89442410             mov dword ptr [esp + 0x10], eax
// 0065b031  89442414             mov dword ptr [esp + 0x14], eax
// 0065b035  89442424             mov dword ptr [esp + 0x24], eax
// 0065b039  890424               mov dword ptr [esp], eax
// 0065b03c  89442404             mov dword ptr [esp + 4], eax
// 0065b040  89442408             mov dword ptr [esp + 8], eax
// 0065b044  89442418             mov dword ptr [esp + 0x18], eax
// 0065b048  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065b04c  89442420             mov dword ptr [esp + 0x20], eax
// 0065b050  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065b054  8944240c             mov dword ptr [esp + 0xc], eax
// 0065b058  8b442430             mov eax, dword ptr [esp + 0x30]
// 0065b05c  89442410             mov dword ptr [esp + 0x10], eax
// 0065b060  8d0424               lea eax, [esp]
// 0065b063  89542414             mov dword ptr [esp + 0x14], edx
// 0065b067  8b542438             mov edx, dword ptr [esp + 0x38]
// 0065b06b  50                   push eax
// 0065b06c  6ab7                 push -0x49
// 0065b06e  8954242c             mov dword ptr [esp + 0x2c], edx
// 0065b072  e809fcffff           call 0x65ac80
// 0065b077  f7d8                 neg eax
// 0065b079  1bc0                 sbb eax, eax
// 0065b07b  f7d8                 neg eax
// 0065b07d  83c428               add esp, 0x28
// 0065b080  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?OnConstraintSelecting@CXTPReportControl@@MAEHPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@PAVCXTPReportRecordItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

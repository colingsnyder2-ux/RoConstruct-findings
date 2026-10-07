// roc 2012-06 009afd80  unit: CXTPReportControl  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afd80
//
// 009afd80  83ec28               sub esp, 0x28
// 009afd83  8b542434             mov edx, dword ptr [esp + 0x34]
// 009afd87  33c0                 xor eax, eax
// 009afd89  8944240c             mov dword ptr [esp + 0xc], eax
// 009afd8d  89442410             mov dword ptr [esp + 0x10], eax
// 009afd91  89442414             mov dword ptr [esp + 0x14], eax
// 009afd95  89442424             mov dword ptr [esp + 0x24], eax
// 009afd99  890424               mov dword ptr [esp], eax
// 009afd9c  89442404             mov dword ptr [esp + 4], eax
// 009afda0  89442408             mov dword ptr [esp + 8], eax
// 009afda4  89442418             mov dword ptr [esp + 0x18], eax
// 009afda8  8944241c             mov dword ptr [esp + 0x1c], eax
// 009afdac  89442420             mov dword ptr [esp + 0x20], eax
// 009afdb0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009afdb4  8944240c             mov dword ptr [esp + 0xc], eax
// 009afdb8  8b442430             mov eax, dword ptr [esp + 0x30]
// 009afdbc  89442410             mov dword ptr [esp + 0x10], eax
// 009afdc0  8d0424               lea eax, [esp]
// 009afdc3  89542414             mov dword ptr [esp + 0x14], edx
// 009afdc7  8b542438             mov edx, dword ptr [esp + 0x38]
// 009afdcb  50                   push eax
// 009afdcc  6ab7                 push -0x49
// 009afdce  8954242c             mov dword ptr [esp + 0x2c], edx
// 009afdd2  e899fcffff           call 0x9afa70
// 009afdd7  f7d8                 neg eax
// 009afdd9  1bc0                 sbb eax, eax
// 009afddb  f7d8                 neg eax
// 009afddd  83c428               add esp, 0x28
// 009afde0  c21000               ret 0x10
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnConstraintSelecting@CXTPReportControl@@MAEHPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@PAVCXTPReportRecordItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

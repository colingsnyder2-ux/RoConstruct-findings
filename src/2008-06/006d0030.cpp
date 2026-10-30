// from server: 100% by auto
// roc 2008-06 006d0030  unit: CXTPReportControl  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0030
//
// 006d0030  83ec28               sub esp, 0x28
// 006d0033  8b542434             mov edx, dword ptr [esp + 0x34]
// 006d0037  33c0                 xor eax, eax
// 006d0039  8944240c             mov dword ptr [esp + 0xc], eax
// 006d003d  89442410             mov dword ptr [esp + 0x10], eax
// 006d0041  89442414             mov dword ptr [esp + 0x14], eax
// 006d0045  89442424             mov dword ptr [esp + 0x24], eax
// 006d0049  890424               mov dword ptr [esp], eax
// 006d004c  89442404             mov dword ptr [esp + 4], eax
// 006d0050  89442408             mov dword ptr [esp + 8], eax
// 006d0054  89442418             mov dword ptr [esp + 0x18], eax
// 006d0058  8944241c             mov dword ptr [esp + 0x1c], eax
// 006d005c  89442420             mov dword ptr [esp + 0x20], eax
// 006d0060  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006d0064  8944240c             mov dword ptr [esp + 0xc], eax
// 006d0068  8b442430             mov eax, dword ptr [esp + 0x30]
// 006d006c  89442410             mov dword ptr [esp + 0x10], eax
// 006d0070  8d0424               lea eax, [esp]
// 006d0073  89542414             mov dword ptr [esp + 0x14], edx
// 006d0077  8b542438             mov edx, dword ptr [esp + 0x38]
// 006d007b  50                   push eax
// 006d007c  6ab7                 push -0x49
// 006d007e  8954242c             mov dword ptr [esp + 0x2c], edx
// 006d0082  e899fcffff           call 0x6cfd20
// 006d0087  f7d8                 neg eax
// 006d0089  1bc0                 sbb eax, eax
// 006d008b  f7d8                 neg eax
// 006d008d  83c428               add esp, 0x28
// 006d0090  c21000               ret 0x10
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnConstraintSelecting@CXTPReportControl@@MAEHPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@PAVCXTPReportRecordItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

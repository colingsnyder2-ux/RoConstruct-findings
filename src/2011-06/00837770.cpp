// from server: 100% by auto
// roc 2011-06 00837770  unit: CXTPReportControl  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837770
//
// 00837770  83ec28               sub esp, 0x28
// 00837773  8b542434             mov edx, dword ptr [esp + 0x34]
// 00837777  33c0                 xor eax, eax
// 00837779  8944240c             mov dword ptr [esp + 0xc], eax
// 0083777d  89442410             mov dword ptr [esp + 0x10], eax
// 00837781  89442414             mov dword ptr [esp + 0x14], eax
// 00837785  89442424             mov dword ptr [esp + 0x24], eax
// 00837789  890424               mov dword ptr [esp], eax
// 0083778c  89442404             mov dword ptr [esp + 4], eax
// 00837790  89442408             mov dword ptr [esp + 8], eax
// 00837794  89442418             mov dword ptr [esp + 0x18], eax
// 00837798  8944241c             mov dword ptr [esp + 0x1c], eax
// 0083779c  89442420             mov dword ptr [esp + 0x20], eax
// 008377a0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008377a4  8944240c             mov dword ptr [esp + 0xc], eax
// 008377a8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008377ac  89442410             mov dword ptr [esp + 0x10], eax
// 008377b0  8d0424               lea eax, [esp]
// 008377b3  89542414             mov dword ptr [esp + 0x14], edx
// 008377b7  8b542438             mov edx, dword ptr [esp + 0x38]
// 008377bb  50                   push eax
// 008377bc  6ab7                 push -0x49
// 008377be  8954242c             mov dword ptr [esp + 0x2c], edx
// 008377c2  e899fcffff           call 0x837460
// 008377c7  f7d8                 neg eax
// 008377c9  1bc0                 sbb eax, eax
// 008377cb  f7d8                 neg eax
// 008377cd  83c428               add esp, 0x28
// 008377d0  c21000               ret 0x10
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?OnConstraintSelecting@CXTPReportControl@@MAEHPAVCXTPReportRow@@PAVCXTPReportRecordItem@@PAVCXTPReportColumn@@PAVCXTPReportRecordItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

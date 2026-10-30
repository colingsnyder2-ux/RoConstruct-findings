// from server: 100% by auto
// roc 2007-08 0041d780  unit: CInstanceRecord::CNameItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d780
//
// 0041d780  8b542404             mov edx, dword ptr [esp + 4]
// 0041d784  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0041d787  895144               mov dword ptr [ecx + 0x44], edx
// 0041d78a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItem.cpp (function ?SetEditable@CXTPReportRecordItem@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItem.cpp

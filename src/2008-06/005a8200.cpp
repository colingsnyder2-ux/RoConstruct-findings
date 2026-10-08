// roc 2008-06 005a8200  unit: RBX::Log  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8200
//
// 005a8200  8b442404             mov eax, dword ptr [esp + 4]
// 005a8204  8b542408             mov edx, dword ptr [esp + 8]
// 005a8208  8901                 mov dword ptr [ecx], eax
// 005a820a  895104               mov dword ptr [ecx + 4], edx
// 005a820d  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItemRange.cpp (function ?Set@CXTPReportRecordItemId@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItemRange.cpp

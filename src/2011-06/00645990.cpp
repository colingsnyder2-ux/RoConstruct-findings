// from server: 100% by auto
// roc 2011-06 00645990  unit: RBX::Workspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00645990
//
// 00645990  8b442404             mov eax, dword ptr [esp + 4]
// 00645994  8b542408             mov edx, dword ptr [esp + 8]
// 00645998  8901                 mov dword ptr [ecx], eax
// 0064599a  895104               mov dword ptr [ecx + 4], edx
// 0064599d  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItemRange.cpp (function ?Set@CXTPReportRecordItemId@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItemRange.cpp

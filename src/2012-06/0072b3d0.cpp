// roc 2012-06 0072b3d0  unit: RBX::Workspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072b3d0
//
// 0072b3d0  8b442404             mov eax, dword ptr [esp + 4]
// 0072b3d4  8b542408             mov edx, dword ptr [esp + 8]
// 0072b3d8  8901                 mov dword ptr [ecx], eax
// 0072b3da  895104               mov dword ptr [ecx + 4], edx
// 0072b3dd  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItemRange.cpp (function ?Set@CXTPReportRecordItemId@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItemRange.cpp

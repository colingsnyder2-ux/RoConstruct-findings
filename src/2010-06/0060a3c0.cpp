// roc 2010-06 0060a3c0  unit: std::strstream  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a3c0
//
// 0060a3c0  8b442404             mov eax, dword ptr [esp + 4]
// 0060a3c4  8b542408             mov edx, dword ptr [esp + 8]
// 0060a3c8  8901                 mov dword ptr [ecx], eax
// 0060a3ca  895104               mov dword ptr [ecx + 4], edx
// 0060a3cd  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItemRange.cpp (function ?Set@CXTPReportRecordItemId@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItemRange.cpp

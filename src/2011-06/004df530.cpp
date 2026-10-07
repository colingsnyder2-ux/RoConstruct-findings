// roc 2011-06 004df530  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004df530
//
// 004df530  8b11                 mov edx, dword ptr [ecx]
// 004df532  8b442404             mov eax, dword ptr [esp + 4]
// 004df536  3b10                 cmp edx, dword ptr [eax]
// 004df538  7510                 jne 0x4df54a
// 004df53a  8b4904               mov ecx, dword ptr [ecx + 4]
// 004df53d  3b4804               cmp ecx, dword ptr [eax + 4]
// 004df540  7508                 jne 0x4df54a
// 004df542  b801000000           mov eax, 1
// 004df547  c20400               ret 4
// 004df54a  33c0                 xor eax, eax
// 004df54c  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItemRange.cpp (function ??8CXTPReportRecordItemId@@QBE_NABV0@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItemRange.cpp

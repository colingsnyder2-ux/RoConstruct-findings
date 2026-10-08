// roc 2011-06 00835140  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00835140
//
// 00835140  56                   push esi
// 00835141  8bf1                 mov esi, ecx
// 00835143  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 0083514a  740b                 je 0x835157
// 0083514c  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00835152  e8e9840000           call 0x83d640
// 00835157  8bce                 mov ecx, esi
// 00835159  e8d054fdff           call 0x80a62e
// 0083515e  5e                   pop esi
// 0083515f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnCaptureChanged@CXTPReportControl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

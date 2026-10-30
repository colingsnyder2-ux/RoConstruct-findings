// roc 2009-06 00746140  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00746140
//
// 00746140  56                   push esi
// 00746141  8bf1                 mov esi, ecx
// 00746143  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 0074614a  740b                 je 0x746157
// 0074614c  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00746152  e8298e0000           call 0x74ef80
// 00746157  8bce                 mov ecx, esi
// 00746159  e8aa2efdff           call 0x719008
// 0074615e  5e                   pop esi
// 0074615f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnCaptureChanged@CXTPReportControl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

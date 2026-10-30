// roc 2012-06 009ad750  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ad750
//
// 009ad750  56                   push esi
// 009ad751  8bf1                 mov esi, ecx
// 009ad753  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 009ad75a  740b                 je 0x9ad767
// 009ad75c  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 009ad762  e8f9840000           call 0x9b5c60
// 009ad767  8bce                 mov ecx, esi
// 009ad769  e8704ffdff           call 0x9826de
// 009ad76e  5e                   pop esi
// 009ad76f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnCaptureChanged@CXTPReportControl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

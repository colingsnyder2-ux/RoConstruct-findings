// roc 2008-06 006cda00  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cda00
//
// 006cda00  56                   push esi
// 006cda01  8bf1                 mov esi, ecx
// 006cda03  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 006cda0a  740b                 je 0x6cda17
// 006cda0c  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 006cda12  e8f98d0000           call 0x6d6810
// 006cda17  8bce                 mov ecx, esi
// 006cda19  e84a32fdff           call 0x6a0c68
// 006cda1e  5e                   pop esi
// 006cda1f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnCaptureChanged@CXTPReportControl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

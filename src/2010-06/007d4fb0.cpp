// roc 2010-06 007d4fb0  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d4fb0
//
// 007d4fb0  56                   push esi
// 007d4fb1  8bf1                 mov esi, ecx
// 007d4fb3  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 007d4fba  740b                 je 0x7d4fc7
// 007d4fbc  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 007d4fc2  e8f98d0000           call 0x7dddc0
// 007d4fc7  8bce                 mov ecx, esi
// 007d4fc9  e8a22ffdff           call 0x7a7f70
// 007d4fce  5e                   pop esi
// 007d4fcf  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnCaptureChanged@CXTPReportControl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

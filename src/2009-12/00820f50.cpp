// roc 2009-12 00820f50  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820f50
//
// 00820f50  56                   push esi
// 00820f51  8bf1                 mov esi, ecx
// 00820f53  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 00820f5a  740b                 je 0x820f67
// 00820f5c  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00820f62  e8d98d0000           call 0x829d40
// 00820f67  8bce                 mov ecx, esi
// 00820f69  e8c22efdff           call 0x7f3e30
// 00820f6e  5e                   pop esi
// 00820f6f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnCaptureChanged@CXTPReportControl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

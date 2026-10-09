// roc 2009-12 008212e0  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008212e0
//
// 008212e0  837c240801           cmp dword ptr [esp + 8], 1
// 008212e5  7523                 jne 0x82130a
// 008212e7  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 008212ed  83e801               sub eax, 1
// 008212f0  7518                 jne 0x82130a
// 008212f2  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 008212f8  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008212fb  51                   push ecx
// 008212fc  ff1520ca9800         call dword ptr [0x98ca20]
// 00821302  b801000000           mov eax, 1
// 00821307  c20c00               ret 0xc
// 0082130a  e8212bfdff           call 0x7f3e30
// 0082130f  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSetCursor@CXTPReportControl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

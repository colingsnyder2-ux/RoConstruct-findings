// roc 2009-06 007464d0  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007464d0
//
// 007464d0  837c240801           cmp dword ptr [esp + 8], 1
// 007464d5  7523                 jne 0x7464fa
// 007464d7  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 007464dd  83e801               sub eax, 1
// 007464e0  7518                 jne 0x7464fa
// 007464e2  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 007464e8  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007464eb  51                   push ecx
// 007464ec  ff1590ed8900         call dword ptr [0x89ed90]
// 007464f2  b801000000           mov eax, 1
// 007464f7  c20c00               ret 0xc
// 007464fa  e8092bfdff           call 0x719008
// 007464ff  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSetCursor@CXTPReportControl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

// roc 2010-06 007d5340  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d5340
//
// 007d5340  837c240801           cmp dword ptr [esp + 8], 1
// 007d5345  7523                 jne 0x7d536a
// 007d5347  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 007d534d  83e801               sub eax, 1
// 007d5350  7518                 jne 0x7d536a
// 007d5352  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 007d5358  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007d535b  51                   push ecx
// 007d535c  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 007d5362  b801000000           mov eax, 1
// 007d5367  c20c00               ret 0xc
// 007d536a  e8012cfdff           call 0x7a7f70
// 007d536f  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSetCursor@CXTPReportControl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

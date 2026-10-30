// roc 2011-06 008354d0  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008354d0
//
// 008354d0  837c240801           cmp dword ptr [esp + 8], 1
// 008354d5  7523                 jne 0x8354fa
// 008354d7  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 008354dd  83e801               sub eax, 1
// 008354e0  7518                 jne 0x8354fa
// 008354e2  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 008354e8  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008354eb  51                   push ecx
// 008354ec  ff15f41ba400         call dword ptr [0xa41bf4]
// 008354f2  b801000000           mov eax, 1
// 008354f7  c20c00               ret 0xc
// 008354fa  e82f51fdff           call 0x80a62e
// 008354ff  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSetCursor@CXTPReportControl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

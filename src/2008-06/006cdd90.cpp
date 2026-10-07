// roc 2008-06 006cdd90  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cdd90
//
// 006cdd90  837c240801           cmp dword ptr [esp + 8], 1
// 006cdd95  7523                 jne 0x6cddba
// 006cdd97  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 006cdd9d  83e801               sub eax, 1
// 006cdda0  7518                 jne 0x6cddba
// 006cdda2  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 006cdda8  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006cddab  51                   push ecx
// 006cddac  ff15042d8000         call dword ptr [0x802d04]
// 006cddb2  b801000000           mov eax, 1
// 006cddb7  c20c00               ret 0xc
// 006cddba  e8a92efdff           call 0x6a0c68
// 006cddbf  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSetCursor@CXTPReportControl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

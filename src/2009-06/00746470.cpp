// roc 2009-06 00746470  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00746470
//
// 00746470  56                   push esi
// 00746471  8bf1                 mov esi, ecx
// 00746473  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 00746479  85c0                 test eax, eax
// 0074647b  7415                 je 0x746492
// 0074647d  50                   push eax
// 0074647e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00746481  50                   push eax
// 00746482  ff1584ee8900         call dword ptr [0x89ee84]
// 00746488  c786ac02000000000000 mov dword ptr [esi + 0x2ac], 0
// 00746492  5e                   pop esi
// 00746493  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStopAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

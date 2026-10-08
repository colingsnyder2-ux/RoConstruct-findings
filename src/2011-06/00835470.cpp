// roc 2011-06 00835470  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00835470
//
// 00835470  56                   push esi
// 00835471  8bf1                 mov esi, ecx
// 00835473  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 00835479  85c0                 test eax, eax
// 0083547b  7415                 je 0x835492
// 0083547d  50                   push eax
// 0083547e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00835481  50                   push eax
// 00835482  ff15d019a400         call dword ptr [0xa419d0]
// 00835488  c786ac02000000000000 mov dword ptr [esi + 0x2ac], 0
// 00835492  5e                   pop esi
// 00835493  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStopAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

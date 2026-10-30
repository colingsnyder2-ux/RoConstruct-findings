// roc 2009-12 00821280  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821280
//
// 00821280  56                   push esi
// 00821281  8bf1                 mov esi, ecx
// 00821283  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 00821289  85c0                 test eax, eax
// 0082128b  7415                 je 0x8212a2
// 0082128d  50                   push eax
// 0082128e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00821291  50                   push eax
// 00821292  ff15d0cb9800         call dword ptr [0x98cbd0]
// 00821298  c786ac02000000000000 mov dword ptr [esi + 0x2ac], 0
// 008212a2  5e                   pop esi
// 008212a3  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStopAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

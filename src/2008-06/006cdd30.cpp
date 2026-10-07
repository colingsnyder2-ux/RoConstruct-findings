// roc 2008-06 006cdd30  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cdd30
//
// 006cdd30  56                   push esi
// 006cdd31  8bf1                 mov esi, ecx
// 006cdd33  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 006cdd39  85c0                 test eax, eax
// 006cdd3b  7415                 je 0x6cdd52
// 006cdd3d  50                   push eax
// 006cdd3e  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cdd41  50                   push eax
// 006cdd42  ff151c2e8000         call dword ptr [0x802e1c]
// 006cdd48  c786ac02000000000000 mov dword ptr [esi + 0x2ac], 0
// 006cdd52  5e                   pop esi
// 006cdd53  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStopAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

// roc 2012-06 009ada80  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ada80
//
// 009ada80  56                   push esi
// 009ada81  8bf1                 mov esi, ecx
// 009ada83  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 009ada89  85c0                 test eax, eax
// 009ada8b  7415                 je 0x9adaa2
// 009ada8d  50                   push eax
// 009ada8e  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ada91  50                   push eax
// 009ada92  ff15083cb200         call dword ptr [0xb23c08]
// 009ada98  c786ac02000000000000 mov dword ptr [esi + 0x2ac], 0
// 009adaa2  5e                   pop esi
// 009adaa3  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStopAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

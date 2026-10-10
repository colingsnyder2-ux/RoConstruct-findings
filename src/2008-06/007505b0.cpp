// roc 2008-06 007505b0  unit: CXTPReportColumns  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007505b0
//
// 007505b0  56                   push esi
// 007505b1  8bf1                 mov esi, ecx
// 007505b3  e838090000           call 0x750ef0
// 007505b8  8d4e74               lea ecx, [esi + 0x74]
// 007505bb  c70664468600         mov dword ptr [esi], 0x864664
// 007505c1  ff15043f8000         call dword ptr [0x803f04]
// 007505c7  c7466401000000       mov dword ptr [esi + 0x64], 1
// 007505ce  8bc6                 mov eax, esi
// 007505d0  5e                   pop esi
// 007505d1  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportGroupRow.cpp (function ??0CXTPReportGroupRow@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportGroupRow.cpp

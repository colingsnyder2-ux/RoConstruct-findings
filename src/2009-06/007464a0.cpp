// roc 2009-06 007464a0  unit: CXTPReportControl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007464a0
//
// 007464a0  56                   push esi
// 007464a1  8bf1                 mov esi, ecx
// 007464a3  83beac02000000       cmp dword ptr [esi + 0x2ac], 0
// 007464aa  7519                 jne 0x7464c5
// 007464ac  8b4620               mov eax, dword ptr [esi + 0x20]
// 007464af  6a00                 push 0
// 007464b1  68c8000000           push 0xc8
// 007464b6  6a07                 push 7
// 007464b8  50                   push eax
// 007464b9  ff150cee8900         call dword ptr [0x89ee0c]
// 007464bf  8986ac020000         mov dword ptr [esi + 0x2ac], eax
// 007464c5  5e                   pop esi
// 007464c6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStartAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

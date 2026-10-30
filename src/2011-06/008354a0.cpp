// roc 2011-06 008354a0  unit: CXTPReportControl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008354a0
//
// 008354a0  56                   push esi
// 008354a1  8bf1                 mov esi, ecx
// 008354a3  83beac02000000       cmp dword ptr [esi + 0x2ac], 0
// 008354aa  7519                 jne 0x8354c5
// 008354ac  8b4620               mov eax, dword ptr [esi + 0x20]
// 008354af  6a00                 push 0
// 008354b1  68c8000000           push 0xc8
// 008354b6  6a07                 push 7
// 008354b8  50                   push eax
// 008354b9  ff15741ca400         call dword ptr [0xa41c74]
// 008354bf  8986ac020000         mov dword ptr [esi + 0x2ac], eax
// 008354c5  5e                   pop esi
// 008354c6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStartAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

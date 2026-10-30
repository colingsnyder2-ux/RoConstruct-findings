// roc 2009-12 008212b0  unit: CXTPReportControl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008212b0
//
// 008212b0  56                   push esi
// 008212b1  8bf1                 mov esi, ecx
// 008212b3  83beac02000000       cmp dword ptr [esi + 0x2ac], 0
// 008212ba  7519                 jne 0x8212d5
// 008212bc  8b4620               mov eax, dword ptr [esi + 0x20]
// 008212bf  6a00                 push 0
// 008212c1  68c8000000           push 0xc8
// 008212c6  6a07                 push 7
// 008212c8  50                   push eax
// 008212c9  ff1558cc9800         call dword ptr [0x98cc58]
// 008212cf  8986ac020000         mov dword ptr [esi + 0x2ac], eax
// 008212d5  5e                   pop esi
// 008212d6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStartAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

// roc 2012-06 009adab0  unit: CXTPReportControl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009adab0
//
// 009adab0  56                   push esi
// 009adab1  8bf1                 mov esi, ecx
// 009adab3  83beac02000000       cmp dword ptr [esi + 0x2ac], 0
// 009adaba  7519                 jne 0x9adad5
// 009adabc  8b4620               mov eax, dword ptr [esi + 0x20]
// 009adabf  6a00                 push 0
// 009adac1  68c8000000           push 0xc8
// 009adac6  6a07                 push 7
// 009adac8  50                   push eax
// 009adac9  ff15e03ab200         call dword ptr [0xb23ae0]
// 009adacf  8986ac020000         mov dword ptr [esi + 0x2ac], eax
// 009adad5  5e                   pop esi
// 009adad6  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStartAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

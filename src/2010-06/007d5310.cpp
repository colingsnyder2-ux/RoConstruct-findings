// roc 2010-06 007d5310  unit: CXTPReportControl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d5310
//
// 007d5310  56                   push esi
// 007d5311  8bf1                 mov esi, ecx
// 007d5313  83beac02000000       cmp dword ptr [esi + 0x2ac], 0
// 007d531a  7519                 jne 0x7d5335
// 007d531c  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d531f  6a00                 push 0
// 007d5321  68c8000000           push 0xc8
// 007d5326  6a07                 push 7
// 007d5328  50                   push eax
// 007d5329  ff1554bc9e00         call dword ptr [0x9ebc54]
// 007d532f  8986ac020000         mov dword ptr [esi + 0x2ac], eax
// 007d5335  5e                   pop esi
// 007d5336  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStartAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

// from server: 100% by auto
// roc 2008-06 006cdd60  unit: CXTPReportControl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cdd60
//
// 006cdd60  56                   push esi
// 006cdd61  8bf1                 mov esi, ecx
// 006cdd63  83beac02000000       cmp dword ptr [esi + 0x2ac], 0
// 006cdd6a  7519                 jne 0x6cdd85
// 006cdd6c  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cdd6f  6a00                 push 0
// 006cdd71  68c8000000           push 0xc8
// 006cdd76  6a07                 push 7
// 006cdd78  50                   push eax
// 006cdd79  ff157c2d8000         call dword ptr [0x802d7c]
// 006cdd7f  8986ac020000         mov dword ptr [esi + 0x2ac], eax
// 006cdd85  5e                   pop esi
// 006cdd86  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureStartAutoVertScroll@CXTPReportControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

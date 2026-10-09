// roc 2007-03 00645230  unit: seg_00640000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00645230
//
// 00645230  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00645234  c7415401000000       mov dword ptr [ecx + 0x54], 1
// 0064523b  7512                 jne 0x64524f
// 0064523d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00645240  85c9                 test ecx, ecx
// 00645242  740b                 je 0x64524f
// 00645244  6a00                 push 0
// 00645246  6a00                 push 0
// 00645248  51                   push ecx
// 00645249  ff1554ee7700         call dword ptr [0x77ee54]
// 0064524f  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RedrawControl@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

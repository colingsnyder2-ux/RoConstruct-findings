// roc 2008-06 0074d270  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d270
//
// 0074d270  56                   push esi
// 0074d271  8bf1                 mov esi, ecx
// 0074d273  837e2000             cmp dword ptr [esi + 0x20], 0
// 0074d277  7414                 je 0x74d28d
// 0074d279  6a00                 push 0
// 0074d27b  e8ee36f5ff           call 0x6a096e
// 0074d280  8b4654               mov eax, dword ptr [esi + 0x54]
// 0074d283  8b5004               mov edx, dword ptr [eax + 4]
// 0074d286  8d4e54               lea ecx, [esi + 0x54]
// 0074d289  6a00                 push 0
// 0074d28b  ffd2                 call edx
// 0074d28d  5e                   pop esi
// 0074d28e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?HideWindow@CXTPReportInplaceEdit@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp

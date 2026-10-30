// from server: 100% by auto
// roc 2012-06 00a2d970  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2d970
//
// 00a2d970  56                   push esi
// 00a2d971  8bf1                 mov esi, ecx
// 00a2d973  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a2d977  7414                 je 0xa2d98d
// 00a2d979  6a00                 push 0
// 00a2d97b  e82451f5ff           call 0x982aa4
// 00a2d980  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a2d983  8b5004               mov edx, dword ptr [eax + 4]
// 00a2d986  8d4e54               lea ecx, [esi + 0x54]
// 00a2d989  6a00                 push 0
// 00a2d98b  ffd2                 call edx
// 00a2d98d  5e                   pop esi
// 00a2d98e  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceEdit.cpp (function ?HideWindow@CXTPReportInplaceEdit@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceEdit.cpp

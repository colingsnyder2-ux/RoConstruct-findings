// from server: 100% by auto
// roc 2007-08 006d0fd0  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d0fd0
//
// 006d0fd0  56                   push esi
// 006d0fd1  8bf1                 mov esi, ecx
// 006d0fd3  837e2000             cmp dword ptr [esi + 0x20], 0
// 006d0fd7  7414                 je 0x6d0fed
// 006d0fd9  6a00                 push 0
// 006d0fdb  e86aeff5ff           call 0x62ff4a
// 006d0fe0  8b4654               mov eax, dword ptr [esi + 0x54]
// 006d0fe3  8b5004               mov edx, dword ptr [eax + 4]
// 006d0fe6  8d4e54               lea ecx, [esi + 0x54]
// 006d0fe9  6a00                 push 0
// 006d0feb  ffd2                 call edx
// 006d0fed  5e                   pop esi
// 006d0fee  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportInplaceControls.cpp (function ?HideWindow@CXTPReportInplaceEdit@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportInplaceControls.cpp

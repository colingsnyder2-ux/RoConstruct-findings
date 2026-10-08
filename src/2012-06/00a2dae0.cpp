// from server: 100% by auto
// roc 2012-06 00a2dae0  unit: CXTPReportInplaceList  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2dae0
//
// 00a2dae0  56                   push esi
// 00a2dae1  6a00                 push 0
// 00a2dae3  8bf1                 mov esi, ecx
// 00a2dae5  e8a69bfaff           call 0x9d7690
// 00a2daea  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a2daed  8b5004               mov edx, dword ptr [eax + 4]
// 00a2daf0  8d4e54               lea ecx, [esi + 0x54]
// 00a2daf3  83c404               add esp, 4
// 00a2daf6  6a00                 push 0
// 00a2daf8  ffd2                 call edx
// 00a2dafa  8bce                 mov ecx, esi
// 00a2dafc  5e                   pop esi
// 00a2dafd  e99e47f5ff           jmp 0x9822a0
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceControls.cpp (function ?PostNcDestroy@CXTPReportInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceControls.cpp

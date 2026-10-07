// roc 2012-06 00a2f0e0  unit: CXTPReportInplaceList  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2f0e0
//
// 00a2f0e0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00a2f0e3  c7818000000000000000 mov dword ptr [ecx + 0x80], 0
// 00a2f0ed  85c0                 test eax, eax
// 00a2f0ef  750a                 jne 0xa2f0fb
// 00a2f0f1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a2f0f4  50                   push eax
// 00a2f0f5  ff15503ab200         call dword ptr [0xb23a50]
// 00a2f0fb  50                   push eax
// 00a2f0fc  e86535f5ff           call 0x982666
// 00a2f101  8bc8                 mov ecx, eax
// 00a2f103  e99c33f5ff           jmp 0x9824a4
// library xtp-13.2.1/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Cancel@CXTPReportInplaceList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportInplaceControls.cpp

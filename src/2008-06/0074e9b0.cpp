// from server: 100% by auto
// roc 2008-06 0074e9b0  unit: CXTPReportInplaceList  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074e9b0
//
// 0074e9b0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0074e9b3  c7818000000000000000 mov dword ptr [ecx + 0x80], 0
// 0074e9bd  85c0                 test eax, eax
// 0074e9bf  750a                 jne 0x74e9cb
// 0074e9c1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0074e9c4  50                   push eax
// 0074e9c5  ff15f82d8000         call dword ptr [0x802df8]
// 0074e9cb  50                   push eax
// 0074e9cc  e80d22f5ff           call 0x6a0bde
// 0074e9d1  8bc8                 mov ecx, eax
// 0074e9d3  e95020f5ff           jmp 0x6a0a28
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Cancel@CXTPReportInplaceList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp

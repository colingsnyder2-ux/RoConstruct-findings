// from server: 100% by auto
// roc 2007-08 006d2490  unit: CXTPReportInplaceList  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2490
//
// 006d2490  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006d2493  85c0                 test eax, eax
// 006d2495  c7818000000000000000 mov dword ptr [ecx + 0x80], 0
// 006d249f  750a                 jne 0x6d24ab
// 006d24a1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006d24a4  50                   push eax
// 006d24a5  ff15f8eb7700         call dword ptr [0x77ebf8]
// 006d24ab  50                   push eax
// 006d24ac  e80fddf5ff           call 0x6301c0
// 006d24b1  8bc8                 mov ecx, eax
// 006d24b3  e94cdbf5ff           jmp 0x630004
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Cancel@CXTPReportInplaceList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportInplaceControls.cpp

// from server: 100% by auto
// roc 2007-08 006d42d0  unit: CXTPReportRow_Batch  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d42d0
//
// 006d42d0  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006d42d3  85c9                 test ecx, ecx
// 006d42d5  740f                 je 0x6d42e6
// 006d42d7  e874f9f8ff           call 0x663c50
// 006d42dc  85c0                 test eax, eax
// 006d42de  7e06                 jle 0x6d42e6
// 006d42e0  b801000000           mov eax, 1
// 006d42e5  c3                   ret 
// 006d42e6  33c0                 xor eax, eax
// 006d42e8  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRow.cpp

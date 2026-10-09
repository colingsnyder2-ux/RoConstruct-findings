// roc 2007-03 00650940  unit: seg_00650000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00650940
//
// 00650940  83793400             cmp dword ptr [ecx + 0x34], 0
// 00650944  7503                 jne 0x650949
// 00650946  33c0                 xor eax, eax
// 00650948  c3                   ret 
// 00650949  c7412800000000       mov dword ptr [ecx + 0x28], 0
// 00650950  83793400             cmp dword ptr [ecx + 0x34], 0
// 00650954  7e09                 jle 0x65095f
// 00650956  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00650959  8b00                 mov eax, dword ptr [eax]
// 0065095b  83c001               add eax, 1
// 0065095e  c3                   ret 
// 0065095f  e94adafcff           jmp 0x61e3ae
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRows.cpp (function ?GetFirstSelectedRowPosition@CXTPReportSelectedRows@@QAEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRows.cpp

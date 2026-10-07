// roc 2007-08 00664810  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664810
//
// 00664810  83793400             cmp dword ptr [ecx + 0x34], 0
// 00664814  7503                 jne 0x664819
// 00664816  33c0                 xor eax, eax
// 00664818  c3                   ret 
// 00664819  c7412800000000       mov dword ptr [ecx + 0x28], 0
// 00664820  83793400             cmp dword ptr [ecx + 0x34], 0
// 00664824  7e09                 jle 0x66482f
// 00664826  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00664829  8b00                 mov eax, dword ptr [eax]
// 0066482b  83c001               add eax, 1
// 0066482e  c3                   ret 
// 0066482f  e9ecb6fcff           jmp 0x62ff20
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRows.cpp (function ?GetFirstSelectedRowPosition@CXTPReportSelectedRows@@QAEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRows.cpp

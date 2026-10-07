// roc 2008-06 006db550  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db550
//
// 006db550  83793400             cmp dword ptr [ecx + 0x34], 0
// 006db554  7503                 jne 0x6db559
// 006db556  33c0                 xor eax, eax
// 006db558  c3                   ret 
// 006db559  c7412800000000       mov dword ptr [ecx + 0x28], 0
// 006db560  83793400             cmp dword ptr [ecx + 0x34], 0
// 006db564  7e07                 jle 0x6db56d
// 006db566  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006db569  8b00                 mov eax, dword ptr [eax]
// 006db56b  40                   inc eax
// 006db56c  c3                   ret 
// 006db56d  e9d253fcff           jmp 0x6a0944
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?GetFirstSelectedRowPosition@CXTPReportSelectedRows@@QAEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp

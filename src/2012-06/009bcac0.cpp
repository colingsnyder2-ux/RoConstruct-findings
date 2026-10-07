// roc 2012-06 009bcac0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bcac0
//
// 009bcac0  83793400             cmp dword ptr [ecx + 0x34], 0
// 009bcac4  7503                 jne 0x9bcac9
// 009bcac6  33c0                 xor eax, eax
// 009bcac8  c3                   ret 
// 009bcac9  c7412800000000       mov dword ptr [ecx + 0x28], 0
// 009bcad0  83793400             cmp dword ptr [ecx + 0x34], 0
// 009bcad4  7e07                 jle 0x9bcadd
// 009bcad6  8b4130               mov eax, dword ptr [ecx + 0x30]
// 009bcad9  8b00                 mov eax, dword ptr [eax]
// 009bcadb  40                   inc eax
// 009bcadc  c3                   ret 
// 009bcadd  e9de58fcff           jmp 0x9823c0
// library xtp-13.2.1/Source\ReportControl\XTPReportRows.cpp (function ?GetFirstSelectedRowPosition@CXTPReportSelectedRows@@QAEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportRows.cpp

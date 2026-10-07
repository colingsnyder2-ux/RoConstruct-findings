// roc 2012-06 009afe60  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afe60
//
// 009afe60  833d0894e50000       cmp dword ptr [0xe59408], 0
// 009afe67  7410                 je 0x9afe79
// 009afe69  8b442404             mov eax, dword ptr [esp + 4]
// 009afe6d  50                   push eax
// 009afe6e  e84df0ffff           call 0x9aeec0
// 009afe73  83c404               add esp, 4
// 009afe76  c20400               ret 4
// 009afe79  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009afe80  7410                 je 0x9afe92
// 009afe82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009afe86  51                   push ecx
// 009afe87  e854b2ffff           call 0x9ab0e0
// 009afe8c  83c404               add esp, 4
// 009afe8f  c20400               ret 4
// 009afe92  68ec93e500           push 0xe593ec
// 009afe97  ff159421b200         call dword ptr [0xb22194]
// 009afe9d  8b542404             mov edx, dword ptr [esp + 4]
// 009afea1  52                   push edx
// 009afea2  e86d22fdff           call 0x982114
// 009afea7  59                   pop ecx
// 009afea8  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

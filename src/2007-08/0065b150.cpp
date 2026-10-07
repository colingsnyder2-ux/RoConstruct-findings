// roc 2007-08 0065b150  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b150
//
// 0065b150  833db4878c0000       cmp dword ptr [0x8c87b4], 0
// 0065b157  7410                 je 0x65b169
// 0065b159  8b442404             mov eax, dword ptr [esp + 4]
// 0065b15d  50                   push eax
// 0065b15e  e8ddefffff           call 0x65a140
// 0065b163  83c404               add esp, 4
// 0065b166  c20400               ret 4
// 0065b169  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 0065b170  7410                 je 0x65b182
// 0065b172  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065b176  51                   push ecx
// 0065b177  e804b8ffff           call 0x656980
// 0065b17c  83c404               add esp, 4
// 0065b17f  c20400               ret 4
// 0065b182  6880878c00           push 0x8c8780
// 0065b187  ff15e8d27700         call dword ptr [0x77d2e8]
// 0065b18d  8b542404             mov edx, dword ptr [esp + 4]
// 0065b191  52                   push edx
// 0065b192  e8cb4afdff           call 0x62fc62
// 0065b197  59                   pop ecx
// 0065b198  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

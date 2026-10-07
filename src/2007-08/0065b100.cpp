// roc 2007-08 0065b100  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b100
//
// 0065b100  833d9c878c0000       cmp dword ptr [0x8c879c], 0
// 0065b107  7410                 je 0x65b119
// 0065b109  8b442404             mov eax, dword ptr [esp + 4]
// 0065b10d  50                   push eax
// 0065b10e  e84deeffff           call 0x659f60
// 0065b113  83c404               add esp, 4
// 0065b116  c20400               ret 4
// 0065b119  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 0065b120  7410                 je 0x65b132
// 0065b122  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065b126  51                   push ecx
// 0065b127  e854b8ffff           call 0x656980
// 0065b12c  83c404               add esp, 4
// 0065b12f  c20400               ret 4
// 0065b132  6880878c00           push 0x8c8780
// 0065b137  ff15e8d27700         call dword ptr [0x77d2e8]
// 0065b13d  8b542404             mov edx, dword ptr [esp + 4]
// 0065b141  52                   push edx
// 0065b142  e81b4bfdff           call 0x62fc62
// 0065b147  59                   pop ecx
// 0065b148  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

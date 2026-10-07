// roc 2012-06 009afeb0  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afeb0
//
// 009afeb0  833d2094e50000       cmp dword ptr [0xe59420], 0
// 009afeb7  7410                 je 0x9afec9
// 009afeb9  8b442404             mov eax, dword ptr [esp + 4]
// 009afebd  50                   push eax
// 009afebe  e8ddf1ffff           call 0x9af0a0
// 009afec3  83c404               add esp, 4
// 009afec6  c20400               ret 4
// 009afec9  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009afed0  7410                 je 0x9afee2
// 009afed2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009afed6  51                   push ecx
// 009afed7  e804b2ffff           call 0x9ab0e0
// 009afedc  83c404               add esp, 4
// 009afedf  c20400               ret 4
// 009afee2  68ec93e500           push 0xe593ec
// 009afee7  ff159421b200         call dword ptr [0xb22194]
// 009afeed  8b542404             mov edx, dword ptr [esp + 4]
// 009afef1  52                   push edx
// 009afef2  e81d22fdff           call 0x982114
// 009afef7  59                   pop ecx
// 009afef8  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

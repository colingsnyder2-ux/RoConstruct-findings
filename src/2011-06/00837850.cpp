// roc 2011-06 00837850  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837850
//
// 00837850  833d9882d10000       cmp dword ptr [0xd18298], 0
// 00837857  7410                 je 0x837869
// 00837859  8b442404             mov eax, dword ptr [esp + 4]
// 0083785d  50                   push eax
// 0083785e  e89df0ffff           call 0x836900
// 00837863  83c404               add esp, 4
// 00837866  c20400               ret 4
// 00837869  833d8482d10000       cmp dword ptr [0xd18284], 0
// 00837870  7410                 je 0x837882
// 00837872  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00837876  51                   push ecx
// 00837877  e864b2ffff           call 0x832ae0
// 0083787c  83c404               add esp, 4
// 0083787f  c20400               ret 4
// 00837882  687c82d100           push 0xd1827c
// 00837887  ff154803a400         call dword ptr [0xa40348]
// 0083788d  8b542404             mov edx, dword ptr [esp + 4]
// 00837891  52                   push edx
// 00837892  e8c127fdff           call 0x80a058
// 00837897  59                   pop ecx
// 00837898  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

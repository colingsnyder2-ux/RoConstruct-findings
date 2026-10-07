// roc 2011-06 008378a0  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008378a0
//
// 008378a0  833db082d10000       cmp dword ptr [0xd182b0], 0
// 008378a7  7410                 je 0x8378b9
// 008378a9  8b442404             mov eax, dword ptr [esp + 4]
// 008378ad  50                   push eax
// 008378ae  e82df2ffff           call 0x836ae0
// 008378b3  83c404               add esp, 4
// 008378b6  c20400               ret 4
// 008378b9  833d8482d10000       cmp dword ptr [0xd18284], 0
// 008378c0  7410                 je 0x8378d2
// 008378c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008378c6  51                   push ecx
// 008378c7  e814b2ffff           call 0x832ae0
// 008378cc  83c404               add esp, 4
// 008378cf  c20400               ret 4
// 008378d2  687c82d100           push 0xd1827c
// 008378d7  ff154803a400         call dword ptr [0xa40348]
// 008378dd  8b542404             mov edx, dword ptr [esp + 4]
// 008378e1  52                   push edx
// 008378e2  e87127fdff           call 0x80a058
// 008378e7  59                   pop ecx
// 008378e8  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp

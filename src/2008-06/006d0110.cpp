// roc 2008-06 006d0110  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0110
//
// 006d0110  833d38e1970000       cmp dword ptr [0x97e138], 0
// 006d0117  7410                 je 0x6d0129
// 006d0119  8b442404             mov eax, dword ptr [esp + 4]
// 006d011d  50                   push eax
// 006d011e  e89df0ffff           call 0x6cf1c0
// 006d0123  83c404               add esp, 4
// 006d0126  c20400               ret 4
// 006d0129  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006d0130  7410                 je 0x6d0142
// 006d0132  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d0136  51                   push ecx
// 006d0137  e874b3ffff           call 0x6cb4b0
// 006d013c  83c404               add esp, 4
// 006d013f  c20400               ret 4
// 006d0142  681ce19700           push 0x97e11c
// 006d0147  ff15ac218000         call dword ptr [0x8021ac]
// 006d014d  8b542404             mov edx, dword ptr [esp + 4]
// 006d0151  52                   push edx
// 006d0152  e82305fdff           call 0x6a067a
// 006d0157  59                   pop ecx
// 006d0158  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

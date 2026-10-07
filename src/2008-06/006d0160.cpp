// roc 2008-06 006d0160  unit: CXTPReportControl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0160
//
// 006d0160  833d50e1970000       cmp dword ptr [0x97e150], 0
// 006d0167  7410                 je 0x6d0179
// 006d0169  8b442404             mov eax, dword ptr [esp + 4]
// 006d016d  50                   push eax
// 006d016e  e82df2ffff           call 0x6cf3a0
// 006d0173  83c404               add esp, 4
// 006d0176  c20400               ret 4
// 006d0179  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006d0180  7410                 je 0x6d0192
// 006d0182  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d0186  51                   push ecx
// 006d0187  e824b3ffff           call 0x6cb4b0
// 006d018c  83c404               add esp, 4
// 006d018f  c20400               ret 4
// 006d0192  681ce19700           push 0x97e11c
// 006d0197  ff15ac218000         call dword ptr [0x8021ac]
// 006d019d  8b542404             mov edx, dword ptr [esp + 4]
// 006d01a1  52                   push edx
// 006d01a2  e8d304fdff           call 0x6a067a
// 006d01a7  59                   pop ecx
// 006d01a8  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPBatchAllocObjT@VCXTPReportRow@@UCXTPReportRow_BatchData@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

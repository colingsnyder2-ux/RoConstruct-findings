// roc 2008-06 006d0210  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0210
//
// 006d0210  833d34e1970000       cmp dword ptr [0x97e134], 0
// 006d0217  7410                 je 0x6d0229
// 006d0219  8b442404             mov eax, dword ptr [esp + 4]
// 006d021d  50                   push eax
// 006d021e  e83defffff           call 0x6cf160
// 006d0223  83c404               add esp, 4
// 006d0226  c20400               ret 4
// 006d0229  682ce19700           push 0x97e12c
// 006d022e  ff15ac218000         call dword ptr [0x8021ac]
// 006d0234  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d0238  51                   push ecx
// 006d0239  e83c04fdff           call 0x6a067a
// 006d023e  59                   pop ecx
// 006d023f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

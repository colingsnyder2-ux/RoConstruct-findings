// from server: 100% by auto
// roc 2008-06 006d01b0  unit: CXTPReportControl  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d01b0
//
// 006d01b0  833d34e1970000       cmp dword ptr [0x97e134], 0
// 006d01b7  682ce19700           push 0x97e12c
// 006d01bc  743b                 je 0x6d01f9
// 006d01be  ff15b0218000         call dword ptr [0x8021b0]
// 006d01c4  833d34e1970000       cmp dword ptr [0x97e134], 0
// 006d01cb  741c                 je 0x6d01e9
// 006d01cd  e83eb3ffff           call 0x6cb510
// 006d01d2  8b442404             mov eax, dword ptr [esp + 4]
// 006d01d6  8b0d28e19700         mov ecx, dword ptr [0x97e128]
// 006d01dc  50                   push eax
// 006d01dd  6a00                 push 0
// 006d01df  51                   push ecx
// 006d01e0  ff15f8218000         call dword ptr [0x8021f8]
// 006d01e6  c20400               ret 4
// 006d01e9  8b542404             mov edx, dword ptr [esp + 4]
// 006d01ed  52                   push edx
// 006d01ee  e86307fdff           call 0x6a0956
// 006d01f3  83c404               add esp, 4
// 006d01f6  c20400               ret 4
// 006d01f9  ff15b0218000         call dword ptr [0x8021b0]
// 006d01ff  8b442404             mov eax, dword ptr [esp + 4]
// 006d0203  50                   push eax
// 006d0204  e81707fdff           call 0x6a0920
// 006d0209  83c404               add esp, 4
// 006d020c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??2?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportDataAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

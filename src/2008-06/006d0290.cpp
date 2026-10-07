// roc 2008-06 006d0290  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0290
//
// 006d0290  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006d0297  681ce19700           push 0x97e11c
// 006d029c  743b                 je 0x6d02d9
// 006d029e  ff15b0218000         call dword ptr [0x8021b0]
// 006d02a4  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006d02ab  741c                 je 0x6d02c9
// 006d02ad  e8ceb2ffff           call 0x6cb580
// 006d02b2  8b442404             mov eax, dword ptr [esp + 4]
// 006d02b6  8b0d18e19700         mov ecx, dword ptr [0x97e118]
// 006d02bc  50                   push eax
// 006d02bd  6a00                 push 0
// 006d02bf  51                   push ecx
// 006d02c0  ff15f8218000         call dword ptr [0x8021f8]
// 006d02c6  c20400               ret 4
// 006d02c9  8b542404             mov edx, dword ptr [esp + 4]
// 006d02cd  52                   push edx
// 006d02ce  e88306fdff           call 0x6a0956
// 006d02d3  83c404               add esp, 4
// 006d02d6  c20400               ret 4
// 006d02d9  ff15b0218000         call dword ptr [0x8021b0]
// 006d02df  8b442404             mov eax, dword ptr [esp + 4]
// 006d02e3  50                   push eax
// 006d02e4  e83706fdff           call 0x6a0920
// 006d02e9  83c404               add esp, 4
// 006d02ec  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??2?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportDataAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp

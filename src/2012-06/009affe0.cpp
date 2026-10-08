// from server: 100% by auto
// roc 2012-06 009affe0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009affe0
//
// 009affe0  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009affe7  68ec93e500           push 0xe593ec
// 009affec  743b                 je 0x9b0029
// 009affee  ff159821b200         call dword ptr [0xb22198]
// 009afff4  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009afffb  741c                 je 0x9b0019
// 009afffd  e8aeb1ffff           call 0x9ab1b0
// 009b0002  8b442404             mov eax, dword ptr [esp + 4]
// 009b0006  8b0de893e500         mov ecx, dword ptr [0xe593e8]
// 009b000c  50                   push eax
// 009b000d  6a00                 push 0
// 009b000f  51                   push ecx
// 009b0010  ff15a422b200         call dword ptr [0xb222a4]
// 009b0016  c20400               ret 4
// 009b0019  8b542404             mov edx, dword ptr [esp + 4]
// 009b001d  52                   push edx
// 009b001e  e8cd23fdff           call 0x9823f0
// 009b0023  83c404               add esp, 4
// 009b0026  c20400               ret 4
// 009b0029  ff159821b200         call dword ptr [0xb22198]
// 009b002f  8b442404             mov eax, dword ptr [esp + 4]
// 009b0033  50                   push eax
// 009b0034  e8e120fdff           call 0x98211a
// 009b0039  83c404               add esp, 4
// 009b003c  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??2?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

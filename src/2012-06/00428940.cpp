// from server: 100% by auto
// roc 2012-06 00428940  unit: rbx::signals::connection::islot  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428940
//
// 00428940  833de493e50000       cmp dword ptr [0xe593e4], 0
// 00428947  68dc93e500           push 0xe593dc
// 0042894c  743b                 je 0x428989
// 0042894e  ff159821b200         call dword ptr [0xb22198]
// 00428954  833de493e50000       cmp dword ptr [0xe593e4], 0
// 0042895b  741c                 je 0x428979
// 0042895d  e86efbffff           call 0x4284d0
// 00428962  8b442404             mov eax, dword ptr [esp + 4]
// 00428966  8b0dd893e500         mov ecx, dword ptr [0xe593d8]
// 0042896c  50                   push eax
// 0042896d  6a00                 push 0
// 0042896f  51                   push ecx
// 00428970  ff15a422b200         call dword ptr [0xb222a4]
// 00428976  c20400               ret 4
// 00428979  8b542404             mov edx, dword ptr [esp + 4]
// 0042897d  52                   push edx
// 0042897e  e86d9a5500           call 0x9823f0
// 00428983  83c404               add esp, 4
// 00428986  c20400               ret 4
// 00428989  ff159821b200         call dword ptr [0xb22198]
// 0042898f  8b442404             mov eax, dword ptr [esp + 4]
// 00428993  50                   push eax
// 00428994  e881975500           call 0x98211a
// 00428999  83c404               add esp, 4
// 0042899c  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??2?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

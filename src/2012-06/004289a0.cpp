// roc 2012-06 004289a0  unit: rbx::signals::connection::islot  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004289a0
//
// 004289a0  833de493e50000       cmp dword ptr [0xe593e4], 0
// 004289a7  7410                 je 0x4289b9
// 004289a9  8b442404             mov eax, dword ptr [esp + 4]
// 004289ad  50                   push eax
// 004289ae  e8edfcffff           call 0x4286a0
// 004289b3  83c404               add esp, 4
// 004289b6  c20400               ret 4
// 004289b9  68dc93e500           push 0xe593dc
// 004289be  ff159421b200         call dword ptr [0xb22194]
// 004289c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004289c8  51                   push ecx
// 004289c9  e846975500           call 0x982114
// 004289ce  59                   pop ecx
// 004289cf  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??3?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

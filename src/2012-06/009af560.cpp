// roc 2012-06 009af560  unit: UCXTPReportAllocatorDefaultData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009af560
//
// 009af560  56                   push esi
// 009af561  8bf1                 mov esi, ecx
// 009af563  c7064c02c100         mov dword ptr [esi], 0xc1024c
// 009af569  833dfc93e50000       cmp dword ptr [0xe593fc], 0
// 009af570  751a                 jne 0x9af58c
// 009af572  a1f893e500           mov eax, dword ptr [0xe593f8]
// 009af577  85c0                 test eax, eax
// 009af579  7407                 je 0x9af582
// 009af57b  50                   push eax
// 009af57c  ff159c22b200         call dword ptr [0xb2229c]
// 009af582  c705f893e50000000000 mov dword ptr [0xe593f8], 0
// 009af58c  f644240801           test byte ptr [esp + 8], 1
// 009af591  7409                 je 0x9af59c
// 009af593  56                   push esi
// 009af594  e87b2bfdff           call 0x982114
// 009af599  83c404               add esp, 4
// 009af59c  8bc6                 mov eax, esi
// 009af59e  5e                   pop esi
// 009af59f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

// from server: 100% by auto
// roc 2011-06 00836820  unit: UCXTPReportAllocatorDefaultData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836820
//
// 00836820  56                   push esi
// 00836821  8bf1                 mov esi, ecx
// 00836823  c7066c4bac00         mov dword ptr [esi], 0xac4b6c
// 00836829  833d8c82d10000       cmp dword ptr [0xd1828c], 0
// 00836830  751a                 jne 0x83684c
// 00836832  a18882d100           mov eax, dword ptr [0xd18288]
// 00836837  85c0                 test eax, eax
// 00836839  7407                 je 0x836842
// 0083683b  50                   push eax
// 0083683c  ff159002a400         call dword ptr [0xa40290]
// 00836842  c7058882d10000000000 mov dword ptr [0xd18288], 0
// 0083684c  f644240801           test byte ptr [esp + 8], 1
// 00836851  7409                 je 0x83685c
// 00836853  56                   push esi
// 00836854  e8ff37fdff           call 0x80a058
// 00836859  83c404               add esp, 4
// 0083685c  8bc6                 mov eax, esi
// 0083685e  5e                   pop esi
// 0083685f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

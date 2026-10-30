// from server: 100% by auto
// roc 2012-06 009aede0  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aede0
//
// 009aede0  56                   push esi
// 009aede1  8bf1                 mov esi, ecx
// 009aede3  c7064402c100         mov dword ptr [esi], 0xc10244
// 009aede9  833dec93e50000       cmp dword ptr [0xe593ec], 0
// 009aedf0  751a                 jne 0x9aee0c
// 009aedf2  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009aedf7  85c0                 test eax, eax
// 009aedf9  7407                 je 0x9aee02
// 009aedfb  50                   push eax
// 009aedfc  ff159c22b200         call dword ptr [0xb2229c]
// 009aee02  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 009aee0c  f644240801           test byte ptr [esp + 8], 1
// 009aee11  7409                 je 0x9aee1c
// 009aee13  56                   push esi
// 009aee14  e8fb32fdff           call 0x982114
// 009aee19  83c404               add esp, 4
// 009aee1c  8bc6                 mov eax, esi
// 009aee1e  5e                   pop esi
// 009aee1f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

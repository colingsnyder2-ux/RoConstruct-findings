// from server: 100% by auto
// roc 2012-06 009bcc80  unit: CXTPReportRows  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bcc80
//
// 009bcc80  56                   push esi
// 009bcc81  8bf1                 mov esi, ecx
// 009bcc83  e818edffff           call 0x9bb9a0
// 009bcc88  f644240801           test byte ptr [esp + 8], 1
// 009bcc8d  742c                 je 0x9bccbb
// 009bcc8f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 009bcc96  740f                 je 0x9bcca7
// 009bcc98  56                   push esi
// 009bcc99  e802baa6ff           call 0x4286a0
// 009bcc9e  83c404               add esp, 4
// 009bcca1  8bc6                 mov eax, esi
// 009bcca3  5e                   pop esi
// 009bcca4  c20400               ret 4
// 009bcca7  68dc93e500           push 0xe593dc
// 009bccac  ff159421b200         call dword ptr [0xb22194]
// 009bccb2  56                   push esi
// 009bccb3  e85c54fcff           call 0x982114
// 009bccb8  83c404               add esp, 4
// 009bccbb  8bc6                 mov eax, esi
// 009bccbd  5e                   pop esi
// 009bccbe  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

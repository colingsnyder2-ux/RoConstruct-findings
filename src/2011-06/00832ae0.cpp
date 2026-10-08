// from server: 100% by auto
// roc 2011-06 00832ae0  unit: CXTPReportControl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832ae0
//
// 00832ae0  56                   push esi
// 00832ae1  33f6                 xor esi, esi
// 00832ae3  39357c82d100         cmp dword ptr [0xd1827c], esi
// 00832ae9  740d                 je 0x832af8
// 00832aeb  687c82d100           push 0xd1827c
// 00832af0  ff154803a400         call dword ptr [0xa40348]
// 00832af6  8bf0                 mov esi, eax
// 00832af8  833d8482d10000       cmp dword ptr [0xd18284], 0
// 00832aff  7434                 je 0x832b35
// 00832b01  8b442408             mov eax, dword ptr [esp + 8]
// 00832b05  8b0d7882d100         mov ecx, dword ptr [0xd18278]
// 00832b0b  50                   push eax
// 00832b0c  6a00                 push 0
// 00832b0e  51                   push ecx
// 00832b0f  ff15b401a400         call dword ptr [0xa401b4]
// 00832b15  85f6                 test esi, esi
// 00832b17  751a                 jne 0x832b33
// 00832b19  a17882d100           mov eax, dword ptr [0xd18278]
// 00832b1e  85c0                 test eax, eax
// 00832b20  7407                 je 0x832b29
// 00832b22  50                   push eax
// 00832b23  ff159002a400         call dword ptr [0xa40290]
// 00832b29  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00832b33  5e                   pop esi
// 00832b34  c3                   ret 
// 00832b35  5e                   pop esi
// 00832b36  e91d75fdff           jmp 0x80a058
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

// roc 2011-06 00424c60  unit: rbx::signals::connection::islot  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424c60
//
// 00424c60  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00424c67  686c82d100           push 0xd1826c
// 00424c6c  743b                 je 0x424ca9
// 00424c6e  ff154c03a400         call dword ptr [0xa4034c]
// 00424c74  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00424c7b  741c                 je 0x424c99
// 00424c7d  e84efeffff           call 0x424ad0
// 00424c82  8b442404             mov eax, dword ptr [esp + 4]
// 00424c86  8b0d6882d100         mov ecx, dword ptr [0xd18268]
// 00424c8c  50                   push eax
// 00424c8d  6a00                 push 0
// 00424c8f  51                   push ecx
// 00424c90  ff15b001a400         call dword ptr [0xa401b0]
// 00424c96  c20400               ret 4
// 00424c99  8b542404             mov edx, dword ptr [esp + 4]
// 00424c9d  52                   push edx
// 00424c9e  e89d563e00           call 0x80a340
// 00424ca3  83c404               add esp, 4
// 00424ca6  c20400               ret 4
// 00424ca9  ff154c03a400         call dword ptr [0xa4034c]
// 00424caf  8b442404             mov eax, dword ptr [esp + 4]
// 00424cb3  50                   push eax
// 00424cb4  e8a5533e00           call 0x80a05e
// 00424cb9  83c404               add esp, 4
// 00424cbc  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??2?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp

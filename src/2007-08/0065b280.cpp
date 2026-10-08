// from server: 100% by auto
// roc 2007-08 0065b280  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b280
//
// 0065b280  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 0065b287  6880878c00           push 0x8c8780
// 0065b28c  743b                 je 0x65b2c9
// 0065b28e  ff15ecd27700         call dword ptr [0x77d2ec]
// 0065b294  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 0065b29b  741c                 je 0x65b2b9
// 0065b29d  e8aeb7ffff           call 0x656a50
// 0065b2a2  8b442404             mov eax, dword ptr [esp + 4]
// 0065b2a6  8b0d7c878c00         mov ecx, dword ptr [0x8c877c]
// 0065b2ac  50                   push eax
// 0065b2ad  6a00                 push 0
// 0065b2af  51                   push ecx
// 0065b2b0  ff15a8d27700         call dword ptr [0x77d2a8]
// 0065b2b6  c20400               ret 4
// 0065b2b9  8b542404             mov edx, dword ptr [esp + 4]
// 0065b2bd  52                   push edx
// 0065b2be  e86f4cfdff           call 0x62ff32
// 0065b2c3  83c404               add esp, 4
// 0065b2c6  c20400               ret 4
// 0065b2c9  ff15ecd27700         call dword ptr [0x77d2ec]
// 0065b2cf  8b442404             mov eax, dword ptr [esp + 4]
// 0065b2d3  50                   push eax
// 0065b2d4  e81d4cfdff           call 0x62fef6
// 0065b2d9  83c404               add esp, 4
// 0065b2dc  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??2?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportDataAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

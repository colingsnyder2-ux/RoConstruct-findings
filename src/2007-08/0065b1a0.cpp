// from server: 100% by auto
// roc 2007-08 0065b1a0  unit: CXTPReportControl  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b1a0
//
// 0065b1a0  833d98878c0000       cmp dword ptr [0x8c8798], 0
// 0065b1a7  6890878c00           push 0x8c8790
// 0065b1ac  743b                 je 0x65b1e9
// 0065b1ae  ff15ecd27700         call dword ptr [0x77d2ec]
// 0065b1b4  833d98878c0000       cmp dword ptr [0x8c8798], 0
// 0065b1bb  741c                 je 0x65b1d9
// 0065b1bd  e81eb8ffff           call 0x6569e0
// 0065b1c2  8b442404             mov eax, dword ptr [esp + 4]
// 0065b1c6  8b0d8c878c00         mov ecx, dword ptr [0x8c878c]
// 0065b1cc  50                   push eax
// 0065b1cd  6a00                 push 0
// 0065b1cf  51                   push ecx
// 0065b1d0  ff15a8d27700         call dword ptr [0x77d2a8]
// 0065b1d6  c20400               ret 4
// 0065b1d9  8b542404             mov edx, dword ptr [esp + 4]
// 0065b1dd  52                   push edx
// 0065b1de  e84f4dfdff           call 0x62ff32
// 0065b1e3  83c404               add esp, 4
// 0065b1e6  c20400               ret 4
// 0065b1e9  ff15ecd27700         call dword ptr [0x77d2ec]
// 0065b1ef  8b442404             mov eax, dword ptr [esp + 4]
// 0065b1f3  50                   push eax
// 0065b1f4  e8fd4cfdff           call 0x62fef6
// 0065b1f9  83c404               add esp, 4
// 0065b1fc  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??2?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportDataAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

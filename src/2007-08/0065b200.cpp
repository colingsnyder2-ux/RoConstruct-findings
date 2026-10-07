// roc 2007-08 0065b200  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b200
//
// 0065b200  833d98878c0000       cmp dword ptr [0x8c8798], 0
// 0065b207  7410                 je 0x65b219
// 0065b209  8b442404             mov eax, dword ptr [esp + 4]
// 0065b20d  50                   push eax
// 0065b20e  e8edecffff           call 0x659f00
// 0065b213  83c404               add esp, 4
// 0065b216  c20400               ret 4
// 0065b219  6890878c00           push 0x8c8790
// 0065b21e  ff15e8d27700         call dword ptr [0x77d2e8]
// 0065b224  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065b228  51                   push ecx
// 0065b229  e8344afdff           call 0x62fc62
// 0065b22e  59                   pop ecx
// 0065b22f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

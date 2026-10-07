// roc 2007-08 00659f00  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659f00
//
// 00659f00  56                   push esi
// 00659f01  33f6                 xor esi, esi
// 00659f03  393590878c00         cmp dword ptr [0x8c8790], esi
// 00659f09  740d                 je 0x659f18
// 00659f0b  6890878c00           push 0x8c8790
// 00659f10  ff15e8d27700         call dword ptr [0x77d2e8]
// 00659f16  8bf0                 mov esi, eax
// 00659f18  833d98878c0000       cmp dword ptr [0x8c8798], 0
// 00659f1f  7434                 je 0x659f55
// 00659f21  8b442408             mov eax, dword ptr [esp + 8]
// 00659f25  8b0d8c878c00         mov ecx, dword ptr [0x8c878c]
// 00659f2b  50                   push eax
// 00659f2c  6a00                 push 0
// 00659f2e  51                   push ecx
// 00659f2f  ff15acd27700         call dword ptr [0x77d2ac]
// 00659f35  85f6                 test esi, esi
// 00659f37  751a                 jne 0x659f53
// 00659f39  a18c878c00           mov eax, dword ptr [0x8c878c]
// 00659f3e  85c0                 test eax, eax
// 00659f40  7407                 je 0x659f49
// 00659f42  50                   push eax
// 00659f43  ff1584d27700         call dword ptr [0x77d284]
// 00659f49  c7058c878c0000000000 mov dword ptr [0x8c878c], 0
// 00659f53  5e                   pop esi
// 00659f54  c3                   ret 
// 00659f55  5e                   pop esi
// 00659f56  e9075dfdff           jmp 0x62fc62
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPReportRowAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

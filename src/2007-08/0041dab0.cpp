// roc 2007-08 0041dab0  unit: CInstanceRecord::CNameItem  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041dab0
//
// 0041dab0  56                   push esi
// 0041dab1  33f6                 xor esi, esi
// 0041dab3  393570878c00         cmp dword ptr [0x8c8770], esi
// 0041dab9  740d                 je 0x41dac8
// 0041dabb  6870878c00           push 0x8c8770
// 0041dac0  ff15e8d27700         call dword ptr [0x77d2e8]
// 0041dac6  8bf0                 mov esi, eax
// 0041dac8  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 0041dacf  7434                 je 0x41db05
// 0041dad1  8b442408             mov eax, dword ptr [esp + 8]
// 0041dad5  8b0d6c878c00         mov ecx, dword ptr [0x8c876c]
// 0041dadb  50                   push eax
// 0041dadc  6a00                 push 0
// 0041dade  51                   push ecx
// 0041dadf  ff15acd27700         call dword ptr [0x77d2ac]
// 0041dae5  85f6                 test esi, esi
// 0041dae7  751a                 jne 0x41db03
// 0041dae9  a16c878c00           mov eax, dword ptr [0x8c876c]
// 0041daee  85c0                 test eax, eax
// 0041daf0  7407                 je 0x41daf9
// 0041daf2  50                   push eax
// 0041daf3  ff1584d27700         call dword ptr [0x77d284]
// 0041daf9  c7056c878c0000000000 mov dword ptr [0x8c876c], 0
// 0041db03  5e                   pop esi
// 0041db04  c3                   ret 
// 0041db05  5e                   pop esi
// 0041db06  e957212100           jmp 0x62fc62
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPReportRowAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

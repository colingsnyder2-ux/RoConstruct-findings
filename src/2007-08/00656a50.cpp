// roc 2007-08 00656a50  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656a50
//
// 00656a50  51                   push ecx
// 00656a51  833d7c878c0000       cmp dword ptr [0x8c877c], 0
// 00656a58  755a                 jne 0x656ab4
// 00656a5a  56                   push esi
// 00656a5b  6a00                 push 0
// 00656a5d  6a00                 push 0
// 00656a5f  6a00                 push 0
// 00656a61  ff1580d27700         call dword ptr [0x77d280]
// 00656a67  68c47e7800           push 0x787ec4
// 00656a6c  a37c878c00           mov dword ptr [0x8c877c], eax
// 00656a71  8bf0                 mov esi, eax
// 00656a73  c744240802000000     mov dword ptr [esp + 8], 2
// 00656a7b  ff15c8d27700         call dword ptr [0x77d2c8]
// 00656a81  85c0                 test eax, eax
// 00656a83  7424                 je 0x656aa9
// 00656a85  68b07e7800           push 0x787eb0
// 00656a8a  50                   push eax
// 00656a8b  ff1588d27700         call dword ptr [0x77d288]
// 00656a91  85c0                 test eax, eax
// 00656a93  7414                 je 0x656aa9
// 00656a95  6a04                 push 4
// 00656a97  8d4c2408             lea ecx, [esp + 8]
// 00656a9b  51                   push ecx
// 00656a9c  6a00                 push 0
// 00656a9e  56                   push esi
// 00656a9f  ffd0                 call eax
// 00656aa1  a384878c00           mov dword ptr [0x8c8784], eax
// 00656aa6  5e                   pop esi
// 00656aa7  59                   pop ecx
// 00656aa8  c3                   ret 
// 00656aa9  b801000000           mov eax, 1
// 00656aae  a384878c00           mov dword ptr [0x8c8784], eax
// 00656ab3  5e                   pop esi
// 00656ab4  59                   pop ecx
// 00656ab5  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

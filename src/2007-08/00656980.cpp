// from server: 100% by auto
// roc 2007-08 00656980  unit: CXTPReportControl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656980
//
// 00656980  56                   push esi
// 00656981  33f6                 xor esi, esi
// 00656983  393580878c00         cmp dword ptr [0x8c8780], esi
// 00656989  740d                 je 0x656998
// 0065698b  6880878c00           push 0x8c8780
// 00656990  ff15e8d27700         call dword ptr [0x77d2e8]
// 00656996  8bf0                 mov esi, eax
// 00656998  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 0065699f  7434                 je 0x6569d5
// 006569a1  8b442408             mov eax, dword ptr [esp + 8]
// 006569a5  8b0d7c878c00         mov ecx, dword ptr [0x8c877c]
// 006569ab  50                   push eax
// 006569ac  6a00                 push 0
// 006569ae  51                   push ecx
// 006569af  ff15acd27700         call dword ptr [0x77d2ac]
// 006569b5  85f6                 test esi, esi
// 006569b7  751a                 jne 0x6569d3
// 006569b9  a17c878c00           mov eax, dword ptr [0x8c877c]
// 006569be  85c0                 test eax, eax
// 006569c0  7407                 je 0x6569c9
// 006569c2  50                   push eax
// 006569c3  ff1584d27700         call dword ptr [0x77d284]
// 006569c9  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 006569d3  5e                   pop esi
// 006569d4  c3                   ret 
// 006569d5  5e                   pop esi
// 006569d6  e98792fdff           jmp 0x62fc62
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPReportRowAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

// from server: 100% by auto
// roc 2007-08 006569e0  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006569e0
//
// 006569e0  51                   push ecx
// 006569e1  833d8c878c0000       cmp dword ptr [0x8c878c], 0
// 006569e8  755a                 jne 0x656a44
// 006569ea  56                   push esi
// 006569eb  6a00                 push 0
// 006569ed  6a00                 push 0
// 006569ef  6a00                 push 0
// 006569f1  ff1580d27700         call dword ptr [0x77d280]
// 006569f7  68c47e7800           push 0x787ec4
// 006569fc  a38c878c00           mov dword ptr [0x8c878c], eax
// 00656a01  8bf0                 mov esi, eax
// 00656a03  c744240802000000     mov dword ptr [esp + 8], 2
// 00656a0b  ff15c8d27700         call dword ptr [0x77d2c8]
// 00656a11  85c0                 test eax, eax
// 00656a13  7424                 je 0x656a39
// 00656a15  68b07e7800           push 0x787eb0
// 00656a1a  50                   push eax
// 00656a1b  ff1588d27700         call dword ptr [0x77d288]
// 00656a21  85c0                 test eax, eax
// 00656a23  7414                 je 0x656a39
// 00656a25  6a04                 push 4
// 00656a27  8d4c2408             lea ecx, [esp + 8]
// 00656a2b  51                   push ecx
// 00656a2c  6a00                 push 0
// 00656a2e  56                   push esi
// 00656a2f  ffd0                 call eax
// 00656a31  a394878c00           mov dword ptr [0x8c8794], eax
// 00656a36  5e                   pop esi
// 00656a37  59                   pop ecx
// 00656a38  c3                   ret 
// 00656a39  b801000000           mov eax, 1
// 00656a3e  a394878c00           mov dword ptr [0x8c8794], eax
// 00656a43  5e                   pop esi
// 00656a44  59                   pop ecx
// 00656a45  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

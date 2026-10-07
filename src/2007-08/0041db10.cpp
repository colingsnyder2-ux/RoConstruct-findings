// roc 2007-08 0041db10  unit: CInstanceRecord::CNameItem  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041db10
//
// 0041db10  51                   push ecx
// 0041db11  833d6c878c0000       cmp dword ptr [0x8c876c], 0
// 0041db18  755a                 jne 0x41db74
// 0041db1a  56                   push esi
// 0041db1b  6a00                 push 0
// 0041db1d  6a00                 push 0
// 0041db1f  6a00                 push 0
// 0041db21  ff1580d27700         call dword ptr [0x77d280]
// 0041db27  68c47e7800           push 0x787ec4
// 0041db2c  a36c878c00           mov dword ptr [0x8c876c], eax
// 0041db31  8bf0                 mov esi, eax
// 0041db33  c744240802000000     mov dword ptr [esp + 8], 2
// 0041db3b  ff15c8d27700         call dword ptr [0x77d2c8]
// 0041db41  85c0                 test eax, eax
// 0041db43  7424                 je 0x41db69
// 0041db45  68b07e7800           push 0x787eb0
// 0041db4a  50                   push eax
// 0041db4b  ff1588d27700         call dword ptr [0x77d288]
// 0041db51  85c0                 test eax, eax
// 0041db53  7414                 je 0x41db69
// 0041db55  6a04                 push 4
// 0041db57  8d4c2408             lea ecx, [esp + 8]
// 0041db5b  51                   push ecx
// 0041db5c  6a00                 push 0
// 0041db5e  56                   push esi
// 0041db5f  ffd0                 call eax
// 0041db61  a374878c00           mov dword ptr [0x8c8774], eax
// 0041db66  5e                   pop esi
// 0041db67  59                   pop ecx
// 0041db68  c3                   ret 
// 0041db69  b801000000           mov eax, 1
// 0041db6e  a374878c00           mov dword ptr [0x8c8774], eax
// 0041db73  5e                   pop esi
// 0041db74  59                   pop ecx
// 0041db75  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

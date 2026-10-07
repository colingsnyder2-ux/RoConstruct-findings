// roc 2007-08 0065b6e0  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b6e0
//
// 0065b6e0  56                   push esi
// 0065b6e1  8bf1                 mov esi, ecx
// 0065b6e3  c7069c817c00         mov dword ptr [esi], 0x7c819c
// 0065b6e9  e852ebffff           call 0x65a240
// 0065b6ee  833d80878c0000       cmp dword ptr [0x8c8780], 0
// 0065b6f5  751a                 jne 0x65b711
// 0065b6f7  a17c878c00           mov eax, dword ptr [0x8c877c]
// 0065b6fc  85c0                 test eax, eax
// 0065b6fe  7407                 je 0x65b707
// 0065b700  50                   push eax
// 0065b701  ff1584d27700         call dword ptr [0x77d284]
// 0065b707  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 0065b711  f644240801           test byte ptr [esp + 8], 1
// 0065b716  7409                 je 0x65b721
// 0065b718  56                   push esi
// 0065b719  e84445fdff           call 0x62fc62
// 0065b71e  83c404               add esp, 4
// 0065b721  8bc6                 mov eax, esi
// 0065b723  5e                   pop esi
// 0065b724  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

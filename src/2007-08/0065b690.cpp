// roc 2007-08 0065b690  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b690
//
// 0065b690  56                   push esi
// 0065b691  8bf1                 mov esi, ecx
// 0065b693  c70694817c00         mov dword ptr [esi], 0x7c8194
// 0065b699  e8c2e9ffff           call 0x65a060
// 0065b69e  833d80878c0000       cmp dword ptr [0x8c8780], 0
// 0065b6a5  751a                 jne 0x65b6c1
// 0065b6a7  a17c878c00           mov eax, dword ptr [0x8c877c]
// 0065b6ac  85c0                 test eax, eax
// 0065b6ae  7407                 je 0x65b6b7
// 0065b6b0  50                   push eax
// 0065b6b1  ff1584d27700         call dword ptr [0x77d284]
// 0065b6b7  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 0065b6c1  f644240801           test byte ptr [esp + 8], 1
// 0065b6c6  7409                 je 0x65b6d1
// 0065b6c8  56                   push esi
// 0065b6c9  e89445fdff           call 0x62fc62
// 0065b6ce  83c404               add esp, 4
// 0065b6d1  8bc6                 mov eax, esi
// 0065b6d3  5e                   pop esi
// 0065b6d4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp

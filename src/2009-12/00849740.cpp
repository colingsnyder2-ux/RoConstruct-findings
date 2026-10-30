// roc 2009-12 00849740  unit: CXTPControlRecentFileList  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849740
//
// 00849740  56                   push esi
// 00849741  8bf1                 mov esi, ecx
// 00849743  e8d8f1faff           call 0x7f8920
// 00849748  b805000000           mov eax, 5
// 0084974d  898674010000         mov dword ptr [esi + 0x174], eax
// 00849753  b904000000           mov ecx, 4
// 00849758  b80c000000           mov eax, 0xc
// 0084975d  898e78010000         mov dword ptr [esi + 0x178], ecx
// 00849763  8bc8                 mov ecx, eax
// 00849765  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0084976b  b81c000000           mov eax, 0x1c
// 00849770  898e80010000         mov dword ptr [esi + 0x180], ecx
// 00849776  8bc8                 mov ecx, eax
// 00849778  89868c010000         mov dword ptr [esi + 0x18c], eax
// 0084977e  c706acb79f00         mov dword ptr [esi], 0x9fb7ac
// 00849784  c746204cb79f00       mov dword ptr [esi + 0x20], 0x9fb74c
// 0084978b  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 00849795  898e90010000         mov dword ptr [esi + 0x190], ecx
// 0084979b  8bc6                 mov eax, esi
// 0084979d  5e                   pop esi
// 0084979e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlSelector@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

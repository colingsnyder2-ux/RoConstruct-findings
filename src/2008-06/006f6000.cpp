// roc 2008-06 006f6000  unit: CXTPControlRecentFileList  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6000
//
// 006f6000  56                   push esi
// 006f6001  8bf1                 mov esi, ecx
// 006f6003  e8c87afbff           call 0x6adad0
// 006f6008  b805000000           mov eax, 5
// 006f600d  898674010000         mov dword ptr [esi + 0x174], eax
// 006f6013  b904000000           mov ecx, 4
// 006f6018  b80c000000           mov eax, 0xc
// 006f601d  898e78010000         mov dword ptr [esi + 0x178], ecx
// 006f6023  8bc8                 mov ecx, eax
// 006f6025  89867c010000         mov dword ptr [esi + 0x17c], eax
// 006f602b  b81c000000           mov eax, 0x1c
// 006f6030  898e80010000         mov dword ptr [esi + 0x180], ecx
// 006f6036  8bc8                 mov ecx, eax
// 006f6038  89868c010000         mov dword ptr [esi + 0x18c], eax
// 006f603e  c706aca28500         mov dword ptr [esi], 0x85a2ac
// 006f6044  c746204ca28500       mov dword ptr [esi + 0x20], 0x85a24c
// 006f604b  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 006f6055  898e90010000         mov dword ptr [esi + 0x190], ecx
// 006f605b  8bc6                 mov eax, esi
// 006f605d  5e                   pop esi
// 006f605e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlSelector@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

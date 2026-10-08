// roc 2010-06 007fd7e0  unit: CXTPControlRecentFileList  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fd7e0
//
// 007fd7e0  56                   push esi
// 007fd7e1  8bf1                 mov esi, ecx
// 007fd7e3  e818f3faff           call 0x7acb00
// 007fd7e8  b805000000           mov eax, 5
// 007fd7ed  898674010000         mov dword ptr [esi + 0x174], eax
// 007fd7f3  b904000000           mov ecx, 4
// 007fd7f8  b80c000000           mov eax, 0xc
// 007fd7fd  898e78010000         mov dword ptr [esi + 0x178], ecx
// 007fd803  8bc8                 mov ecx, eax
// 007fd805  89867c010000         mov dword ptr [esi + 0x17c], eax
// 007fd80b  b81c000000           mov eax, 0x1c
// 007fd810  898e80010000         mov dword ptr [esi + 0x180], ecx
// 007fd816  8bc8                 mov ecx, eax
// 007fd818  89868c010000         mov dword ptr [esi + 0x18c], eax
// 007fd81e  c7066cfaa500         mov dword ptr [esi], 0xa5fa6c
// 007fd824  c746200cfaa500       mov dword ptr [esi + 0x20], 0xa5fa0c
// 007fd82b  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 007fd835  898e90010000         mov dword ptr [esi + 0x190], ecx
// 007fd83b  8bc6                 mov eax, esi
// 007fd83d  5e                   pop esi
// 007fd83e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlSelector@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

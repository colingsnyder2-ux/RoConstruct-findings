// roc 2009-06 0076e9a0  unit: CXTPControlRecentFileList  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076e9a0
//
// 0076e9a0  56                   push esi
// 0076e9a1  8bf1                 mov esi, ecx
// 0076e9a3  e83838fbff           call 0x7221e0
// 0076e9a8  b805000000           mov eax, 5
// 0076e9ad  898674010000         mov dword ptr [esi + 0x174], eax
// 0076e9b3  b904000000           mov ecx, 4
// 0076e9b8  b80c000000           mov eax, 0xc
// 0076e9bd  898e78010000         mov dword ptr [esi + 0x178], ecx
// 0076e9c3  8bc8                 mov ecx, eax
// 0076e9c5  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0076e9cb  b81c000000           mov eax, 0x1c
// 0076e9d0  898e80010000         mov dword ptr [esi + 0x180], ecx
// 0076e9d6  8bc8                 mov ecx, eax
// 0076e9d8  89868c010000         mov dword ptr [esi + 0x18c], eax
// 0076e9de  c70604b38f00         mov dword ptr [esi], 0x8fb304
// 0076e9e4  c74620a4b28f00       mov dword ptr [esi + 0x20], 0x8fb2a4
// 0076e9eb  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 0076e9f5  898e90010000         mov dword ptr [esi + 0x190], ecx
// 0076e9fb  8bc6                 mov eax, esi
// 0076e9fd  5e                   pop esi
// 0076e9fe  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlSelector@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

// roc 2012-06 009d35d0  unit: CXTPControlRecentFileList  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d35d0
//
// 009d35d0  56                   push esi
// 009d35d1  8bf1                 mov esi, ecx
// 009d35d3  e8183dfbff           call 0x9872f0
// 009d35d8  b805000000           mov eax, 5
// 009d35dd  898674010000         mov dword ptr [esi + 0x174], eax
// 009d35e3  b904000000           mov ecx, 4
// 009d35e8  b80c000000           mov eax, 0xc
// 009d35ed  898e78010000         mov dword ptr [esi + 0x178], ecx
// 009d35f3  8bc8                 mov ecx, eax
// 009d35f5  89867c010000         mov dword ptr [esi + 0x17c], eax
// 009d35fb  b81c000000           mov eax, 0x1c
// 009d3600  898e80010000         mov dword ptr [esi + 0x180], ecx
// 009d3606  8bc8                 mov ecx, eax
// 009d3608  89868c010000         mov dword ptr [esi + 0x18c], eax
// 009d360e  c706545ac100         mov dword ptr [esi], 0xc15a54
// 009d3614  c74620f459c100       mov dword ptr [esi + 0x20], 0xc159f4
// 009d361b  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 009d3625  898e90010000         mov dword ptr [esi + 0x190], ecx
// 009d362b  8bc6                 mov eax, esi
// 009d362d  5e                   pop esi
// 009d362e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlSelector@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

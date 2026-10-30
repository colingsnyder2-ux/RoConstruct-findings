// roc 2011-06 0085b1f0  unit: CXTPControlRecentFileList  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085b1f0
//
// 0085b1f0  56                   push esi
// 0085b1f1  8bf1                 mov esi, ecx
// 0085b1f3  e8e83dfbff           call 0x80efe0
// 0085b1f8  b805000000           mov eax, 5
// 0085b1fd  898674010000         mov dword ptr [esi + 0x174], eax
// 0085b203  b904000000           mov ecx, 4
// 0085b208  b80c000000           mov eax, 0xc
// 0085b20d  898e78010000         mov dword ptr [esi + 0x178], ecx
// 0085b213  8bc8                 mov ecx, eax
// 0085b215  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0085b21b  b81c000000           mov eax, 0x1c
// 0085b220  898e80010000         mov dword ptr [esi + 0x180], ecx
// 0085b226  8bc8                 mov ecx, eax
// 0085b228  89868c010000         mov dword ptr [esi + 0x18c], eax
// 0085b22e  c7065ca3ac00         mov dword ptr [esi], 0xaca35c
// 0085b234  c74620fca2ac00       mov dword ptr [esi + 0x20], 0xaca2fc
// 0085b23b  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 0085b245  898e90010000         mov dword ptr [esi + 0x190], ecx
// 0085b24b  8bc6                 mov eax, esi
// 0085b24d  5e                   pop esi
// 0085b24e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlSelector@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

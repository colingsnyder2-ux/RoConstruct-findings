// roc 2008-06 006f5190  unit: CXTPControlCheckBox  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5190
//
// 006f5190  56                   push esi
// 006f5191  8bf1                 mov esi, ecx
// 006f5193  e8a8040500           call 0x745640
// 006f5198  c7062c9f8500         mov dword ptr [esi], 0x859f2c
// 006f519e  c74620cc9e8500       mov dword ptr [esi + 0x20], 0x859ecc
// 006f51a5  c786fc00000009000000 mov dword ptr [esi + 0xfc], 9
// 006f51af  8bc6                 mov eax, esi
// 006f51b1  5e                   pop esi
// 006f51b2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlCheckBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

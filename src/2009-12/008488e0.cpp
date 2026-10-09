// roc 2009-12 008488e0  unit: CXTPControlCheckBox  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008488e0
//
// 008488e0  56                   push esi
// 008488e1  8bf1                 mov esi, ecx
// 008488e3  e878780400           call 0x890160
// 008488e8  c7062cb49f00         mov dword ptr [esi], 0x9fb42c
// 008488ee  c74620ccb39f00       mov dword ptr [esi + 0x20], 0x9fb3cc
// 008488f5  c786fc00000009000000 mov dword ptr [esi + 0xfc], 9
// 008488ff  8bc6                 mov eax, esi
// 00848901  5e                   pop esi
// 00848902  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlCheckBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

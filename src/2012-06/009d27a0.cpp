// roc 2012-06 009d27a0  unit: CXTPControlRadioButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d27a0
//
// 009d27a0  56                   push esi
// 009d27a1  8bf1                 mov esi, ecx
// 009d27a3  e8d8710400           call 0xa19980
// 009d27a8  c7068458c100         mov dword ptr [esi], 0xc15884
// 009d27ae  c746202458c100       mov dword ptr [esi + 0x20], 0xc15824
// 009d27b5  c786fc0000000b000000 mov dword ptr [esi + 0xfc], 0xb
// 009d27bf  8bc6                 mov eax, esi
// 009d27c1  5e                   pop esi
// 009d27c2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlRadioButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

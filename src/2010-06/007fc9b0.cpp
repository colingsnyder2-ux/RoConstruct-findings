// roc 2010-06 007fc9b0  unit: CXTPControlRadioButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc9b0
//
// 007fc9b0  56                   push esi
// 007fc9b1  8bf1                 mov esi, ecx
// 007fc9b3  e8a8790400           call 0x844360
// 007fc9b8  c7069cf8a500         mov dword ptr [esi], 0xa5f89c
// 007fc9be  c746203cf8a500       mov dword ptr [esi + 0x20], 0xa5f83c
// 007fc9c5  c786fc0000000b000000 mov dword ptr [esi + 0xfc], 0xb
// 007fc9cf  8bc6                 mov eax, esi
// 007fc9d1  5e                   pop esi
// 007fc9d2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlRadioButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

// roc 2009-06 0076db70  unit: CXTPControlRadioButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076db70
//
// 0076db70  56                   push esi
// 0076db71  8bf1                 mov esi, ecx
// 0076db73  e8280e0500           call 0x7be9a0
// 0076db78  c70634b18f00         mov dword ptr [esi], 0x8fb134
// 0076db7e  c74620d4b08f00       mov dword ptr [esi + 0x20], 0x8fb0d4
// 0076db85  c786fc0000000b000000 mov dword ptr [esi + 0xfc], 0xb
// 0076db8f  8bc6                 mov eax, esi
// 0076db91  5e                   pop esi
// 0076db92  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlRadioButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

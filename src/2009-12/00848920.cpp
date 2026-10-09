// roc 2009-12 00848920  unit: CXTPControlRadioButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848920
//
// 00848920  56                   push esi
// 00848921  8bf1                 mov esi, ecx
// 00848923  e838780400           call 0x890160
// 00848928  c706dcb59f00         mov dword ptr [esi], 0x9fb5dc
// 0084892e  c746207cb59f00       mov dword ptr [esi + 0x20], 0x9fb57c
// 00848935  c786fc0000000b000000 mov dword ptr [esi + 0xfc], 0xb
// 0084893f  8bc6                 mov eax, esi
// 00848941  5e                   pop esi
// 00848942  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlRadioButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

// roc 2011-06 0085a3c0  unit: CXTPControlRadioButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a3c0
//
// 0085a3c0  56                   push esi
// 0085a3c1  8bf1                 mov esi, ecx
// 0085a3c3  e868710400           call 0x8a1530
// 0085a3c8  c7068ca1ac00         mov dword ptr [esi], 0xaca18c
// 0085a3ce  c746202ca1ac00       mov dword ptr [esi + 0x20], 0xaca12c
// 0085a3d5  c786fc0000000b000000 mov dword ptr [esi + 0xfc], 0xb
// 0085a3df  8bc6                 mov eax, esi
// 0085a3e1  5e                   pop esi
// 0085a3e2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlRadioButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

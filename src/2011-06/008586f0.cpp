// roc 2011-06 008586f0  unit: CXTPControls  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008586f0
//
// 008586f0  56                   push esi
// 008586f1  8bf1                 mov esi, ecx
// 008586f3  e808ffffff           call 0x858600
// 008586f8  c7062c92ac00         mov dword ptr [esi], 0xac922c
// 008586fe  c7464001000000       mov dword ptr [esi + 0x40], 1
// 00858705  8bc6                 mov eax, esi
// 00858707  5e                   pop esi
// 00858708  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ??0CXTPOriginalControls@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp

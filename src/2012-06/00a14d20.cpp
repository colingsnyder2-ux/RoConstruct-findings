// roc 2012-06 00a14d20  unit: CXTPControlEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a14d20
//
// 00a14d20  56                   push esi
// 00a14d21  8bf1                 mov esi, ecx
// 00a14d23  e8a8a3f7ff           call 0x98f0d0
// 00a14d28  c70654d2c100         mov dword ptr [esi], 0xc1d254
// 00a14d2e  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00a14d35  8bc6                 mov eax, esi
// 00a14d37  5e                   pop esi
// 00a14d38  c3                   ret 
// library xtp-13.2.1/Source\CommandBars\XTPControlEdit.cpp (function ??0CXTPControlEditCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPControlEdit.cpp

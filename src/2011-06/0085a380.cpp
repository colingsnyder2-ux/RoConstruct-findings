// roc 2011-06 0085a380  unit: CXTPControlCheckBox  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a380
//
// 0085a380  56                   push esi
// 0085a381  8bf1                 mov esi, ecx
// 0085a383  e8a8710400           call 0x8a1530
// 0085a388  c706dc9fac00         mov dword ptr [esi], 0xac9fdc
// 0085a38e  c746207c9fac00       mov dword ptr [esi + 0x20], 0xac9f7c
// 0085a395  c786fc00000009000000 mov dword ptr [esi + 0xfc], 9
// 0085a39f  8bc6                 mov eax, esi
// 0085a3a1  5e                   pop esi
// 0085a3a2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlCheckBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

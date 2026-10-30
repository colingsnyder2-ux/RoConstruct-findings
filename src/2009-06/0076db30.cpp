// roc 2009-06 0076db30  unit: CXTPControlCheckBox  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076db30
//
// 0076db30  56                   push esi
// 0076db31  8bf1                 mov esi, ecx
// 0076db33  e8680e0500           call 0x7be9a0
// 0076db38  c70684af8f00         mov dword ptr [esi], 0x8faf84
// 0076db3e  c7462024af8f00       mov dword ptr [esi + 0x20], 0x8faf24
// 0076db45  c786fc00000009000000 mov dword ptr [esi + 0xfc], 9
// 0076db4f  8bc6                 mov eax, esi
// 0076db51  5e                   pop esi
// 0076db52  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlCheckBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

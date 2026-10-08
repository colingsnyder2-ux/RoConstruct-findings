// from server: 100% by auto
// roc 2008-06 006f51d0  unit: CXTPControlRadioButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f51d0
//
// 006f51d0  56                   push esi
// 006f51d1  8bf1                 mov esi, ecx
// 006f51d3  e868040500           call 0x745640
// 006f51d8  c706dca08500         mov dword ptr [esi], 0x85a0dc
// 006f51de  c746207ca08500       mov dword ptr [esi + 0x20], 0x85a07c
// 006f51e5  c786fc0000000b000000 mov dword ptr [esi + 0xfc], 0xb
// 006f51ef  8bc6                 mov eax, esi
// 006f51f1  5e                   pop esi
// 006f51f2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlRadioButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

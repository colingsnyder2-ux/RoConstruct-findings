// roc 2009-12 00849aa0  unit: CXTPControlSelector  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00849aa0
//
// 00849aa0  56                   push esi
// 00849aa1  57                   push edi
// 00849aa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00849aa6  57                   push edi
// 00849aa7  8bf1                 mov esi, ecx
// 00849aa9  e802cafeff           call 0x8364b0
// 00849aae  33c9                 xor ecx, ecx
// 00849ab0  51                   push ecx
// 00849ab1  33c0                 xor eax, eax
// 00849ab3  50                   push eax
// 00849ab4  8d8674010000         lea eax, [esi + 0x174]
// 00849aba  50                   push eax
// 00849abb  6810b99f00           push 0x9fb910
// 00849ac0  57                   push edi
// 00849ac1  e88a700000           call 0x850b50
// 00849ac6  33c9                 xor ecx, ecx
// 00849ac8  51                   push ecx
// 00849ac9  33c0                 xor eax, eax
// 00849acb  50                   push eax
// 00849acc  8d8e7c010000         lea ecx, [esi + 0x17c]
// 00849ad2  51                   push ecx
// 00849ad3  6804b99f00           push 0x9fb904
// 00849ad8  57                   push edi
// 00849ad9  e872700000           call 0x850b50
// 00849ade  33c9                 xor ecx, ecx
// 00849ae0  51                   push ecx
// 00849ae1  33c0                 xor eax, eax
// 00849ae3  50                   push eax
// 00849ae4  81c68c010000         add esi, 0x18c
// 00849aea  56                   push esi
// 00849aeb  68f8b89f00           push 0x9fb8f8
// 00849af0  57                   push edi
// 00849af1  e85a700000           call 0x850b50
// 00849af6  83c43c               add esp, 0x3c
// 00849af9  5f                   pop edi
// 00849afa  5e                   pop esi
// 00849afb  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?DoPropExchange@CXTPControlSelector@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

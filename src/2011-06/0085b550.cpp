// roc 2011-06 0085b550  unit: CXTPControlSelector  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085b550
//
// 0085b550  56                   push esi
// 0085b551  57                   push edi
// 0085b552  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085b556  57                   push edi
// 0085b557  8bf1                 mov esi, ecx
// 0085b559  e89209ffff           call 0x84bef0
// 0085b55e  33c9                 xor ecx, ecx
// 0085b560  51                   push ecx
// 0085b561  33c0                 xor eax, eax
// 0085b563  50                   push eax
// 0085b564  8d8674010000         lea eax, [esi + 0x174]
// 0085b56a  50                   push eax
// 0085b56b  68c0a4ac00           push 0xaca4c0
// 0085b570  57                   push edi
// 0085b571  e82a4b0000           call 0x8600a0
// 0085b576  33c9                 xor ecx, ecx
// 0085b578  51                   push ecx
// 0085b579  33c0                 xor eax, eax
// 0085b57b  50                   push eax
// 0085b57c  8d8e7c010000         lea ecx, [esi + 0x17c]
// 0085b582  51                   push ecx
// 0085b583  68b4a4ac00           push 0xaca4b4
// 0085b588  57                   push edi
// 0085b589  e8124b0000           call 0x8600a0
// 0085b58e  33c9                 xor ecx, ecx
// 0085b590  51                   push ecx
// 0085b591  33c0                 xor eax, eax
// 0085b593  50                   push eax
// 0085b594  81c68c010000         add esi, 0x18c
// 0085b59a  56                   push esi
// 0085b59b  68a8a4ac00           push 0xaca4a8
// 0085b5a0  57                   push edi
// 0085b5a1  e8fa4a0000           call 0x8600a0
// 0085b5a6  83c43c               add esp, 0x3c
// 0085b5a9  5f                   pop edi
// 0085b5aa  5e                   pop esi
// 0085b5ab  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?DoPropExchange@CXTPControlSelector@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

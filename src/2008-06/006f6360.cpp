// from server: 100% by auto
// roc 2008-06 006f6360  unit: CXTPControlSelector  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6360
//
// 006f6360  56                   push esi
// 006f6361  57                   push edi
// 006f6362  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f6366  57                   push edi
// 006f6367  8bf1                 mov esi, ecx
// 006f6369  e892cafeff           call 0x6e2e00
// 006f636e  33c9                 xor ecx, ecx
// 006f6370  51                   push ecx
// 006f6371  33c0                 xor eax, eax
// 006f6373  50                   push eax
// 006f6374  8d8674010000         lea eax, [esi + 0x174]
// 006f637a  50                   push eax
// 006f637b  6810a48500           push 0x85a410
// 006f6380  57                   push edi
// 006f6381  e80a710000           call 0x6fd490
// 006f6386  33c9                 xor ecx, ecx
// 006f6388  51                   push ecx
// 006f6389  33c0                 xor eax, eax
// 006f638b  50                   push eax
// 006f638c  8d8e7c010000         lea ecx, [esi + 0x17c]
// 006f6392  51                   push ecx
// 006f6393  6804a48500           push 0x85a404
// 006f6398  57                   push edi
// 006f6399  e8f2700000           call 0x6fd490
// 006f639e  33c9                 xor ecx, ecx
// 006f63a0  51                   push ecx
// 006f63a1  33c0                 xor eax, eax
// 006f63a3  50                   push eax
// 006f63a4  81c68c010000         add esi, 0x18c
// 006f63aa  56                   push esi
// 006f63ab  68f8a38500           push 0x85a3f8
// 006f63b0  57                   push edi
// 006f63b1  e8da700000           call 0x6fd490
// 006f63b6  83c43c               add esp, 0x3c
// 006f63b9  5f                   pop edi
// 006f63ba  5e                   pop esi
// 006f63bb  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?DoPropExchange@CXTPControlSelector@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

// roc 2010-06 007fdb40  unit: CXTPControlSelector  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fdb40
//
// 007fdb40  56                   push esi
// 007fdb41  57                   push edi
// 007fdb42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007fdb46  57                   push edi
// 007fdb47  8bf1                 mov esi, ecx
// 007fdb49  e882cbfeff           call 0x7ea6d0
// 007fdb4e  33c9                 xor ecx, ecx
// 007fdb50  51                   push ecx
// 007fdb51  33c0                 xor eax, eax
// 007fdb53  50                   push eax
// 007fdb54  8d8674010000         lea eax, [esi + 0x174]
// 007fdb5a  50                   push eax
// 007fdb5b  68d0fba500           push 0xa5fbd0
// 007fdb60  57                   push edi
// 007fdb61  e85a700000           call 0x804bc0
// 007fdb66  33c9                 xor ecx, ecx
// 007fdb68  51                   push ecx
// 007fdb69  33c0                 xor eax, eax
// 007fdb6b  50                   push eax
// 007fdb6c  8d8e7c010000         lea ecx, [esi + 0x17c]
// 007fdb72  51                   push ecx
// 007fdb73  68c4fba500           push 0xa5fbc4
// 007fdb78  57                   push edi
// 007fdb79  e842700000           call 0x804bc0
// 007fdb7e  33c9                 xor ecx, ecx
// 007fdb80  51                   push ecx
// 007fdb81  33c0                 xor eax, eax
// 007fdb83  50                   push eax
// 007fdb84  81c68c010000         add esi, 0x18c
// 007fdb8a  56                   push esi
// 007fdb8b  68b8fba500           push 0xa5fbb8
// 007fdb90  57                   push edi
// 007fdb91  e82a700000           call 0x804bc0
// 007fdb96  83c43c               add esp, 0x3c
// 007fdb99  5f                   pop edi
// 007fdb9a  5e                   pop esi
// 007fdb9b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?DoPropExchange@CXTPControlSelector@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

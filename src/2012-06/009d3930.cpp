// roc 2012-06 009d3930  unit: CXTPControlSelector  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d3930
//
// 009d3930  56                   push esi
// 009d3931  57                   push edi
// 009d3932  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009d3936  57                   push edi
// 009d3937  8bf1                 mov esi, ecx
// 009d3939  e8020bffff           call 0x9c4440
// 009d393e  33c9                 xor ecx, ecx
// 009d3940  51                   push ecx
// 009d3941  33c0                 xor eax, eax
// 009d3943  50                   push eax
// 009d3944  8d8674010000         lea eax, [esi + 0x174]
// 009d394a  50                   push eax
// 009d394b  68b85bc100           push 0xc15bb8
// 009d3950  57                   push edi
// 009d3951  e84a4b0000           call 0x9d84a0
// 009d3956  33c9                 xor ecx, ecx
// 009d3958  51                   push ecx
// 009d3959  33c0                 xor eax, eax
// 009d395b  50                   push eax
// 009d395c  8d8e7c010000         lea ecx, [esi + 0x17c]
// 009d3962  51                   push ecx
// 009d3963  68ac5bc100           push 0xc15bac
// 009d3968  57                   push edi
// 009d3969  e8324b0000           call 0x9d84a0
// 009d396e  33c9                 xor ecx, ecx
// 009d3970  51                   push ecx
// 009d3971  33c0                 xor eax, eax
// 009d3973  50                   push eax
// 009d3974  81c68c010000         add esi, 0x18c
// 009d397a  56                   push esi
// 009d397b  68a05bc100           push 0xc15ba0
// 009d3980  57                   push edi
// 009d3981  e81a4b0000           call 0x9d84a0
// 009d3986  83c43c               add esp, 0x3c
// 009d3989  5f                   pop edi
// 009d398a  5e                   pop esi
// 009d398b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?DoPropExchange@CXTPControlSelector@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

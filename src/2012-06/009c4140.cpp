// roc 2012-06 009c4140  unit: CXTPPopupBar  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c4140
//
// 009c4140  53                   push ebx
// 009c4141  55                   push ebp
// 009c4142  56                   push esi
// 009c4143  8b742410             mov esi, dword ptr [esp + 0x10]
// 009c4147  57                   push edi
// 009c4148  56                   push esi
// 009c4149  8bf9                 mov edi, ecx
// 009c414b  e840faffff           call 0x9c3b90
// 009c4150  6a00                 push 0
// 009c4152  8d87b0010000         lea eax, [edi + 0x1b0]
// 009c4158  50                   push eax
// 009c4159  68e031c100           push 0xc131e0
// 009c415e  56                   push esi
// 009c415f  e84c420100           call 0x9d83b0
// 009c4164  68e83bb400           push 0xb43be8
// 009c4169  8d8ff0010000         lea ecx, [edi + 0x1f0]
// 009c416f  51                   push ecx
// 009c4170  68d031c100           push 0xc131d0
// 009c4175  56                   push esi
// 009c4176  e895420100           call 0x9d8410
// 009c417b  6a00                 push 0
// 009c417d  8d97f4010000         lea edx, [edi + 0x1f4]
// 009c4183  52                   push edx
// 009c4184  68c431c100           push 0xc131c4
// 009c4189  56                   push esi
// 009c418a  e891410100           call 0x9d8320
// 009c418f  6a00                 push 0
// 009c4191  8d87f8010000         lea eax, [edi + 0x1f8]
// 009c4197  50                   push eax
// 009c4198  68b431c100           push 0xc131b4
// 009c419d  56                   push esi
// 009c419e  e87d410100           call 0x9d8320
// 009c41a3  83c440               add esp, 0x40
// 009c41a6  837e2c03             cmp dword ptr [esi + 0x2c], 3
// 009c41aa  7647                 jbe 0x9c41f3
// 009c41ac  83ec10               sub esp, 0x10
// 009c41af  8bc4                 mov eax, esp
// 009c41b1  b902000000           mov ecx, 2
// 009c41b6  8908                 mov dword ptr [eax], ecx
// 009c41b8  8bd9                 mov ebx, ecx
// 009c41ba  8d8f00020000         lea ecx, [edi + 0x200]
// 009c41c0  51                   push ecx
// 009c41c1  ba04000000           mov edx, 4
// 009c41c6  895004               mov dword ptr [eax + 4], edx
// 009c41c9  8bea                 mov ebp, edx
// 009c41cb  68ac31c100           push 0xc131ac
// 009c41d0  895808               mov dword ptr [eax + 8], ebx
// 009c41d3  56                   push esi
// 009c41d4  89680c               mov dword ptr [eax + 0xc], ebp
// 009c41d7  e8f4420100           call 0x9d84d0
// 009c41dc  6a01                 push 1
// 009c41de  8d97fc010000         lea edx, [edi + 0x1fc]
// 009c41e4  52                   push edx
// 009c41e5  68a031c100           push 0xc131a0
// 009c41ea  56                   push esi
// 009c41eb  e8c0410100           call 0x9d83b0
// 009c41f0  83c42c               add esp, 0x2c
// 009c41f3  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 009c41f7  7617                 jbe 0x9c4210
// 009c41f9  6a00                 push 0
// 009c41fb  8d8710020000         lea eax, [edi + 0x210]
// 009c4201  50                   push eax
// 009c4202  689031c100           push 0xc13190
// 009c4207  56                   push esi
// 009c4208  e8a3410100           call 0x9d83b0
// 009c420d  83c410               add esp, 0x10
// 009c4210  837e2c14             cmp dword ptr [esi + 0x2c], 0x14
// 009c4214  7309                 jae 0x9c421f
// 009c4216  6a01                 push 1
// 009c4218  8bcf                 mov ecx, edi
// 009c421a  e881e9fcff           call 0x992ba0
// 009c421f  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 009c4223  7617                 jbe 0x9c423c
// 009c4225  6a00                 push 0
// 009c4227  81c714020000         add edi, 0x214
// 009c422d  57                   push edi
// 009c422e  688431c100           push 0xc13184
// 009c4233  56                   push esi
// 009c4234  e877410100           call 0x9d83b0
// 009c4239  83c410               add esp, 0x10
// 009c423c  5f                   pop edi
// 009c423d  5e                   pop esi
// 009c423e  5d                   pop ebp
// 009c423f  5b                   pop ebx
// 009c4240  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPPopupBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

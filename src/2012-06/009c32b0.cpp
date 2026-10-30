// from server: 100% by auto
// roc 2012-06 009c32b0  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c32b0
//
// 009c32b0  837c240800           cmp dword ptr [esp + 8], 0
// 009c32b5  53                   push ebx
// 009c32b6  55                   push ebp
// 009c32b7  56                   push esi
// 009c32b8  57                   push edi
// 009c32b9  8bf1                 mov esi, ecx
// 009c32bb  0f84f8000000         je 0x9c33b9
// 009c32c1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009c32c5  6a00                 push 0
// 009c32c7  56                   push esi
// 009c32c8  689c30c100           push 0xc1309c
// 009c32cd  57                   push edi
// 009c32ce  e84d500100           call 0x9d8320
// 009c32d3  6a01                 push 1
// 009c32d5  8d4604               lea eax, [esi + 4]
// 009c32d8  50                   push eax
// 009c32d9  68c837bc00           push 0xbc37c8
// 009c32de  57                   push edi
// 009c32df  e8cc500100           call 0x9d83b0
// 009c32e4  6a00                 push 0
// 009c32e6  8d4e08               lea ecx, [esi + 8]
// 009c32e9  51                   push ecx
// 009c32ea  689030c100           push 0xc13090
// 009c32ef  57                   push edi
// 009c32f0  e8bb500100           call 0x9d83b0
// 009c32f5  8d5614               lea edx, [esi + 0x14]
// 009c32f8  52                   push edx
// 009c32f9  688430c100           push 0xc13084
// 009c32fe  57                   push edi
// 009c32ff  e84c500100           call 0x9d8350
// 009c3304  6a00                 push 0
// 009c3306  8d4618               lea eax, [esi + 0x18]
// 009c3309  50                   push eax
// 009c330a  687430c100           push 0xc13074
// 009c330f  57                   push edi
// 009c3310  e80b500100           call 0x9d8320
// 009c3315  83c44c               add esp, 0x4c
// 009c3318  33c9                 xor ecx, ecx
// 009c331a  51                   push ecx
// 009c331b  33c0                 xor eax, eax
// 009c331d  50                   push eax
// 009c331e  8d4e0c               lea ecx, [esi + 0xc]
// 009c3321  51                   push ecx
// 009c3322  686830c100           push 0xc13068
// 009c3327  57                   push edi
// 009c3328  e873510100           call 0x9d84a0
// 009c332d  83c404               add esp, 4
// 009c3330  8bc4                 mov eax, esp
// 009c3332  33c9                 xor ecx, ecx
// 009c3334  33d2                 xor edx, edx
// 009c3336  8908                 mov dword ptr [eax], ecx
// 009c3338  895004               mov dword ptr [eax + 4], edx
// 009c333b  8d561c               lea edx, [esi + 0x1c]
// 009c333e  52                   push edx
// 009c333f  33db                 xor ebx, ebx
// 009c3341  685c30c100           push 0xc1305c
// 009c3346  33ed                 xor ebp, ebp
// 009c3348  895808               mov dword ptr [eax + 8], ebx
// 009c334b  57                   push edi
// 009c334c  89680c               mov dword ptr [eax + 0xc], ebp
// 009c334f  e87c510100           call 0x9d84d0
// 009c3354  33c9                 xor ecx, ecx
// 009c3356  51                   push ecx
// 009c3357  33c0                 xor eax, eax
// 009c3359  50                   push eax
// 009c335a  8d4630               lea eax, [esi + 0x30]
// 009c335d  50                   push eax
// 009c335e  685030c100           push 0xc13050
// 009c3363  57                   push edi
// 009c3364  e837510100           call 0x9d84a0
// 009c3369  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009c336d  83c430               add esp, 0x30
// 009c3370  833906               cmp dword ptr [ecx], 6
// 009c3373  7644                 jbe 0x9c33b9
// 009c3375  55                   push ebp
// 009c3376  8d5e3c               lea ebx, [esi + 0x3c]
// 009c3379  53                   push ebx
// 009c337a  684430c100           push 0xc13044
// 009c337f  57                   push edi
// 009c3380  e82b500100           call 0x9d83b0
// 009c3385  83c410               add esp, 0x10
// 009c3388  392b                 cmp dword ptr [ebx], ebp
// 009c338a  742d                 je 0x9c33b9
// 009c338c  33c9                 xor ecx, ecx
// 009c338e  51                   push ecx
// 009c338f  33c0                 xor eax, eax
// 009c3391  50                   push eax
// 009c3392  8d5640               lea edx, [esi + 0x40]
// 009c3395  52                   push edx
// 009c3396  682830c100           push 0xc13028
// 009c339b  57                   push edi
// 009c339c  e8ff500100           call 0x9d84a0
// 009c33a1  33c9                 xor ecx, ecx
// 009c33a3  51                   push ecx
// 009c33a4  33c0                 xor eax, eax
// 009c33a6  50                   push eax
// 009c33a7  83c648               add esi, 0x48
// 009c33aa  56                   push esi
// 009c33ab  680c30c100           push 0xc1300c
// 009c33b0  57                   push edi
// 009c33b1  e8ea500100           call 0x9d84a0
// 009c33b6  83c428               add esp, 0x28
// 009c33b9  5f                   pop edi
// 009c33ba  5e                   pop esi
// 009c33bb  5d                   pop ebp
// 009c33bc  5b                   pop ebx
// 009c33bd  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CToolBarInfo@CXTPToolBar@@QAEXPAVCXTPPropExchange@@PAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp

// from server: 100% by auto
// roc 2008-06 006e3290  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e3290
//
// 006e3290  53                   push ebx
// 006e3291  56                   push esi
// 006e3292  57                   push edi
// 006e3293  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e3297  57                   push edi
// 006e3298  8bf1                 mov esi, ecx
// 006e329a  e861ffffff           call 0x6e3200
// 006e329f  6a01                 push 1
// 006e32a1  8d9e88010000         lea ebx, [esi + 0x188]
// 006e32a7  53                   push ebx
// 006e32a8  684c688500           push 0x85684c
// 006e32ad  57                   push edi
// 006e32ae  e8eda00100           call 0x6fd3a0
// 006e32b3  6a00                 push 0
// 006e32b5  8d8660010000         lea eax, [esi + 0x160]
// 006e32bb  50                   push eax
// 006e32bc  68f4e48100           push 0x81e4f4
// 006e32c1  57                   push edi
// 006e32c2  e849a00100           call 0x6fd310
// 006e32c7  6a00                 push 0
// 006e32c9  8d8e8c010000         lea ecx, [esi + 0x18c]
// 006e32cf  51                   push ecx
// 006e32d0  6840688500           push 0x856840
// 006e32d5  57                   push edi
// 006e32d6  e835a00100           call 0x6fd310
// 006e32db  83c430               add esp, 0x30
// 006e32de  837f2c08             cmp dword ptr [edi + 0x2c], 8
// 006e32e2  766d                 jbe 0x6e3351
// 006e32e4  6816b78000           push 0x80b716
// 006e32e9  8d96a8010000         lea edx, [esi + 0x1a8]
// 006e32ef  52                   push edx
// 006e32f0  6834688500           push 0x856834
// 006e32f5  57                   push edi
// 006e32f6  e805a10100           call 0x6fd400
// 006e32fb  6a00                 push 0
// 006e32fd  8d86b4010000         lea eax, [esi + 0x1b4]
// 006e3303  50                   push eax
// 006e3304  681c688500           push 0x85681c
// 006e3309  57                   push edi
// 006e330a  e801a00100           call 0x6fd310
// 006e330f  6a00                 push 0
// 006e3311  8d8eac010000         lea ecx, [esi + 0x1ac]
// 006e3317  51                   push ecx
// 006e3318  680c688500           push 0x85680c
// 006e331d  57                   push edi
// 006e331e  e87da00100           call 0x6fd3a0
// 006e3323  6a00                 push 0
// 006e3325  8d96bc010000         lea edx, [esi + 0x1bc]
// 006e332b  52                   push edx
// 006e332c  6800688500           push 0x856800
// 006e3331  57                   push edi
// 006e3332  e8d99f0100           call 0x6fd310
// 006e3337  83c440               add esp, 0x40
// 006e333a  6a0c                 push 0xc
// 006e333c  8d86c4010000         lea eax, [esi + 0x1c4]
// 006e3342  50                   push eax
// 006e3343  68ec678500           push 0x8567ec
// 006e3348  57                   push edi
// 006e3349  e8c29f0100           call 0x6fd310
// 006e334e  83c410               add esp, 0x10
// 006e3351  837f2c10             cmp dword ptr [edi + 0x2c], 0x10
// 006e3355  7617                 jbe 0x6e336e
// 006e3357  6a00                 push 0
// 006e3359  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 006e335f  51                   push ecx
// 006e3360  68e0678500           push 0x8567e0
// 006e3365  57                   push edi
// 006e3366  e8a59f0100           call 0x6fd310
// 006e336b  83c410               add esp, 0x10
// 006e336e  837f2800             cmp dword ptr [edi + 0x28], 0
// 006e3372  7418                 je 0x6e338c
// 006e3374  8b13                 mov edx, dword ptr [ebx]
// 006e3376  52                   push edx
// 006e3377  8bce                 mov ecx, esi
// 006e3379  e83239fcff           call 0x6a6cb0
// 006e337e  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 006e3384  50                   push eax
// 006e3385  8bce                 mov ecx, esi
// 006e3387  e8144bfcff           call 0x6a7ea0
// 006e338c  5f                   pop edi
// 006e338d  5e                   pop esi
// 006e338e  5b                   pop ebx
// 006e338f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlComboBox@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

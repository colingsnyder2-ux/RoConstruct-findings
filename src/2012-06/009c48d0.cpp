// roc 2012-06 009c48d0  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c48d0
//
// 009c48d0  53                   push ebx
// 009c48d1  56                   push esi
// 009c48d2  57                   push edi
// 009c48d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c48d7  57                   push edi
// 009c48d8  8bf1                 mov esi, ecx
// 009c48da  e861ffffff           call 0x9c4840
// 009c48df  6a01                 push 1
// 009c48e1  8d9e88010000         lea ebx, [esi + 0x188]
// 009c48e7  53                   push ebx
// 009c48e8  685433c100           push 0xc13354
// 009c48ed  57                   push edi
// 009c48ee  e8bd3a0100           call 0x9d83b0
// 009c48f3  6a00                 push 0
// 009c48f5  8d8660010000         lea eax, [esi + 0x160]
// 009c48fb  50                   push eax
// 009c48fc  68c81abd00           push 0xbd1ac8
// 009c4901  57                   push edi
// 009c4902  e8193a0100           call 0x9d8320
// 009c4907  6a00                 push 0
// 009c4909  8d8e8c010000         lea ecx, [esi + 0x18c]
// 009c490f  51                   push ecx
// 009c4910  684833c100           push 0xc13348
// 009c4915  57                   push edi
// 009c4916  e8053a0100           call 0x9d8320
// 009c491b  83c430               add esp, 0x30
// 009c491e  837f2c08             cmp dword ptr [edi + 0x2c], 8
// 009c4922  766d                 jbe 0x9c4991
// 009c4924  68e83bb400           push 0xb43be8
// 009c4929  8d96a8010000         lea edx, [esi + 0x1a8]
// 009c492f  52                   push edx
// 009c4930  683c33c100           push 0xc1333c
// 009c4935  57                   push edi
// 009c4936  e8d53a0100           call 0x9d8410
// 009c493b  6a00                 push 0
// 009c493d  8d86b4010000         lea eax, [esi + 0x1b4]
// 009c4943  50                   push eax
// 009c4944  682433c100           push 0xc13324
// 009c4949  57                   push edi
// 009c494a  e8d1390100           call 0x9d8320
// 009c494f  6a00                 push 0
// 009c4951  8d8eac010000         lea ecx, [esi + 0x1ac]
// 009c4957  51                   push ecx
// 009c4958  681433c100           push 0xc13314
// 009c495d  57                   push edi
// 009c495e  e84d3a0100           call 0x9d83b0
// 009c4963  6a00                 push 0
// 009c4965  8d96bc010000         lea edx, [esi + 0x1bc]
// 009c496b  52                   push edx
// 009c496c  680833c100           push 0xc13308
// 009c4971  57                   push edi
// 009c4972  e8a9390100           call 0x9d8320
// 009c4977  83c440               add esp, 0x40
// 009c497a  6a0c                 push 0xc
// 009c497c  8d86c4010000         lea eax, [esi + 0x1c4]
// 009c4982  50                   push eax
// 009c4983  68f432c100           push 0xc132f4
// 009c4988  57                   push edi
// 009c4989  e892390100           call 0x9d8320
// 009c498e  83c410               add esp, 0x10
// 009c4991  837f2c10             cmp dword ptr [edi + 0x2c], 0x10
// 009c4995  7617                 jbe 0x9c49ae
// 009c4997  6a00                 push 0
// 009c4999  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 009c499f  51                   push ecx
// 009c49a0  68e832c100           push 0xc132e8
// 009c49a5  57                   push edi
// 009c49a6  e875390100           call 0x9d8320
// 009c49ab  83c410               add esp, 0x10
// 009c49ae  837f2800             cmp dword ptr [edi + 0x28], 0
// 009c49b2  7418                 je 0x9c49cc
// 009c49b4  8b13                 mov edx, dword ptr [ebx]
// 009c49b6  52                   push edx
// 009c49b7  8bce                 mov ecx, esi
// 009c49b9  e8d29efcff           call 0x98e890
// 009c49be  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 009c49c4  50                   push eax
// 009c49c5  8bce                 mov ecx, esi
// 009c49c7  e894b0fcff           call 0x98fa60
// 009c49cc  5f                   pop edi
// 009c49cd  5e                   pop esi
// 009c49ce  5b                   pop ebx
// 009c49cf  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlComboBox@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

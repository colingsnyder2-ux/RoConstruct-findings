// roc 2012-06 009c49e0  unit: CXTPControlEdit  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c49e0
//
// 009c49e0  56                   push esi
// 009c49e1  8b742408             mov esi, dword ptr [esp + 8]
// 009c49e5  57                   push edi
// 009c49e6  56                   push esi
// 009c49e7  8bf9                 mov edi, ecx
// 009c49e9  e852faffff           call 0x9c4440
// 009c49ee  837e2c05             cmp dword ptr [esi + 0x2c], 5
// 009c49f2  762b                 jbe 0x9c4a1f
// 009c49f4  6a00                 push 0
// 009c49f6  8d8778010000         lea eax, [edi + 0x178]
// 009c49fc  50                   push eax
// 009c49fd  687c33c100           push 0xc1337c
// 009c4a02  56                   push esi
// 009c4a03  e8a8390100           call 0x9d83b0
// 009c4a08  6a00                 push 0
// 009c4a0a  8d8f60010000         lea ecx, [edi + 0x160]
// 009c4a10  51                   push ecx
// 009c4a11  68c81abd00           push 0xbd1ac8
// 009c4a16  56                   push esi
// 009c4a17  e804390100           call 0x9d8320
// 009c4a1c  83c420               add esp, 0x20
// 009c4a1f  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 009c4a23  7617                 jbe 0x9c4a3c
// 009c4a25  6a00                 push 0
// 009c4a27  8d977c010000         lea edx, [edi + 0x17c]
// 009c4a2d  52                   push edx
// 009c4a2e  687033c100           push 0xc13370
// 009c4a33  56                   push esi
// 009c4a34  e877390100           call 0x9d83b0
// 009c4a39  83c410               add esp, 0x10
// 009c4a3c  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 009c4a40  762e                 jbe 0x9c4a70
// 009c4a42  68e83bb400           push 0xb43be8
// 009c4a47  8d878c010000         lea eax, [edi + 0x18c]
// 009c4a4d  50                   push eax
// 009c4a4e  683c33c100           push 0xc1333c
// 009c4a53  56                   push esi
// 009c4a54  e8b7390100           call 0x9d8410
// 009c4a59  6a00                 push 0
// 009c4a5b  8d8fa4010000         lea ecx, [edi + 0x1a4]
// 009c4a61  51                   push ecx
// 009c4a62  682433c100           push 0xc13324
// 009c4a67  56                   push esi
// 009c4a68  e8b3380100           call 0x9d8320
// 009c4a6d  83c420               add esp, 0x20
// 009c4a70  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 009c4a74  7617                 jbe 0x9c4a8d
// 009c4a76  6a00                 push 0
// 009c4a78  8d97a8010000         lea edx, [edi + 0x1a8]
// 009c4a7e  52                   push edx
// 009c4a7f  68e832c100           push 0xc132e8
// 009c4a84  56                   push esi
// 009c4a85  e896380100           call 0x9d8320
// 009c4a8a  83c410               add esp, 0x10
// 009c4a8d  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 009c4a91  7617                 jbe 0x9c4aaa
// 009c4a93  6a00                 push 0
// 009c4a95  8d87ac010000         lea eax, [edi + 0x1ac]
// 009c4a9b  50                   push eax
// 009c4a9c  686033c100           push 0xc13360
// 009c4aa1  56                   push esi
// 009c4aa2  e809390100           call 0x9d83b0
// 009c4aa7  83c410               add esp, 0x10
// 009c4aaa  837e2800             cmp dword ptr [esi + 0x28], 0
// 009c4aae  740e                 je 0x9c4abe
// 009c4ab0  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 009c4ab6  51                   push ecx
// 009c4ab7  8bcf                 mov ecx, edi
// 009c4ab9  e812f80400           call 0xa142d0
// 009c4abe  5f                   pop edi
// 009c4abf  5e                   pop esi
// 009c4ac0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlEdit@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

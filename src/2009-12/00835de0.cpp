// roc 2009-12 00835de0  unit: CXTPToolBar  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00835de0
//
// 00835de0  56                   push esi
// 00835de1  8b742408             mov esi, dword ptr [esp + 8]
// 00835de5  57                   push edi
// 00835de6  56                   push esi
// 00835de7  8bf9                 mov edi, ecx
// 00835de9  e812feffff           call 0x835c00
// 00835dee  6a01                 push 1
// 00835df0  8d8788010000         lea eax, [edi + 0x188]
// 00835df6  50                   push eax
// 00835df7  68387b9f00           push 0x9f7b38
// 00835dfc  56                   push esi
// 00835dfd  e85eac0100           call 0x850a60
// 00835e02  6a00                 push 0
// 00835e04  8d8f8c010000         lea ecx, [edi + 0x18c]
// 00835e0a  51                   push ecx
// 00835e0b  68307b9f00           push 0x9f7b30
// 00835e10  56                   push esi
// 00835e11  e84aac0100           call 0x850a60
// 00835e16  83c420               add esp, 0x20
// 00835e19  837e2c06             cmp dword ptr [esi + 0x2c], 6
// 00835e1d  7617                 jbe 0x835e36
// 00835e1f  6a01                 push 1
// 00835e21  8d9734010000         lea edx, [edi + 0x134]
// 00835e27  52                   push edx
// 00835e28  68247b9f00           push 0x9f7b24
// 00835e2d  56                   push esi
// 00835e2e  e82dac0100           call 0x850a60
// 00835e33  83c410               add esp, 0x10
// 00835e36  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 00835e3a  7617                 jbe 0x835e53
// 00835e3c  6a01                 push 1
// 00835e3e  8d87a0010000         lea eax, [edi + 0x1a0]
// 00835e44  50                   push eax
// 00835e45  68107b9f00           push 0x9f7b10
// 00835e4a  56                   push esi
// 00835e4b  e810ac0100           call 0x850a60
// 00835e50  83c410               add esp, 0x10
// 00835e53  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 00835e57  761d                 jbe 0x835e76
// 00835e59  6a01                 push 1
// 00835e5b  8d8f58010000         lea ecx, [edi + 0x158]
// 00835e61  51                   push ecx
// 00835e62  68f87a9f00           push 0x9f7af8
// 00835e67  56                   push esi
// 00835e68  e8f3ab0100           call 0x850a60
// 00835e6d  83c410               add esp, 0x10
// 00835e70  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 00835e74  7719                 ja 0x835e8f
// 00835e76  837e2800             cmp dword ptr [esi + 0x28], 0
// 00835e7a  7413                 je 0x835e8f
// 00835e7c  83bff800000000       cmp dword ptr [edi + 0xf8], 0
// 00835e83  750a                 jne 0x835e8f
// 00835e85  c7873401000000000000 mov dword ptr [edi + 0x134], 0
// 00835e8f  5f                   pop edi
// 00835e90  5e                   pop esi
// 00835e91  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPToolBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

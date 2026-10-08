// roc 2012-06 009c3d70  unit: CXTPToolBar  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c3d70
//
// 009c3d70  56                   push esi
// 009c3d71  8b742408             mov esi, dword ptr [esp + 8]
// 009c3d75  57                   push edi
// 009c3d76  56                   push esi
// 009c3d77  8bf9                 mov edi, ecx
// 009c3d79  e812feffff           call 0x9c3b90
// 009c3d7e  6a01                 push 1
// 009c3d80  8d8788010000         lea eax, [edi + 0x188]
// 009c3d86  50                   push eax
// 009c3d87  686031c100           push 0xc13160
// 009c3d8c  56                   push esi
// 009c3d8d  e81e460100           call 0x9d83b0
// 009c3d92  6a00                 push 0
// 009c3d94  8d8f8c010000         lea ecx, [edi + 0x18c]
// 009c3d9a  51                   push ecx
// 009c3d9b  685831c100           push 0xc13158
// 009c3da0  56                   push esi
// 009c3da1  e80a460100           call 0x9d83b0
// 009c3da6  83c420               add esp, 0x20
// 009c3da9  837e2c06             cmp dword ptr [esi + 0x2c], 6
// 009c3dad  7617                 jbe 0x9c3dc6
// 009c3daf  6a01                 push 1
// 009c3db1  8d9734010000         lea edx, [edi + 0x134]
// 009c3db7  52                   push edx
// 009c3db8  684c31c100           push 0xc1314c
// 009c3dbd  56                   push esi
// 009c3dbe  e8ed450100           call 0x9d83b0
// 009c3dc3  83c410               add esp, 0x10
// 009c3dc6  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 009c3dca  7617                 jbe 0x9c3de3
// 009c3dcc  6a01                 push 1
// 009c3dce  8d87a0010000         lea eax, [edi + 0x1a0]
// 009c3dd4  50                   push eax
// 009c3dd5  683831c100           push 0xc13138
// 009c3dda  56                   push esi
// 009c3ddb  e8d0450100           call 0x9d83b0
// 009c3de0  83c410               add esp, 0x10
// 009c3de3  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 009c3de7  761d                 jbe 0x9c3e06
// 009c3de9  6a01                 push 1
// 009c3deb  8d8f58010000         lea ecx, [edi + 0x158]
// 009c3df1  51                   push ecx
// 009c3df2  682031c100           push 0xc13120
// 009c3df7  56                   push esi
// 009c3df8  e8b3450100           call 0x9d83b0
// 009c3dfd  83c410               add esp, 0x10
// 009c3e00  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 009c3e04  7719                 ja 0x9c3e1f
// 009c3e06  837e2800             cmp dword ptr [esi + 0x28], 0
// 009c3e0a  7413                 je 0x9c3e1f
// 009c3e0c  83bff800000000       cmp dword ptr [edi + 0xf8], 0
// 009c3e13  750a                 jne 0x9c3e1f
// 009c3e15  c7873401000000000000 mov dword ptr [edi + 0x134], 0
// 009c3e1f  5f                   pop edi
// 009c3e20  5e                   pop esi
// 009c3e21  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPToolBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

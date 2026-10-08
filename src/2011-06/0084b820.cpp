// roc 2011-06 0084b820  unit: CXTPToolBar  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084b820
//
// 0084b820  56                   push esi
// 0084b821  8b742408             mov esi, dword ptr [esp + 8]
// 0084b825  57                   push edi
// 0084b826  56                   push esi
// 0084b827  8bf9                 mov edi, ecx
// 0084b829  e812feffff           call 0x84b640
// 0084b82e  6a01                 push 1
// 0084b830  8d8788010000         lea eax, [edi + 0x188]
// 0084b836  50                   push eax
// 0084b837  68687aac00           push 0xac7a68
// 0084b83c  56                   push esi
// 0084b83d  e86e470100           call 0x85ffb0
// 0084b842  6a00                 push 0
// 0084b844  8d8f8c010000         lea ecx, [edi + 0x18c]
// 0084b84a  51                   push ecx
// 0084b84b  68607aac00           push 0xac7a60
// 0084b850  56                   push esi
// 0084b851  e85a470100           call 0x85ffb0
// 0084b856  83c420               add esp, 0x20
// 0084b859  837e2c06             cmp dword ptr [esi + 0x2c], 6
// 0084b85d  7617                 jbe 0x84b876
// 0084b85f  6a01                 push 1
// 0084b861  8d9734010000         lea edx, [edi + 0x134]
// 0084b867  52                   push edx
// 0084b868  68547aac00           push 0xac7a54
// 0084b86d  56                   push esi
// 0084b86e  e83d470100           call 0x85ffb0
// 0084b873  83c410               add esp, 0x10
// 0084b876  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 0084b87a  7617                 jbe 0x84b893
// 0084b87c  6a01                 push 1
// 0084b87e  8d87a0010000         lea eax, [edi + 0x1a0]
// 0084b884  50                   push eax
// 0084b885  68407aac00           push 0xac7a40
// 0084b88a  56                   push esi
// 0084b88b  e820470100           call 0x85ffb0
// 0084b890  83c410               add esp, 0x10
// 0084b893  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 0084b897  761d                 jbe 0x84b8b6
// 0084b899  6a01                 push 1
// 0084b89b  8d8f58010000         lea ecx, [edi + 0x158]
// 0084b8a1  51                   push ecx
// 0084b8a2  68287aac00           push 0xac7a28
// 0084b8a7  56                   push esi
// 0084b8a8  e803470100           call 0x85ffb0
// 0084b8ad  83c410               add esp, 0x10
// 0084b8b0  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 0084b8b4  7719                 ja 0x84b8cf
// 0084b8b6  837e2800             cmp dword ptr [esi + 0x28], 0
// 0084b8ba  7413                 je 0x84b8cf
// 0084b8bc  83bff800000000       cmp dword ptr [edi + 0xf8], 0
// 0084b8c3  750a                 jne 0x84b8cf
// 0084b8c5  c7873401000000000000 mov dword ptr [edi + 0x134], 0
// 0084b8cf  5f                   pop edi
// 0084b8d0  5e                   pop esi
// 0084b8d1  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPToolBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

// roc 2009-06 0075b390  unit: CXTPPopupBar  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075b390
//
// 0075b390  53                   push ebx
// 0075b391  55                   push ebp
// 0075b392  56                   push esi
// 0075b393  8b742410             mov esi, dword ptr [esp + 0x10]
// 0075b397  57                   push edi
// 0075b398  56                   push esi
// 0075b399  8bf9                 mov edi, ecx
// 0075b39b  e840faffff           call 0x75ade0
// 0075b3a0  6a00                 push 0
// 0075b3a2  8d87b0010000         lea eax, [edi + 0x1b0]
// 0075b3a8  50                   push eax
// 0075b3a9  6810778f00           push 0x8f7710
// 0075b3ae  56                   push esi
// 0075b3af  e84ca90100           call 0x775d00
// 0075b3b4  6816d28a00           push 0x8ad216
// 0075b3b9  8d8ff0010000         lea ecx, [edi + 0x1f0]
// 0075b3bf  51                   push ecx
// 0075b3c0  6800778f00           push 0x8f7700
// 0075b3c5  56                   push esi
// 0075b3c6  e895a90100           call 0x775d60
// 0075b3cb  6a00                 push 0
// 0075b3cd  8d97f4010000         lea edx, [edi + 0x1f4]
// 0075b3d3  52                   push edx
// 0075b3d4  68f4768f00           push 0x8f76f4
// 0075b3d9  56                   push esi
// 0075b3da  e8c1a80100           call 0x775ca0
// 0075b3df  6a00                 push 0
// 0075b3e1  8d87f8010000         lea eax, [edi + 0x1f8]
// 0075b3e7  50                   push eax
// 0075b3e8  68e4768f00           push 0x8f76e4
// 0075b3ed  56                   push esi
// 0075b3ee  e8ada80100           call 0x775ca0
// 0075b3f3  83c440               add esp, 0x40
// 0075b3f6  837e2c03             cmp dword ptr [esi + 0x2c], 3
// 0075b3fa  7647                 jbe 0x75b443
// 0075b3fc  83ec10               sub esp, 0x10
// 0075b3ff  8bc4                 mov eax, esp
// 0075b401  b902000000           mov ecx, 2
// 0075b406  8908                 mov dword ptr [eax], ecx
// 0075b408  8bd9                 mov ebx, ecx
// 0075b40a  8d8f00020000         lea ecx, [edi + 0x200]
// 0075b410  51                   push ecx
// 0075b411  ba04000000           mov edx, 4
// 0075b416  895004               mov dword ptr [eax + 4], edx
// 0075b419  8bea                 mov ebp, edx
// 0075b41b  68dc768f00           push 0x8f76dc
// 0075b420  895808               mov dword ptr [eax + 8], ebx
// 0075b423  56                   push esi
// 0075b424  89680c               mov dword ptr [eax + 0xc], ebp
// 0075b427  e8f4a90100           call 0x775e20
// 0075b42c  6a01                 push 1
// 0075b42e  8d97fc010000         lea edx, [edi + 0x1fc]
// 0075b434  52                   push edx
// 0075b435  68d0768f00           push 0x8f76d0
// 0075b43a  56                   push esi
// 0075b43b  e8c0a80100           call 0x775d00
// 0075b440  83c42c               add esp, 0x2c
// 0075b443  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 0075b447  7617                 jbe 0x75b460
// 0075b449  6a00                 push 0
// 0075b44b  8d8710020000         lea eax, [edi + 0x210]
// 0075b451  50                   push eax
// 0075b452  68c0768f00           push 0x8f76c0
// 0075b457  56                   push esi
// 0075b458  e8a3a80100           call 0x775d00
// 0075b45d  83c410               add esp, 0x10
// 0075b460  837e2c14             cmp dword ptr [esi + 0x2c], 0x14
// 0075b464  7309                 jae 0x75b46f
// 0075b466  6a01                 push 1
// 0075b468  8bcf                 mov ecx, edi
// 0075b46a  e8d11dfdff           call 0x72d240
// 0075b46f  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 0075b473  7617                 jbe 0x75b48c
// 0075b475  6a00                 push 0
// 0075b477  81c714020000         add edi, 0x214
// 0075b47d  57                   push edi
// 0075b47e  68b4768f00           push 0x8f76b4
// 0075b483  56                   push esi
// 0075b484  e877a80100           call 0x775d00
// 0075b489  83c410               add esp, 0x10
// 0075b48c  5f                   pop edi
// 0075b48d  5e                   pop esi
// 0075b48e  5d                   pop ebp
// 0075b48f  5b                   pop ebx
// 0075b490  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPPopupBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

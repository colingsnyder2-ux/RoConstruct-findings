// roc 2009-06 0075afc0  unit: CXTPToolBar  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075afc0
//
// 0075afc0  56                   push esi
// 0075afc1  8b742408             mov esi, dword ptr [esp + 8]
// 0075afc5  57                   push edi
// 0075afc6  56                   push esi
// 0075afc7  8bf9                 mov edi, ecx
// 0075afc9  e812feffff           call 0x75ade0
// 0075afce  6a01                 push 1
// 0075afd0  8d8788010000         lea eax, [edi + 0x188]
// 0075afd6  50                   push eax
// 0075afd7  6890768f00           push 0x8f7690
// 0075afdc  56                   push esi
// 0075afdd  e81ead0100           call 0x775d00
// 0075afe2  6a00                 push 0
// 0075afe4  8d8f8c010000         lea ecx, [edi + 0x18c]
// 0075afea  51                   push ecx
// 0075afeb  6888768f00           push 0x8f7688
// 0075aff0  56                   push esi
// 0075aff1  e80aad0100           call 0x775d00
// 0075aff6  83c420               add esp, 0x20
// 0075aff9  837e2c06             cmp dword ptr [esi + 0x2c], 6
// 0075affd  7617                 jbe 0x75b016
// 0075afff  6a01                 push 1
// 0075b001  8d9734010000         lea edx, [edi + 0x134]
// 0075b007  52                   push edx
// 0075b008  687c768f00           push 0x8f767c
// 0075b00d  56                   push esi
// 0075b00e  e8edac0100           call 0x775d00
// 0075b013  83c410               add esp, 0x10
// 0075b016  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 0075b01a  7617                 jbe 0x75b033
// 0075b01c  6a01                 push 1
// 0075b01e  8d87a0010000         lea eax, [edi + 0x1a0]
// 0075b024  50                   push eax
// 0075b025  6868768f00           push 0x8f7668
// 0075b02a  56                   push esi
// 0075b02b  e8d0ac0100           call 0x775d00
// 0075b030  83c410               add esp, 0x10
// 0075b033  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 0075b037  761d                 jbe 0x75b056
// 0075b039  6a01                 push 1
// 0075b03b  8d8f58010000         lea ecx, [edi + 0x158]
// 0075b041  51                   push ecx
// 0075b042  6850768f00           push 0x8f7650
// 0075b047  56                   push esi
// 0075b048  e8b3ac0100           call 0x775d00
// 0075b04d  83c410               add esp, 0x10
// 0075b050  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 0075b054  7719                 ja 0x75b06f
// 0075b056  837e2800             cmp dword ptr [esi + 0x28], 0
// 0075b05a  7413                 je 0x75b06f
// 0075b05c  83bff800000000       cmp dword ptr [edi + 0xf8], 0
// 0075b063  750a                 jne 0x75b06f
// 0075b065  c7873401000000000000 mov dword ptr [edi + 0x134], 0
// 0075b06f  5f                   pop edi
// 0075b070  5e                   pop esi
// 0075b071  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPToolBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

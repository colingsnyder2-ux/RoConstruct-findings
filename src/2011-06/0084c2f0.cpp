// roc 2011-06 0084c2f0  unit: CXTPToolBar::CControlButtonExpand  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084c2f0
//
// 0084c2f0  56                   push esi
// 0084c2f1  8b742408             mov esi, dword ptr [esp + 8]
// 0084c2f5  57                   push edi
// 0084c2f6  56                   push esi
// 0084c2f7  8bf9                 mov edi, ecx
// 0084c2f9  e8f2fbffff           call 0x84bef0
// 0084c2fe  837e2800             cmp dword ptr [esi + 0x28], 0
// 0084c302  752e                 jne 0x84c332
// 0084c304  8b8778010000         mov eax, dword ptr [edi + 0x178]
// 0084c30a  85c0                 test eax, eax
// 0084c30c  7413                 je 0x84c321
// 0084c30e  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 0084c314  6a00                 push 0
// 0084c316  8d4c2410             lea ecx, [esp + 0x10]
// 0084c31a  89442410             mov dword ptr [esp + 0x10], eax
// 0084c31e  51                   push ecx
// 0084c31f  eb1a                 jmp 0x84c33b
// 0084c321  6a00                 push 0
// 0084c323  8d4c2410             lea ecx, [esp + 0x10]
// 0084c327  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0084c32f  51                   push ecx
// 0084c330  eb09                 jmp 0x84c33b
// 0084c332  6a00                 push 0
// 0084c334  8d977c010000         lea edx, [edi + 0x17c]
// 0084c33a  52                   push edx
// 0084c33b  68e07bac00           push 0xac7be0
// 0084c340  56                   push esi
// 0084c341  e80a3c0100           call 0x85ff50
// 0084c346  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0084c349  83c410               add esp, 0x10
// 0084c34c  83f804               cmp eax, 4
// 0084c34f  761c                 jbe 0x84c36d
// 0084c351  83f812               cmp eax, 0x12
// 0084c354  7317                 jae 0x84c36d
// 0084c356  6a00                 push 0
// 0084c358  81c748010000         add edi, 0x148
// 0084c35e  57                   push edi
// 0084c35f  6844e2a900           push 0xa9e244
// 0084c364  56                   push esi
// 0084c365  e8e63b0100           call 0x85ff50
// 0084c36a  83c410               add esp, 0x10
// 0084c36d  5f                   pop edi
// 0084c36e  5e                   pop esi
// 0084c36f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlPopup@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

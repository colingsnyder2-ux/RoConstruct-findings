// roc 2009-06 0075ba90  unit: CXTPToolBar::CControlButtonExpand  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075ba90
//
// 0075ba90  56                   push esi
// 0075ba91  8b742408             mov esi, dword ptr [esp + 8]
// 0075ba95  57                   push edi
// 0075ba96  56                   push esi
// 0075ba97  8bf9                 mov edi, ecx
// 0075ba99  e8f2fbffff           call 0x75b690
// 0075ba9e  837e2800             cmp dword ptr [esi + 0x28], 0
// 0075baa2  752e                 jne 0x75bad2
// 0075baa4  8b8778010000         mov eax, dword ptr [edi + 0x178]
// 0075baaa  85c0                 test eax, eax
// 0075baac  7413                 je 0x75bac1
// 0075baae  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 0075bab4  6a00                 push 0
// 0075bab6  8d4c2410             lea ecx, [esp + 0x10]
// 0075baba  89442410             mov dword ptr [esp + 0x10], eax
// 0075babe  51                   push ecx
// 0075babf  eb1a                 jmp 0x75badb
// 0075bac1  6a00                 push 0
// 0075bac3  8d4c2410             lea ecx, [esp + 0x10]
// 0075bac7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0075bacf  51                   push ecx
// 0075bad0  eb09                 jmp 0x75badb
// 0075bad2  6a00                 push 0
// 0075bad4  8d977c010000         lea edx, [edi + 0x17c]
// 0075bada  52                   push edx
// 0075badb  6810788f00           push 0x8f7810
// 0075bae0  56                   push esi
// 0075bae1  e8baa10100           call 0x775ca0
// 0075bae6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0075bae9  83c410               add esp, 0x10
// 0075baec  83f804               cmp eax, 4
// 0075baef  761c                 jbe 0x75bb0d
// 0075baf1  83f812               cmp eax, 0x12
// 0075baf4  7317                 jae 0x75bb0d
// 0075baf6  6a00                 push 0
// 0075baf8  81c748010000         add edi, 0x148
// 0075bafe  57                   push edi
// 0075baff  686c278e00           push 0x8e276c
// 0075bb04  56                   push esi
// 0075bb05  e896a10100           call 0x775ca0
// 0075bb0a  83c410               add esp, 0x10
// 0075bb0d  5f                   pop edi
// 0075bb0e  5e                   pop esi
// 0075bb0f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlPopup@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

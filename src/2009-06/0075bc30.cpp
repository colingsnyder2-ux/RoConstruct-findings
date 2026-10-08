// roc 2009-06 0075bc30  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075bc30
//
// 0075bc30  56                   push esi
// 0075bc31  8b742408             mov esi, dword ptr [esp + 8]
// 0075bc35  57                   push edi
// 0075bc36  56                   push esi
// 0075bc37  8bf9                 mov edi, ecx
// 0075bc39  e852faffff           call 0x75b690
// 0075bc3e  837e2c05             cmp dword ptr [esi + 0x2c], 5
// 0075bc42  762b                 jbe 0x75bc6f
// 0075bc44  6a00                 push 0
// 0075bc46  8d8778010000         lea eax, [edi + 0x178]
// 0075bc4c  50                   push eax
// 0075bc4d  68b4788f00           push 0x8f78b4
// 0075bc52  56                   push esi
// 0075bc53  e8a8a00100           call 0x775d00
// 0075bc58  6a00                 push 0
// 0075bc5a  8d8f60010000         lea ecx, [edi + 0x160]
// 0075bc60  51                   push ecx
// 0075bc61  68a4ff8b00           push 0x8bffa4
// 0075bc66  56                   push esi
// 0075bc67  e834a00100           call 0x775ca0
// 0075bc6c  83c420               add esp, 0x20
// 0075bc6f  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 0075bc73  7617                 jbe 0x75bc8c
// 0075bc75  6a00                 push 0
// 0075bc77  8d977c010000         lea edx, [edi + 0x17c]
// 0075bc7d  52                   push edx
// 0075bc7e  68a8788f00           push 0x8f78a8
// 0075bc83  56                   push esi
// 0075bc84  e877a00100           call 0x775d00
// 0075bc89  83c410               add esp, 0x10
// 0075bc8c  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 0075bc90  762e                 jbe 0x75bcc0
// 0075bc92  6816d28a00           push 0x8ad216
// 0075bc97  8d878c010000         lea eax, [edi + 0x18c]
// 0075bc9d  50                   push eax
// 0075bc9e  6874788f00           push 0x8f7874
// 0075bca3  56                   push esi
// 0075bca4  e8b7a00100           call 0x775d60
// 0075bca9  6a00                 push 0
// 0075bcab  8d8fa4010000         lea ecx, [edi + 0x1a4]
// 0075bcb1  51                   push ecx
// 0075bcb2  685c788f00           push 0x8f785c
// 0075bcb7  56                   push esi
// 0075bcb8  e8e39f0100           call 0x775ca0
// 0075bcbd  83c420               add esp, 0x20
// 0075bcc0  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 0075bcc4  7617                 jbe 0x75bcdd
// 0075bcc6  6a00                 push 0
// 0075bcc8  8d97a8010000         lea edx, [edi + 0x1a8]
// 0075bcce  52                   push edx
// 0075bccf  6820788f00           push 0x8f7820
// 0075bcd4  56                   push esi
// 0075bcd5  e8c69f0100           call 0x775ca0
// 0075bcda  83c410               add esp, 0x10
// 0075bcdd  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 0075bce1  7617                 jbe 0x75bcfa
// 0075bce3  6a00                 push 0
// 0075bce5  8d87ac010000         lea eax, [edi + 0x1ac]
// 0075bceb  50                   push eax
// 0075bcec  6898788f00           push 0x8f7898
// 0075bcf1  56                   push esi
// 0075bcf2  e809a00100           call 0x775d00
// 0075bcf7  83c410               add esp, 0x10
// 0075bcfa  837e2800             cmp dword ptr [esi + 0x28], 0
// 0075bcfe  740e                 je 0x75bd0e
// 0075bd00  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 0075bd06  51                   push ecx
// 0075bd07  8bcf                 mov ecx, edi
// 0075bd09  e8d24a0500           call 0x7b07e0
// 0075bd0e  5f                   pop edi
// 0075bd0f  5e                   pop esi
// 0075bd10  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlEdit@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

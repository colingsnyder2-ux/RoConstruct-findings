// roc 2009-06 0075bb20  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075bb20
//
// 0075bb20  53                   push ebx
// 0075bb21  56                   push esi
// 0075bb22  57                   push edi
// 0075bb23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075bb27  57                   push edi
// 0075bb28  8bf1                 mov esi, ecx
// 0075bb2a  e861ffffff           call 0x75ba90
// 0075bb2f  6a01                 push 1
// 0075bb31  8d9e88010000         lea ebx, [esi + 0x188]
// 0075bb37  53                   push ebx
// 0075bb38  688c788f00           push 0x8f788c
// 0075bb3d  57                   push edi
// 0075bb3e  e8bda10100           call 0x775d00
// 0075bb43  6a00                 push 0
// 0075bb45  8d8660010000         lea eax, [esi + 0x160]
// 0075bb4b  50                   push eax
// 0075bb4c  68a4ff8b00           push 0x8bffa4
// 0075bb51  57                   push edi
// 0075bb52  e849a10100           call 0x775ca0
// 0075bb57  6a00                 push 0
// 0075bb59  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0075bb5f  51                   push ecx
// 0075bb60  6880788f00           push 0x8f7880
// 0075bb65  57                   push edi
// 0075bb66  e835a10100           call 0x775ca0
// 0075bb6b  83c430               add esp, 0x30
// 0075bb6e  837f2c08             cmp dword ptr [edi + 0x2c], 8
// 0075bb72  766d                 jbe 0x75bbe1
// 0075bb74  6816d28a00           push 0x8ad216
// 0075bb79  8d96a8010000         lea edx, [esi + 0x1a8]
// 0075bb7f  52                   push edx
// 0075bb80  6874788f00           push 0x8f7874
// 0075bb85  57                   push edi
// 0075bb86  e8d5a10100           call 0x775d60
// 0075bb8b  6a00                 push 0
// 0075bb8d  8d86b4010000         lea eax, [esi + 0x1b4]
// 0075bb93  50                   push eax
// 0075bb94  685c788f00           push 0x8f785c
// 0075bb99  57                   push edi
// 0075bb9a  e801a10100           call 0x775ca0
// 0075bb9f  6a00                 push 0
// 0075bba1  8d8eac010000         lea ecx, [esi + 0x1ac]
// 0075bba7  51                   push ecx
// 0075bba8  684c788f00           push 0x8f784c
// 0075bbad  57                   push edi
// 0075bbae  e84da10100           call 0x775d00
// 0075bbb3  6a00                 push 0
// 0075bbb5  8d96bc010000         lea edx, [esi + 0x1bc]
// 0075bbbb  52                   push edx
// 0075bbbc  6840788f00           push 0x8f7840
// 0075bbc1  57                   push edi
// 0075bbc2  e8d9a00100           call 0x775ca0
// 0075bbc7  83c440               add esp, 0x40
// 0075bbca  6a0c                 push 0xc
// 0075bbcc  8d86c4010000         lea eax, [esi + 0x1c4]
// 0075bbd2  50                   push eax
// 0075bbd3  682c788f00           push 0x8f782c
// 0075bbd8  57                   push edi
// 0075bbd9  e8c2a00100           call 0x775ca0
// 0075bbde  83c410               add esp, 0x10
// 0075bbe1  837f2c10             cmp dword ptr [edi + 0x2c], 0x10
// 0075bbe5  7617                 jbe 0x75bbfe
// 0075bbe7  6a00                 push 0
// 0075bbe9  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 0075bbef  51                   push ecx
// 0075bbf0  6820788f00           push 0x8f7820
// 0075bbf5  57                   push edi
// 0075bbf6  e8a5a00100           call 0x775ca0
// 0075bbfb  83c410               add esp, 0x10
// 0075bbfe  837f2800             cmp dword ptr [edi + 0x28], 0
// 0075bc02  7418                 je 0x75bc1c
// 0075bc04  8b13                 mov edx, dword ptr [ebx]
// 0075bc06  52                   push edx
// 0075bc07  8bce                 mov ecx, esi
// 0075bc09  e852f6fbff           call 0x71b260
// 0075bc0e  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 0075bc14  50                   push eax
// 0075bc15  8bce                 mov ecx, esi
// 0075bc17  e8f408fcff           call 0x71c510
// 0075bc1c  5f                   pop edi
// 0075bc1d  5e                   pop esi
// 0075bc1e  5b                   pop ebx
// 0075bc1f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlComboBox@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

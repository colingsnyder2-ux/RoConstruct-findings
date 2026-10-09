// roc 2009-12 00836a50  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836a50
//
// 00836a50  56                   push esi
// 00836a51  8b742408             mov esi, dword ptr [esp + 8]
// 00836a55  57                   push edi
// 00836a56  56                   push esi
// 00836a57  8bf9                 mov edi, ecx
// 00836a59  e852faffff           call 0x8364b0
// 00836a5e  837e2c05             cmp dword ptr [esi + 0x2c], 5
// 00836a62  762b                 jbe 0x836a8f
// 00836a64  6a00                 push 0
// 00836a66  8d8778010000         lea eax, [edi + 0x178]
// 00836a6c  50                   push eax
// 00836a6d  685c7d9f00           push 0x9f7d5c
// 00836a72  56                   push esi
// 00836a73  e8e89f0100           call 0x850a60
// 00836a78  6a00                 push 0
// 00836a7a  8d8f60010000         lea ecx, [edi + 0x160]
// 00836a80  51                   push ecx
// 00836a81  689c589b00           push 0x9b589c
// 00836a86  56                   push esi
// 00836a87  e8749f0100           call 0x850a00
// 00836a8c  83c420               add esp, 0x20
// 00836a8f  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 00836a93  7617                 jbe 0x836aac
// 00836a95  6a00                 push 0
// 00836a97  8d977c010000         lea edx, [edi + 0x17c]
// 00836a9d  52                   push edx
// 00836a9e  68507d9f00           push 0x9f7d50
// 00836aa3  56                   push esi
// 00836aa4  e8b79f0100           call 0x850a60
// 00836aa9  83c410               add esp, 0x10
// 00836aac  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 00836ab0  762e                 jbe 0x836ae0
// 00836ab2  6856fd9900           push 0x99fd56
// 00836ab7  8d878c010000         lea eax, [edi + 0x18c]
// 00836abd  50                   push eax
// 00836abe  681c7d9f00           push 0x9f7d1c
// 00836ac3  56                   push esi
// 00836ac4  e8f79f0100           call 0x850ac0
// 00836ac9  6a00                 push 0
// 00836acb  8d8fa4010000         lea ecx, [edi + 0x1a4]
// 00836ad1  51                   push ecx
// 00836ad2  68047d9f00           push 0x9f7d04
// 00836ad7  56                   push esi
// 00836ad8  e8239f0100           call 0x850a00
// 00836add  83c420               add esp, 0x20
// 00836ae0  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 00836ae4  7617                 jbe 0x836afd
// 00836ae6  6a00                 push 0
// 00836ae8  8d97a8010000         lea edx, [edi + 0x1a8]
// 00836aee  52                   push edx
// 00836aef  68c87c9f00           push 0x9f7cc8
// 00836af4  56                   push esi
// 00836af5  e8069f0100           call 0x850a00
// 00836afa  83c410               add esp, 0x10
// 00836afd  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 00836b01  7617                 jbe 0x836b1a
// 00836b03  6a00                 push 0
// 00836b05  8d87ac010000         lea eax, [edi + 0x1ac]
// 00836b0b  50                   push eax
// 00836b0c  68407d9f00           push 0x9f7d40
// 00836b11  56                   push esi
// 00836b12  e8499f0100           call 0x850a60
// 00836b17  83c410               add esp, 0x10
// 00836b1a  837e2800             cmp dword ptr [esi + 0x28], 0
// 00836b1e  740e                 je 0x836b2e
// 00836b20  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 00836b26  51                   push ecx
// 00836b27  8bcf                 mov ecx, edi
// 00836b29  e8324b0500           call 0x88b660
// 00836b2e  5f                   pop edi
// 00836b2f  5e                   pop esi
// 00836b30  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlEdit@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

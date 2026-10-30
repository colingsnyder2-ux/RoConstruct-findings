// roc 2009-12 00836940  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836940
//
// 00836940  53                   push ebx
// 00836941  56                   push esi
// 00836942  57                   push edi
// 00836943  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00836947  57                   push edi
// 00836948  8bf1                 mov esi, ecx
// 0083694a  e861ffffff           call 0x8368b0
// 0083694f  6a01                 push 1
// 00836951  8d9e88010000         lea ebx, [esi + 0x188]
// 00836957  53                   push ebx
// 00836958  68347d9f00           push 0x9f7d34
// 0083695d  57                   push edi
// 0083695e  e8fda00100           call 0x850a60
// 00836963  6a00                 push 0
// 00836965  8d8660010000         lea eax, [esi + 0x160]
// 0083696b  50                   push eax
// 0083696c  689c589b00           push 0x9b589c
// 00836971  57                   push edi
// 00836972  e889a00100           call 0x850a00
// 00836977  6a00                 push 0
// 00836979  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0083697f  51                   push ecx
// 00836980  68287d9f00           push 0x9f7d28
// 00836985  57                   push edi
// 00836986  e875a00100           call 0x850a00
// 0083698b  83c430               add esp, 0x30
// 0083698e  837f2c08             cmp dword ptr [edi + 0x2c], 8
// 00836992  766d                 jbe 0x836a01
// 00836994  6856fd9900           push 0x99fd56
// 00836999  8d96a8010000         lea edx, [esi + 0x1a8]
// 0083699f  52                   push edx
// 008369a0  681c7d9f00           push 0x9f7d1c
// 008369a5  57                   push edi
// 008369a6  e815a10100           call 0x850ac0
// 008369ab  6a00                 push 0
// 008369ad  8d86b4010000         lea eax, [esi + 0x1b4]
// 008369b3  50                   push eax
// 008369b4  68047d9f00           push 0x9f7d04
// 008369b9  57                   push edi
// 008369ba  e841a00100           call 0x850a00
// 008369bf  6a00                 push 0
// 008369c1  8d8eac010000         lea ecx, [esi + 0x1ac]
// 008369c7  51                   push ecx
// 008369c8  68f47c9f00           push 0x9f7cf4
// 008369cd  57                   push edi
// 008369ce  e88da00100           call 0x850a60
// 008369d3  6a00                 push 0
// 008369d5  8d96bc010000         lea edx, [esi + 0x1bc]
// 008369db  52                   push edx
// 008369dc  68e87c9f00           push 0x9f7ce8
// 008369e1  57                   push edi
// 008369e2  e819a00100           call 0x850a00
// 008369e7  83c440               add esp, 0x40
// 008369ea  6a0c                 push 0xc
// 008369ec  8d86c4010000         lea eax, [esi + 0x1c4]
// 008369f2  50                   push eax
// 008369f3  68d47c9f00           push 0x9f7cd4
// 008369f8  57                   push edi
// 008369f9  e802a00100           call 0x850a00
// 008369fe  83c410               add esp, 0x10
// 00836a01  837f2c10             cmp dword ptr [edi + 0x2c], 0x10
// 00836a05  7617                 jbe 0x836a1e
// 00836a07  6a00                 push 0
// 00836a09  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 00836a0f  51                   push ecx
// 00836a10  68c87c9f00           push 0x9f7cc8
// 00836a15  57                   push edi
// 00836a16  e8e59f0100           call 0x850a00
// 00836a1b  83c410               add esp, 0x10
// 00836a1e  837f2800             cmp dword ptr [edi + 0x28], 0
// 00836a22  7418                 je 0x836a3c
// 00836a24  8b13                 mov edx, dword ptr [ebx]
// 00836a26  52                   push edx
// 00836a27  8bce                 mov ecx, esi
// 00836a29  e8322afcff           call 0x7f9460
// 00836a2e  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 00836a34  50                   push eax
// 00836a35  8bce                 mov ecx, esi
// 00836a37  e8843cfcff           call 0x7fa6c0
// 00836a3c  5f                   pop edi
// 00836a3d  5e                   pop esi
// 00836a3e  5b                   pop ebx
// 00836a3f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlComboBox@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
